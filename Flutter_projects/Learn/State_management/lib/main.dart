import 'package:flutter/material.dart';
import 'package:state_management/home_screen.dart';
import 'package:state_management/stateful_widget_screen.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {

    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Flutter Demo',
      home: StateFulWidget()
    );
  }
}
