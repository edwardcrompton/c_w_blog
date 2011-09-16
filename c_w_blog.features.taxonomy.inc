<?php
/**
 * @file
 * c_w_blog.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function c_w_blog_taxonomy_default_vocabularies() {
  return array(
    'post_tags' => array(
      'name' => 'Post Tags',
      'machine_name' => 'post_tags',
      'description' => 'Tagging for blog posts',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
