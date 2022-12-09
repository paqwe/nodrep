import pymongo
from pymongo import MongoClient
cluster=MongoClient('mongodb+srv://me:admin123@cluster0.kia2pqp.mongodb.net/?retryWrites=true&w=majority')

db=cluster["myfirstdb"]
collection=db["myfirstcollection"]

# student1={'_id': 100,'name':'vishal','roll no':'12','english':'72','maths':'93','science':'89'}

# collection.insert_one(student1)

results=collection.find({'name':'vishal'})
for result in results:
	print(result)


results=collection.find({'name':'vishal'})
for result in results:
	print(result['name'])



results=collection.find_one({'name':'vishal'})
print(results)

#collection.delete_many({})
collection.update_one({'_id':100},{'$set':{'name':'amar'}})


