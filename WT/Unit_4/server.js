// var url=require('url');
// var http=require('http');
// var fs=require('fs');
// var MongoClient=require('mongodb').MongoClient;

// //Create a server
// http.createServer(function(request,response))
// {
//     //Parse the request containing the filename
//     var pathname=url.parse(request.url).pathname;

//     //Print the name of the file for which the request is made
//     console.log("Request for"+ pathname + " recieved.");

//     if(request.method == "GET"){
//         //Read from MongoDB
//         console.log("Executing MongoDB");
//         MongoClient.connect("mongodb://locationhost:27017",{
//             //useUnifiedTopology: true
//         },function(err,client){
//             if(err){
//                 console.log("Error connecting to MongoDB: ",err);
//                 response.writeHead(500,{'Content-Type':'text/plain'});
//                 response.end('Internal Server Error');
//                 return;
//             }
//             const db=client.db("university");
//             db.collection("student").find().toArray(function(err,docs){
//                 if(err){}
//             })
//         })
//     }
// }