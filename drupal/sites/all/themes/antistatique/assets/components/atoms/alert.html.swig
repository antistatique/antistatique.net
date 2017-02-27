---
title: Alert
name: alert
collection: atoms
variants:
  default: Danger
  success: Success
  info: Info
  warning: Warning
notes: |
  Standard alert component.
---
<div class="alert alert-{{variant|default('danger')}}">
  Well done! You successfully read this important alert message.
</div>
