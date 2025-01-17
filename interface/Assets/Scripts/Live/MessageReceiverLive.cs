using Grpc.Core;
using Protobuf;
using System.Collections;
using System.Collections.Generic;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MessageReceiverLive : MonoBehaviour
{
    public static string IP = null;
    public static string Port = null;
    public static string filename = null;

    public static MessageOfMap map;

    // Start is called before the first frame update
    async void Start()
    {
        try {
            var channel = new Channel(IP + ":" + Port, ChannelCredentials.Insecure);
            var client = new AvailableService.AvailableServiceClient(channel);
            PlayerMsg msg = new PlayerMsg();
            msg.PlayerId = -1;
            msg.ShipType = ShipType.NullShipType;
            msg.TeamId = -1;
            msg.X = msg.Y = -1;
            var response = client.AddPlayer(msg);
            if (await response.ResponseStream.MoveNext()) {
                var responseVal = response.ResponseStream.Current;
                map = responseVal.ObjMessage[0].MapMessage;
            }
            while (await response.ResponseStream.MoveNext()) {
                var responseVal = response.ResponseStream.Current;
                Receive(responseVal);
            }
            IP = null;
            Port = null;
        }catch (RpcException) {
            IP = null;
            Port = null;
        }
    }
    private void Receive(MessageToClient message) {
        foreach (var messageOfObj in message.ObjMessage) {
            switch (messageOfObj.MessageOfObjCase) {
                case MessageOfObj.MessageOfObjOneofCase.ShipMessage:
                    if(MessageManager.GetInstance().ShipG[messageOfObj.ShipMessage.Guid] == null){
                        MessageManager.GetInstance().ShipG[messageOfObj.ShipMessage.Guid] = 
                            Instantiate(ParaDefine.GetInstance().PT(messageOfObj.ShipMessage.ShipType),
                                        new Vector3(messageOfObj.ShipMessage.X, messageOfObj.ShipMessage.Y),
                                        Quaternion.identity,
                                        GameObject.Find("Ship").transform);
                        MessageManager.GetInstance().Ship[messageOfObj.ShipMessage.Guid] = messageOfObj.ShipMessage;
                    }
                    break;
                case MessageOfObj.MessageOfObjOneofCase.BulletMessage:
                    if(MessageManager.GetInstance().BulletG[messageOfObj.BulletMessage.Guid] == null){
                        MessageManager.GetInstance().BulletG[messageOfObj.BulletMessage.Guid] = 
                            Instantiate(ParaDefine.GetInstance().PT(messageOfObj.BulletMessage.Type),
                                        new Vector3(messageOfObj.BulletMessage.X, messageOfObj.BulletMessage.Y),
                                        Quaternion.identity,
                                        GameObject.Find("Bullet").transform);
                        MessageManager.GetInstance().Bullet[messageOfObj.BulletMessage.Guid] = messageOfObj.BulletMessage;
                    }
                    break;
                case MessageOfObj.MessageOfObjOneofCase.FactoryMessage:
                    break;
                case MessageOfObj.MessageOfObjOneofCase.CommunityMessage:
                    break;
                case MessageOfObj.MessageOfObjOneofCase.FortMessage:
                    break;
                case MessageOfObj.MessageOfObjOneofCase.WormholeMessage:
                    break;
                case MessageOfObj.MessageOfObjOneofCase.HomeMessage:
                    break;
                case MessageOfObj.MessageOfObjOneofCase.ResourceMessage:
                    break;
                default: break;
            }
        }
    }
}