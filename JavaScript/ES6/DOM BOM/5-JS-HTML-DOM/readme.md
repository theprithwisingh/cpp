
                 Finding HTML Elements
 Method	                      Description
document.getElementById(id)	->Find an element by element id
document.getElementsByTagName(name)	->Find elements by tag name
document.getElementsByClassName(name)->	Find elements by class name


                 Adding and Deleting Elements
   Method	                                Description
document.createElement(element)->	Create an HTML element
document.removeChild(element)->	    Remove an HTML element
document.appendChild(element)->	    Add an HTML element
document.replaceChild(new, old)->	Replace an HTML element
document.write(text)->	            Write into the HTML outputstream



I can provide examples for using `querySelectorAll()` with different selectors.

1. **Selecting by Tag Name:**
   This example selects all `<p>` elements in the document:
   ```javascript
   const paragraphs = document.querySelectorAll('p');
   ```

2. **Selecting by ID:**
   This example selects the element with the ID `myElement`:
   ```javascript
   const elementById = document.querySelector('#myElement');
   ```

3. **Selecting by Class Name:**
   This example selects all elements with the class `highlighted`:
   ```javascript
   const highlightedElements = document.querySelectorAll('.highlighted');
   ```

4. **Selecting by Attribute Name:**
   This example selects all elements with a `data-category` attribute:
   ```javascript
   const elementsWithDataCategory = document.querySelectorAll('[data-category]');
   ```

5. **Selecting by Attribute Value:**
   This example selects all elements with a `data-category` attribute equal to `fruit`:
   ```javascript
   const fruitElements = document.querySelectorAll('[data-category="fruit"]');
   ```

6. **Selecting by Multiple Criteria:**
   This example selects all `<input>` elements with the class `form-input` that are disabled:
   ```javascript
   const disabledInputs = document.querySelectorAll('input.form-input[disabled]');
   ```

 **JS DOM:**
 document.getElementById(id).style.property = new style
 