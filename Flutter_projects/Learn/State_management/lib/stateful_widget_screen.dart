import 'package:flutter/material.dart';

class StateFulWidget extends StatefulWidget {
  const StateFulWidget({super.key});

  @override
  State<StateFulWidget> createState() => _StateFulWidgetState();
}

class _StateFulWidgetState extends State<StateFulWidget> {
  int x = 0;
  @override
  Widget build(BuildContext context) {
    print("Building");
    return Scaffold(
      appBar: AppBar(
        title: Center(child: Text('CSE')),
      ),
      body: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Container(
            child: Center(child: Text(x.toString(), style: TextStyle(fontSize: 40),)),
          ),
          Text(DateTime.now().toString(), style: TextStyle(fontSize: 15),)
        ],
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: (){
          ++x;
          print(x);
          setState(() {
          });
        },
        child: Icon(Icons.add_box),
      ),
    );
  }
}
