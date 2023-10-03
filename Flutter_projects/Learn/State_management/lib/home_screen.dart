import 'package:flutter/material.dart';
class HomeScreen extends StatelessWidget {
  HomeScreen({super.key});

  int x = 0;
  @override
  Widget build(BuildContext context) {
    print('Building');
    return Scaffold(
      appBar: AppBar(
        title: Center(child: Text('Provider')),
      ),
      body: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Container(
            child: Center(child: Text(x.toString(), style: TextStyle(fontSize: 40),)),
          )
        ],
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: (){
          print(++x);
        },
        child: Icon(Icons.add_box),
      ),
    );
  }
}
