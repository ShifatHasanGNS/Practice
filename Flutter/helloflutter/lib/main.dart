import 'package:flutter/material.dart';

void main() {
  final barColor = const Color(0xFF2475B0);
  final bgColor = const Color(0xFF333945);

  var app = MaterialApp(
    home: Scaffold(
      backgroundColor: bgColor,
      appBar: AppBar(
        backgroundColor: barColor,
      ),
    ),
  );

  runApp(app);
}
