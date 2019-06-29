# Temperature

## Turning Up The Heat, Again!

For this problem, you will create a web page to convert the temperature from Fahrenheit to Celsius and/or Celsius to Fahrenheit.

You will need to use HTML, CSS and of course JavaScript.

## Getting Started

You may want to start by watching a bit of this lecture video introducing JavaScript starting at 01:16:35.

{% video https://www.youtube.com/watch?time_continue=4595&v=uEmF74eHRO8 %}

{% next %}

## Beginning Your First JavaScript Program

1. create a form in the body section of your html
1. create an input element in the form with type=”text” where the user will enter degrees. Make sure to use a unique id to be able to get the element’s value in JavaScript
1. create an input element with type="submit" to be able to submit your form
1. create a JavaScript function that is called when you submit your form, to calculate the conversion and display it. 

{% spoiler "Hints" %}

Remember how to access the value of a text box? If the input element you are trying to access has an id of "name" as in:

```
<input id="name" type="text">
```

you can save the contents of that text box in a variable named "name" like this:

```
let name = document.querySelector("#name").value
```

{% endspoiler %}


{% next %}

## Now Extend it

Once you have your web page working, let's make it look really nice! 

First of all, add your converted result to the DOM rather than using a JavaScript alert. It will look more professional.

Add some CSS to style it, and perhaps add pictures to make it more appealing.

You may want to go even further and create a page that calculates both Fahrenheit to Celsius AND Celsius to Fahrenheit. You may want to use an HTML select tag to create a pull down menu to determine which way to do the conversion. Or perhaps radio buttons to determine which way to convert. 

Make this we page easy to use and personalize it.

{% spoiler "Hints" %}

To add something to the DOM (document object model), you can have an empty div in your html, that you can later add some HTML to.

```
<div id="result"></div>
```

If the converted temperature value is stored in a variable named "newValue", you can add this to your HTML by:

```
document.querySelector("result").innerHTML = newValue
```

{% endspoiler %}


{% next %}

## How to Submit

Execute the below, logging in with your GitHub username and password when prompted. For security, you'll see asterisks (`*`) instead of the actual characters in your password.

```
submit50 temperature@cs50nestm/checks
```
