<?php
/**
 * @file
 * bsc_install.box.inc
 */

/**
 * Implements hook_default_box().
 */
function bsc_install_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'copyright';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Copyright';
  $box->options = array(
    'body' => array(
      'value' => '<p>Copyright xxx biz, 2017. &nbsp;Digital Marketing Support&nbsp;by <a href="http://www.broadstreetconsulting.net" target="_blank">Broadstreet Consulting</a></p>
',
      'format' => 'full_html',
    ),
  );
  $export['copyright'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'install_boxes_1';
  $box->plugin_key = 'simple';
  $box->title = 'Client Centered';
  $box->description = 'Footer - Client Centered';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/test-article">Test Article</a></p>
',
      'format' => 'full_html',
    ),
  );
  $export['install_boxes_1'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'install_boxes_2';
  $box->plugin_key = 'simple';
  $box->title = 'Footer - Misc Links';
  $box->description = 'Footer - Misc Links';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/us-visa-permanent-residency-visas">Green Cards</a><br />
	<a href="/us-visa-temporary-non-immigrant-visas">Temporary</a></p>

<p>&nbsp;</p>
',
      'format' => 'full_html',
    ),
  );
  $export['install_boxes_2'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'install_boxes_3';
  $box->plugin_key = 'simple';
  $box->title = 'Footer - Misc Pages';
  $box->description = 'Footer - Misc Pages';
  $box->options = array(
    'body' => array(
      'value' => '<p>If you speak Spanish, <a href="/es">Click Here </a>to translate the website.</p>
',
      'format' => 'full_html',
    ),
  );
  $export['install_boxes_3'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'install_boxes_4';
  $box->plugin_key = 'simple';
  $box->title = 'Footer - Services';
  $box->description = 'Footer - Services';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="/us-visas">Visas</a><br />
	<a href="/us-visa-immigration-naturalization">Naturalization</a><br />
	<a href="/us-visa-immigration-consular-processing">Consular Processing</a><br />
	<a href="/deferred-action">Deferred Action</a><br />
	<a href="/us-visa-immigration-asylum">Asylum</a></p>
',
      'format' => 'full_html',
    ),
  );
  $export['install_boxes_4'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'install_boxes_5';
  $box->plugin_key = 'simple';
  $box->title = 'About Us';
  $box->description = 'Footer - about us';
  $box->options = array(
    'body' => array(
      'value' => '<div class="row">
	<div class="col-lg-10">Mark Devine and his team are perfectly placed to represent clients with their immigration matters having personally immigrated to the U.S. Mark, born in Coventry, England, first came to the U.S. in O-1 status (non-immigrant with extraordinary ability in athletics), then he was granted Lawful Permanent Residence Status based as an EB-1 (immigrant with extraordinary ability), and while in law school he naturalized as a U.S. citizen.</div>

	<div class="col-lg-2 text-center"><br />
		<a class="btn btn-primary btn-theme pull-right" href="/mark-j-devine-us-citizenship-immigration-services">Know More</a></div>
</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['install_boxes_5'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'install_boxes_6';
  $box->plugin_key = 'simple';
  $box->title = 'Address';
  $box->description = 'Address';
  $box->options = array(
    'body' => array(
      'value' => '<address><strong>Beaufort</strong><br />
	1010 Carteret Street<br />
	Beaufort, SC 29902<br />
	Phone: <a href="tel:843-770-0090">(843)770-0090</a><br />
	Se Habla Espanol:<a href="tel:843-834-2060"> (843)834-2060</a>
	<p>&nbsp;</p>

	<address><strong>Charleston</strong><br />
		507 Savannah Highway<br />
		Charleston, SC 29407<br />
		Phone: <a href="tel:843-789-4586">(843)789-4586</a><br />
		Se Habla Espanol: <a href="tel:843-530-8131">(843)530-8131 </a>

		<p>&nbsp;</p>

		<p>&nbsp;</p>

		<p><a class="btn btn-primary" href="/contact-mark-devine">Contact Page</a></p>
	</address>
</address>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['install_boxes_6'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'site_logo';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Site Logo';
  $box->options = array(
    'body' => array(
      'value' => '<div><a href="/"><img src="/sites/all/themes/bootstrap_subtheme/images/logo.png" /></a></div>
',
      'format' => 'full_html',
    ),
  );
  $export['site_logo'] = $box;

  return $export;
}
