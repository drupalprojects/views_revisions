https://drupal.org/project/views_revisions

Once the module is enabled, a checkbox and textarea will be provided on the
Views UI for creating a revision when editing a View. For example:

  admin/build/views/edit/frontpage

Make changes to a View as you normally would, then before hitting 'Save' you may
choose to create a revision for the View. It is recommended to enter a message
describing the changes you have made so other admins (and your future self) will
understand your intentions.

When a revision is created, it takes a snapshot of the View BEFORE the changes
are saved, allowing you to easily roll back to older versions if necessary.

After revisions have been created, click the 'Views Revisions' link located on
the Views UI to see a list of revisions for that View, for example:

  Front Page Views UI:            admin/build/views/edit/frontpage
  Front Page Views Revisions:     admin/build/views/revisions/frontpage

Click the 'View' link in the revision's table to see the export data for the
View. To revert a view, copy the export data to your clipboard, then delete the
existing view, for example:

  admin/build/views/delete/frontpage

Warning, once you delete the View, all of the Views Revisions will also be
deleted. Make sure your export data is safe in your clipboard, or save a backup
copy somewhere.

After the view is deleted, paste the export code into the View import form:

  admin/build/views/import

Compatability note, this module is designed to work with the 6.x-2.x version of
the Views module.

