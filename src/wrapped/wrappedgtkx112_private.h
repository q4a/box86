#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GO(gtk_about_dialog_get_artists, 
//GO(gtk_about_dialog_get_authors, 
//GO(gtk_about_dialog_get_comments, 
//GO(gtk_about_dialog_get_copyright, 
//GO(gtk_about_dialog_get_documenters, 
//GO(gtk_about_dialog_get_license, 
//GO(gtk_about_dialog_get_logo, 
//GO(gtk_about_dialog_get_logo_icon_name, 
//GO(gtk_about_dialog_get_name, 
//GO(gtk_about_dialog_get_program_name, 
//GO(gtk_about_dialog_get_translator_credits, 
GO(gtk_about_dialog_get_type, iFv)
//GO(gtk_about_dialog_get_version, 
//GO(gtk_about_dialog_get_website, 
//GO(gtk_about_dialog_get_website_label, 
//GO(gtk_about_dialog_get_wrap_license, 
//GO(gtk_about_dialog_new, 
//GO(gtk_about_dialog_set_artists, 
//GO(gtk_about_dialog_set_authors, 
//GO(gtk_about_dialog_set_comments, 
//GO(gtk_about_dialog_set_copyright, 
//GO(gtk_about_dialog_set_documenters, 
//GO(gtk_about_dialog_set_email_hook, 
//GO(gtk_about_dialog_set_license, 
//GO(gtk_about_dialog_set_logo, 
//GO(gtk_about_dialog_set_logo_icon_name, 
//GO(gtk_about_dialog_set_name, 
//GO(gtk_about_dialog_set_program_name, 
//GO(gtk_about_dialog_set_translator_credits, 
//GO(gtk_about_dialog_set_url_hook, 
//GO(gtk_about_dialog_set_version, 
//GO(gtk_about_dialog_set_website, 
//GO(gtk_about_dialog_set_website_label, 
//GO(gtk_about_dialog_set_wrap_license, 
GO(gtk_accelerator_get_default_mod_mask, uFv)
GO(gtk_accelerator_get_label, pFui)
GO(gtk_accelerator_name, pFui)
GO(gtk_accelerator_parse, vFppp)
GO(gtk_accelerator_set_default_mod_mask, vFu)
GO(gtk_accelerator_valid, iFui)
GO(gtk_accel_flags_get_type, iFv)
GO(gtk_accel_group_activate, iFpppui)
GO(gtk_accel_group_connect, vFpuiip)  // Closure probably needs wrapping when not null
GO(gtk_accel_group_connect_by_path, vFppp)
GO(gtk_accel_group_disconnect, iFpp)
GO(gtk_accel_group_disconnect_key, iFpui)
//GOM(gtk_accel_group_find, pFEppp)
GO(gtk_accel_group_from_accel_closure, pFp)
GO(gtk_accel_group_get_is_locked, iFp)
GO(gtk_accel_group_get_modifier_mask, iFp)
GO(gtk_accel_group_get_type, iFv)
GO(gtk_accel_group_lock, vFp)
GO(gtk_accel_group_new, pFv)
GO(gtk_accel_group_query, pFpuip)
GO(gtk_accel_groups_activate, iFpui)
GO(gtk_accel_groups_from_object, pFp)
GO(gtk_accel_group_unlock, vFp)
//GO(gtk_accel_label_get_accel_widget, 
//GO(gtk_accel_label_get_accel_width, 
GO(gtk_accel_label_get_type, iFv)
//GO(gtk_accel_label_new, 
//GO(gtk_accel_label_refetch, 
//GO(gtk_accel_label_set_accel_closure, 
//GO(gtk_accel_label_set_accel_widget, 
//GO(gtk_accel_map_add_entry, 
//GO(gtk_accel_map_add_filter, 
//GO(gtk_accel_map_change_entry, 
//GO(gtk_accel_map_foreach, 
//GO(gtk_accel_map_foreach_unfiltered, 
//GO(gtk_accel_map_get, 
GO(gtk_accel_map_get_type, iFv)
//GO(gtk_accel_map_load, 
//GO(gtk_accel_map_load_fd, 
//GO(gtk_accel_map_load_scanner, 
//GO(gtk_accel_map_lock_path, 
//GO(gtk_accel_map_lookup_entry, 
//GO(gtk_accel_map_save, 
//GO(gtk_accel_map_save_fd, 
//GO(gtk_accel_map_unlock_path, 
//GO(gtk_accessible_connect_widget_destroyed, 
GO(gtk_accessible_get_type, iFv)
//GO(gtk_accessible_get_widget, 
//GO(gtk_accessible_set_widget, 
//GO(gtk_action_activate, 
//GO(gtk_action_block_activate, 
//GO(gtk_action_block_activate_from, 
//GO(gtk_action_connect_accelerator, 
//GO(gtk_action_connect_proxy, 
//GO(gtk_action_create_icon, 
//GO(gtk_action_create_menu, 
//GO(gtk_action_create_menu_item, 
//GO(gtk_action_create_tool_item, 
//GO(gtk_action_disconnect_accelerator, 
//GO(gtk_action_disconnect_proxy, 
//GO(gtk_action_get_accel_closure, 
//GO(gtk_action_get_accel_path, 
//GO(gtk_action_get_always_show_image, 
//GO(gtk_action_get_gicon, 
//GO(gtk_action_get_icon_name, 
//GO(gtk_action_get_is_important, 
//GO(gtk_action_get_label, 
//GO(gtk_action_get_name, 
//GO(gtk_action_get_proxies, 
//GO(gtk_action_get_sensitive, 
//GO(gtk_action_get_short_label, 
//GO(gtk_action_get_stock_id, 
//GO(gtk_action_get_tooltip, 
GO(gtk_action_get_type, iFv)
//GO(gtk_action_get_visible, 
//GO(gtk_action_get_visible_horizontal, 
//GO(gtk_action_get_visible_vertical, 
//GO(gtk_action_group_add_action, 
//GO(gtk_action_group_add_actions, 
//GO(gtk_action_group_add_actions_full, 
//GO(gtk_action_group_add_action_with_accel, 
//GO(gtk_action_group_add_radio_actions, 
//GO(gtk_action_group_add_radio_actions_full, 
//GO(gtk_action_group_add_toggle_actions, 
//GO(gtk_action_group_add_toggle_actions_full, 
//GO(gtk_action_group_get_action, 
//GO(gtk_action_group_get_name, 
//GO(gtk_action_group_get_sensitive, 
GO(gtk_action_group_get_type, iFv)
//GO(gtk_action_group_get_visible, 
//GO(gtk_action_group_list_actions, 
//GO(gtk_action_group_new, 
//GO(gtk_action_group_remove_action, 
//GO(gtk_action_group_set_sensitive, 
//GO(gtk_action_group_set_translate_func, 
//GO(gtk_action_group_set_translation_domain, 
//GO(gtk_action_group_set_visible, 
//GO(gtk_action_group_translate_string, 
//GO(gtk_action_is_sensitive, 
//GO(gtk_action_is_visible, 
//GO(gtk_action_new, 
//GO(gtk_action_set_accel_group, 
//GO(gtk_action_set_accel_path, 
//GO(gtk_action_set_always_show_image, 
//GO(gtk_action_set_gicon, 
//GO(gtk_action_set_icon_name, 
//GO(gtk_action_set_is_important, 
//GO(gtk_action_set_label, 
//GO(gtk_action_set_sensitive, 
//GO(gtk_action_set_short_label, 
//GO(gtk_action_set_stock_id, 
//GO(gtk_action_set_tooltip, 
//GO(gtk_action_set_visible, 
//GO(gtk_action_set_visible_horizontal, 
//GO(gtk_action_set_visible_vertical, 
//GO(gtk_action_unblock_activate, 
//GO(gtk_action_unblock_activate_from, 
//GO(gtk_activatable_do_set_related_action, 
//GO(gtk_activatable_get_related_action, 
GO(gtk_activatable_get_type, iFv)
//GO(gtk_activatable_get_use_action_appearance, 
//GO(gtk_activatable_set_related_action, 
//GO(gtk_activatable_set_use_action_appearance, 
//GO(gtk_activatable_sync_action_properties, 
GO(gtk_adjustment_changed, vFp)
GO(gtk_adjustment_clamp_page, vFpdd)
GO(gtk_adjustment_configure, vFpdddddd)
GO(gtk_adjustment_get_lower, dFp)
GO(gtk_adjustment_get_page_increment, dFp)
GO(gtk_adjustment_get_page_size, dFp)
GO(gtk_adjustment_get_step_increment, dFp)
GO(gtk_adjustment_get_type, iFv)
GO(gtk_adjustment_get_upper, dFp)
GO(gtk_adjustment_get_value, dFp)
GO(gtk_adjustment_new, pFdddddd)
GO(gtk_adjustment_set_lower, vFpd)
GO(gtk_adjustment_set_page_increment, vFp)
GO(gtk_adjustment_set_page_size, vFpd)
GO(gtk_adjustment_set_step_increment, vFpd)
GO(gtk_adjustment_set_upper, vFpd)
GO(gtk_adjustment_set_value, vFpd)
GO(gtk_adjustment_value_changed, vFp)
GO(gtk_alignment_get_padding, vFppppp)
GO(gtk_alignment_get_type, iFv)
GO(gtk_alignment_new, pFffff)
GO(gtk_alignment_set, vFpffff)
GO(gtk_alignment_set_padding, vFpuuuu)
GO(gtk_alternative_dialog_button_order, iFp)
GO(gtk_anchor_type_get_type, iFv)
GO(gtk_arg_flags_get_type, iFv)
GO(gtk_arrow_get_type, iFv)
//GO(gtk_arrow_new, 
GO(gtk_arrow_placement_get_type, iFv)
//GO(gtk_arrow_set, 
GO(gtk_arrow_type_get_type, iFv)
GO(gtk_aspect_frame_get_type, iFv)
//GO(gtk_aspect_frame_new, 
//GO(gtk_aspect_frame_set, 
//GO(gtk_assistant_add_action_widget, 
//GO(gtk_assistant_append_page, 
//GO(gtk_assistant_commit, 
//GO(gtk_assistant_get_current_page, 
//GO(gtk_assistant_get_n_pages, 
//GO(gtk_assistant_get_nth_page, 
//GO(gtk_assistant_get_page_complete, 
//GO(gtk_assistant_get_page_header_image, 
//GO(gtk_assistant_get_page_side_image, 
//GO(gtk_assistant_get_page_title, 
//GO(gtk_assistant_get_page_type, 
GO(gtk_assistant_get_type, iFv)
//GO(gtk_assistant_insert_page, 
//GO(gtk_assistant_new, 
GO(gtk_assistant_page_type_get_type, iFv)
//GO(gtk_assistant_prepend_page, 
//GO(gtk_assistant_remove_action_widget, 
//GO(gtk_assistant_set_current_page, 
//GO(gtk_assistant_set_forward_page_func, 
//GO(gtk_assistant_set_page_complete, 
//GO(gtk_assistant_set_page_header_image, 
//GO(gtk_assistant_set_page_side_image, 
//GO(gtk_assistant_set_page_title, 
//GO(gtk_assistant_set_page_type, 
//GO(gtk_assistant_update_buttons_state, 
GO(gtk_attach_options_get_type, iFv)
//GO(gtk_binding_entry_add_signal, 
//GO(gtk_binding_entry_add_signall, 
//GO(gtk_binding_entry_clear, 
//GO(gtk_binding_entry_remove, 
//GO(gtk_binding_entry_skip, 
//GO(gtk_binding_parse_binding, 
//GO(gtk_bindings_activate, 
//GO(gtk_bindings_activate_event, 
//GO(gtk_binding_set_activate, 
//GO(gtk_binding_set_add_path, 
//GO(gtk_binding_set_by_class, 
//GO(gtk_binding_set_find, 
//GO(gtk_binding_set_new, 
GO(gtk_bin_get_child, pFp)
GO(gtk_bin_get_type, iFv)
GO(gtk_border_copy, pFp)
GO(gtk_border_free, vFp)
GO(gtk_border_get_type, iFv)
GO(gtk_border_new, pFv)
GO(gtk_box_get_homogeneous, iFp)
GO(gtk_box_get_spacing, iFp)
GO(gtk_box_get_type, iFv)
GO(gtk_box_pack_end, vFppiiu)
GO(gtk_box_pack_end_defaults, vFpp)
GO(gtk_box_pack_start, vFppiiu)
GO(gtk_box_pack_start_defaults, vFpp)
GO(gtk_box_query_child_packing, vFpppppp)
GO(gtk_box_reorder_child, vFppi)
GO(gtk_box_set_child_packing, vFppiiui)
GO(gtk_box_set_homogeneous, vFpi)
GO(gtk_box_set_spacing, vFpi)
GO(gtk_buildable_add_child, vFpppp)
GO(gtk_buildable_construct_child, pFppp)
GO(gtk_buildable_custom_finished, vFppppp)
GO(gtk_buildable_custom_tag_end, vFppppp)
GO(gtk_buildable_custom_tag_start, iFpppppp)
GO(gtk_buildable_get_internal_child, pFppp)
GO(gtk_buildable_get_name, pFp)
GO(gtk_buildable_get_type, iFv)
GO(gtk_buildable_parser_finished, vFpp)
GO(gtk_buildable_set_buildable_property, vFpppp)
GO(gtk_buildable_set_name, vFpp)
GO(gtk_builder_add_from_file, uFppp)
GO(gtk_builder_add_from_string, iFppLp)
GO(gtk_builder_add_objects_from_file, uFpppp)
GO(gtk_builder_add_objects_from_string, uFppLpp)
GO(gtk_builder_connect_signals, vFpp)
GOM(gtk_builder_connect_signals_full, vFEppp)
GO(gtk_builder_error_get_type, iFv)
GO(gtk_builder_error_quark, pFv)
GO(gtk_builder_get_object, pFpp)
GO(gtk_builder_get_objects, pFp)
GO(gtk_builder_get_translation_domain, pFp)
GO(gtk_builder_get_type, iFv)
GO(gtk_builder_get_type_from_name, iFpp)
GO(gtk_builder_new, pFv)
GO(gtk_builder_set_translation_domain, vFpp)
GO(gtk_builder_value_from_string, iFppppp)
GO(gtk_builder_value_from_string_type, iFpippp)
GO(gtk_button_action_get_type, iFv)
GO(gtk_button_box_get_child_ipadding, vFppp)
GO(gtk_button_box_get_child_secondary, iFpp)
GO(gtk_button_box_get_child_size, vFppp)
GO(gtk_button_box_get_layout, iFp)
GO(gtk_button_box_get_type, iFv)
GO(gtk_button_box_set_child_ipadding, vFpii)
GO(gtk_button_box_set_child_secondary, vFppi)
GO(gtk_button_box_set_child_size, vFpii)
GO(gtk_button_box_set_layout, vFpi)
GO(gtk_button_box_style_get_type, iFv)
//GO(gtk_button_clicked, 
//GO(gtk_button_enter, 
GO(gtk_button_get_alignment, vFppp)
GO(gtk_button_get_event_window, pFp)
GO(gtk_button_get_focus_on_click, iFp)
GO(gtk_button_get_image, pFp)
GO(gtk_button_get_image_position, iFp)
GO(gtk_button_get_label, pFp)
GO(gtk_button_get_relief, iFp)
GO(gtk_button_get_type, iFv)
GO(gtk_button_get_use_stock, iFp)
GO(gtk_button_get_use_underline, iFp)
GO(gtk_button_leave, vFp)
GO(gtk_button_new, pFv)
GO(gtk_button_new_from_stock, pFp)
GO(gtk_button_new_with_label, pFp)
GO(gtk_button_new_with_mnemonic, pFp)
GO(gtk_button_pressed, vFp)
GO(gtk_button_released, vFp)
GO(gtk_button_set_alignment, vFpff)
GO(gtk_button_set_focus_on_click, vFpi)
GO(gtk_button_set_image, vFpp)
GO(gtk_button_set_image_position, vFpi)
GO(gtk_button_set_label, vFpp)
GO(gtk_button_set_relief, vFpi)
GO(gtk_button_set_use_stock, vFpi)
GO(gtk_button_set_use_underline, vFpi)
GO(gtk_buttons_type_get_type, iFv)
//GO(gtk_calendar_clear_marks, 
//GO(gtk_calendar_display_options, 
GO(gtk_calendar_display_options_get_type, iFv)
//GO(gtk_calendar_freeze, 
//GO(gtk_calendar_get_date, 
//GO(gtk_calendar_get_detail_height_rows, 
//GO(gtk_calendar_get_detail_width_chars, 
//GO(gtk_calendar_get_display_options, 
GO(gtk_calendar_get_type, iFv)
//GO(gtk_calendar_mark_day, 
//GO(gtk_calendar_new, 
//GO(gtk_calendar_select_day, 
//GO(gtk_calendar_select_month, 
//GO(gtk_calendar_set_detail_func, 
//GO(gtk_calendar_set_detail_height_rows, 
//GO(gtk_calendar_set_detail_width_chars, 
//GO(gtk_calendar_set_display_options, 
//GO(gtk_calendar_thaw, 
//GO(gtk_calendar_unmark_day, 
//GO(gtk_cell_editable_editing_done, 
GO(gtk_cell_editable_get_type, iFv)
//GO(gtk_cell_editable_remove_widget, 
//GO(gtk_cell_editable_start_editing, 
GO(gtk_cell_layout_add_attribute, vFpppi)
GO(gtk_cell_layout_clear, vFp)
GO(gtk_cell_layout_clear_attributes, vFpp)
GO(gtk_cell_layout_get_cells, pFp)
GO(gtk_cell_layout_get_type, iFv)
GO(gtk_cell_layout_pack_end, vFppi)
GO(gtk_cell_layout_pack_start, vFppi)
GO(gtk_cell_layout_reorder, vFppi)
GO(gtk_cell_layout_set_attributes, vFpppppppppp)  // vaarg
//GOM(gtk_cell_layout_set_cell_data_func, vFEppppp)
GO(gtk_cell_renderer_accel_get_type, iFv)
GO(gtk_cell_renderer_accel_mode_get_type, iFv)
//GO(gtk_cell_renderer_accel_new, 
//GO(gtk_cell_renderer_activate, 
GO(gtk_cell_renderer_combo_get_type, iFv)
//GO(gtk_cell_renderer_combo_new, 
//GO(gtk_cell_renderer_editing_canceled, 
//GO(gtk_cell_renderer_get_alignment, 
//GO(gtk_cell_renderer_get_fixed_size, 
//GO(gtk_cell_renderer_get_padding, 
//GO(gtk_cell_renderer_get_sensitive, 
//GO(gtk_cell_renderer_get_size, 
GO(gtk_cell_renderer_get_type, iFv)
//GO(gtk_cell_renderer_get_visible, 
GO(gtk_cell_renderer_mode_get_type, iFv)
GO(gtk_cell_renderer_pixbuf_get_type, iFv)
//GO(gtk_cell_renderer_pixbuf_new, 
GO(gtk_cell_renderer_progress_get_type, iFv)
//GO(gtk_cell_renderer_progress_new, 
//GO(gtk_cell_renderer_render, 
//GO(gtk_cell_renderer_set_alignment, 
//GO(gtk_cell_renderer_set_fixed_size, 
//GO(gtk_cell_renderer_set_padding, 
//GO(gtk_cell_renderer_set_sensitive, 
//GO(gtk_cell_renderer_set_visible, 
GO(gtk_cell_renderer_spin_get_type, iFv)
GO(gtk_cell_renderer_spinner_get_type, iFv)
//GO(gtk_cell_renderer_spinner_new, 
//GO(gtk_cell_renderer_spin_new, 
//GO(gtk_cell_renderer_start_editing, 
GO(gtk_cell_renderer_state_get_type, iFv)
//GO(gtk_cell_renderer_stop_editing, 
GO(gtk_cell_renderer_text_get_type, iFv)
GO(gtk_cell_renderer_text_new, pFv)
GO(gtk_cell_renderer_text_set_fixed_height_from_font, vFpi)
GO(gtk_cell_renderer_toggle_get_activatable, iFp)
GO(gtk_cell_renderer_toggle_get_active, iFp)
GO(gtk_cell_renderer_toggle_get_radio, iFp)
GO(gtk_cell_renderer_toggle_get_type, iFv)
GO(gtk_cell_renderer_toggle_new, pFv)
GO(gtk_cell_renderer_toggle_set_activatable, vFpi)
GO(gtk_cell_renderer_toggle_set_active, vFpi)
GO(gtk_cell_renderer_toggle_set_radio, vFpi)
GO(gtk_cell_type_get_type, iFv)
//GO(gtk_cell_view_get_cell_renderers, 
//GO(gtk_cell_view_get_displayed_row, 
//GO(gtk_cell_view_get_model, 
//GO(gtk_cell_view_get_size_of_row, 
GO(gtk_cell_view_get_type, iFv)
//GO(gtk_cell_view_new, 
//GO(gtk_cell_view_new_with_markup, 
//GO(gtk_cell_view_new_with_pixbuf, 
//GO(gtk_cell_view_new_with_text, 
//GO(gtk_cell_view_set_background_color, 
//GO(gtk_cell_view_set_displayed_row, 
//GO(gtk_cell_view_set_model, 
GO(gtk_check_button_get_type, iFv)
GO(gtk_check_button_new, pFv)
GO(gtk_check_button_new_with_label, pFp)
GO(gtk_check_button_new_with_mnemonic, pFp)
GO(gtk_check_menu_item_get_active, iFp)
GO(gtk_check_menu_item_get_draw_as_radio, iFp)
GO(gtk_check_menu_item_get_inconsistent, iFp)
GO(gtk_check_menu_item_get_type, iFv)
GO(gtk_check_menu_item_new, pFv)
GO(gtk_check_menu_item_new_with_label, pFp)
GO(gtk_check_menu_item_new_with_mnemonic, pFp)
GO(gtk_check_menu_item_set_active, vFpi)
GO(gtk_check_menu_item_set_draw_as_radio, vFpi)
GO(gtk_check_menu_item_set_inconsistent, vFpi)
GO(gtk_check_menu_item_set_show_toggle, vFpi)
GO(gtk_check_menu_item_toggled, vFp)
GO(gtk_check_version, pFuuu)
GO(gtk_clipboard_clear, vFp)
GO(gtk_clipboard_get, pFp)
GO(gtk_clipboard_get_display, pFp)
GO(gtk_clipboard_get_for_display, pFpp)
GO(gtk_clipboard_get_owner, pFp)
GO(gtk_clipboard_get_type, iFv)
//GOM(gtk_clipboard_request_contents, vFEpppp)
//GOM(gtk_clipboard_request_image, vFEppp)
//GOM(gtk_clipboard_request_rich_text, vFEpppp)
//GOM(gtk_clipboard_request_targets, vFEppp)
//GOM(gtk_clipboard_request_text, vFEppp)
//GOM(gtk_clipboard_request_uris, vFEppp)
GO(gtk_clipboard_set_can_store, vFppp)
GO(gtk_clipboard_set_image, vFpp)
GO(gtk_clipboard_set_text, vFppi)
GOM(gtk_clipboard_set_with_data, iFEppuppp)
GOM(gtk_clipboard_set_with_owner, iFEppuppp)
GO(gtk_clipboard_store, vFp)
GO(gtk_clipboard_wait_for_contents, pFpp)
GO(gtk_clipboard_wait_for_image, pFp)
GO(gtk_clipboard_wait_for_rich_text, pFpppp)
GO(gtk_clipboard_wait_for_targets, iFppp)
GO(gtk_clipboard_wait_for_text, pFp)
GO(gtk_clipboard_wait_for_uris, pFp)
GO(gtk_clipboard_wait_is_image_available, iFp)
GO(gtk_clipboard_wait_is_rich_text_available, iFpp)
GO(gtk_clipboard_wait_is_target_available, iFpp)
GO(gtk_clipboard_wait_is_text_available, iFp)
GO(gtk_clipboard_wait_is_uris_available, iFp)
GO(gtk_clist_append, iFpp)
GO(gtk_clist_clear, vFp)
GO(gtk_clist_columns_autosize, iFp)
GO(gtk_clist_column_title_active, vFpi)
GO(gtk_clist_column_title_passive, vFpi)
GO(gtk_clist_column_titles_active, vFp)
GO(gtk_clist_column_titles_hide, vFp)
GO(gtk_clist_column_titles_passive, vFp)
GO(gtk_clist_column_titles_show, vFp)
GO(gtk_clist_drag_pos_get_type, iFv)
GO(gtk_clist_find_row_from_data, iFpp)
GO(gtk_clist_freeze, vFp)
GO(gtk_clist_get_cell_style, pFpii)
GO(gtk_clist_get_cell_type, iFpii)
GO(gtk_clist_get_column_title, pFpi)
GO(gtk_clist_get_column_widget, pFpi)
GO(gtk_clist_get_hadjustment, pFp)
GO(gtk_clist_get_pixmap, iFpiipp)
GO(gtk_clist_get_pixtext, iFpiipppp)
GO(gtk_clist_get_row_data, pFpi)
GO(gtk_clist_get_row_style, pFpi)
GO(gtk_clist_get_selectable, iFpi)
GO(gtk_clist_get_selection_info, iFpiipp)
GO(gtk_clist_get_text, iFpiip)
GO(gtk_clist_get_type, iFv)
GO(gtk_clist_get_vadjustment, pFp)
GO(gtk_clist_insert, iFpip)
GO(gtk_clist_moveto, vFpiiff)
GO(gtk_clist_new, pFi)
GO(gtk_clist_new_with_titles, pFip)
GO(gtk_clist_optimal_column_width, iFpi)
GO(gtk_clist_prepend, iFpp)
GO(gtk_clist_remove, vFpi)
GO(gtk_clist_row_is_visible, iFpi)
GO(gtk_clist_row_move, vFpii)
GO(gtk_clist_select_all, vFp)
GO(gtk_clist_select_row, vFpii)
GO(gtk_clist_set_auto_sort, vFpi)
GO(gtk_clist_set_background, vFpip)
GO(gtk_clist_set_button_actions, vFpiC)
GO(gtk_clist_set_cell_style, vFpiip)
GO(gtk_clist_set_column_auto_resize, iFpi)
GO(gtk_clist_set_column_justification, vFpii)
GO(gtk_clist_set_column_max_width, vFpii)
GO(gtk_clist_set_column_min_width, vFpii)
GO(gtk_clist_set_column_resizeable, vFpii)
GO(gtk_clist_set_column_title, vFpip)
GO(gtk_clist_set_column_visibility, vFpii)
GO(gtk_clist_set_column_widget, vFpip)
GO(gtk_clist_set_column_width, vFpii)
//GOM(gtk_clist_set_compare_func, vFEpp)
GO(gtk_clist_set_foreground, vFpip)
GO(gtk_clist_set_hadjustment, vFpp)
GO(gtk_clist_set_pixmap, vFpiipp)
GO(gtk_clist_set_pixtext, vFpiipCpp)
GO(gtk_clist_set_reorderable, vFpi)
GO(gtk_clist_set_row_data, vFpip)
//GOM(gtk_clist_set_row_data_full, vFpipp)
GO(gtk_clist_set_row_height, vFpu)
GO(gtk_clist_set_row_style, vFpip)
GO(gtk_clist_set_selectable, vFpii)
GO(gtk_clist_set_selection_mode, vFpi)
GO(gtk_clist_set_shadow_type, vFpi)
GO(gtk_clist_set_shift, vFpiiii)
GO(gtk_clist_set_sort_column, vFpi)
GO(gtk_clist_set_sort_type, vFpi)
GO(gtk_clist_set_text, vFpiip)
GO(gtk_clist_set_use_drag_icons, vFpi)
GO(gtk_clist_set_vadjustment, vFpp)
GO(gtk_clist_sort, vFp)
GO(gtk_clist_swap_rows, vFpii)
GO(gtk_clist_thaw, vFp)
GO(gtk_clist_undo_selection, vFp)
GO(gtk_clist_unselect_all, vFp)
GO(gtk_clist_unselect_row, vFpii)
GO(gtk_color_button_get_alpha, WFp)
GO(gtk_color_button_get_color, vFpp)
GO(gtk_color_button_get_title, pFp)
GO(gtk_color_button_get_type, iFv)
GO(gtk_color_button_get_use_alpha, iFp)
GO(gtk_color_button_new, pFv)
GO(gtk_color_button_new_with_color, pFp)
GO(gtk_color_button_set_alpha, vFpW)
GO(gtk_color_button_set_color, vFpp)
GO(gtk_color_button_set_title, vFpp)
GO(gtk_color_button_set_use_alpha, vFpi)
GO(gtk_color_selection_dialog_get_color_selection, pFp)
GO(gtk_color_selection_dialog_get_type, iFv)
GO(gtk_color_selection_dialog_new, pFp)
GO(gtk_color_selection_get_color, vFpp)
GO(gtk_color_selection_get_current_alpha, WFp)
GO(gtk_color_selection_get_current_color, vFpp)
GO(gtk_color_selection_get_has_opacity_control, iFp)
GO(gtk_color_selection_get_has_palette, iFp)
GO(gtk_color_selection_get_previous_alpha, WFp)
GO(gtk_color_selection_get_previous_color, vFpp)
GO(gtk_color_selection_get_type, iFv)
GO(gtk_color_selection_is_adjusting, iFp)
GO(gtk_color_selection_new, pFv)
GO(gtk_color_selection_palette_from_string, iFppp)
GO(gtk_color_selection_palette_to_string, pFpi)
//GOM(gtk_color_selection_set_change_palette_hook, pFEp)
//GOM(gtk_color_selection_set_change_palette_with_screen_hook, pFEp)
GO(gtk_color_selection_set_color, vFpp)
GO(gtk_color_selection_set_current_alpha, vFpW)
GO(gtk_color_selection_set_current_color, vFpp)
GO(gtk_color_selection_set_has_opacity_control, vFpi)
GO(gtk_color_selection_set_has_palette, vFpi)
GO(gtk_color_selection_set_previous_alpha, vFpW)
GO(gtk_color_selection_set_previous_color, vFpp)
GO(gtk_color_selection_set_update_policy, vFpi)
GO(gtk_combo_box_append_text, vFpp)
GO(gtk_combo_box_entry_get_text_column, iFp)
GO(gtk_combo_box_entry_get_type, iFv)
GO(gtk_combo_box_entry_new, pFv)
GO(gtk_combo_box_entry_new_text, pFv)
GO(gtk_combo_box_entry_new_with_model, pFpi)
GO(gtk_combo_box_entry_set_text_column, vFpi)
GO(gtk_combo_box_get_active, iFp)
GO(gtk_combo_box_get_active_iter, iFpp)
GO(gtk_combo_box_get_active_text, pFp)
GO(gtk_combo_box_get_add_tearoffs, iFp)
GO(gtk_combo_box_get_button_sensitivity, iFp)
GO(gtk_combo_box_get_column_span_column, iFp)
GO(gtk_combo_box_get_entry_text_column, iFp)
GO(gtk_combo_box_get_focus_on_click, iFp)
GO(gtk_combo_box_get_has_entry, iFp)
GO(gtk_combo_box_get_model, pFp)
GO(gtk_combo_box_get_popup_accessible, pFp)
//GOM(gtk_combo_box_get_row_separator_func, pFEp)
GO(gtk_combo_box_get_row_span_column, iFp)
GO(gtk_combo_box_get_title, pFp)
GO(gtk_combo_box_get_type, iFv)
GO(gtk_combo_box_get_wrap_width, iFp)
GO(gtk_combo_box_insert_text, vFpip)
GO(gtk_combo_box_new, pFv)
GO(gtk_combo_box_new_text, pFv)
GO(gtk_combo_box_new_with_entry, pFv)
GO(gtk_combo_box_new_with_model, pFp)
GO(gtk_combo_box_new_with_model_and_entry, pFp)
GO(gtk_combo_box_popdown, vFp)
GO(gtk_combo_box_popup, vFp)
GO(gtk_combo_box_prepend_text, vFpp)
GO(gtk_combo_box_remove_text, vFpi)
GO(gtk_combo_box_set_active, vFpi)
GO(gtk_combo_box_set_active_iter, vFpp)
GO(gtk_combo_box_set_add_tearoffs, vFpi)
GO(gtk_combo_box_set_button_sensitivity, vFpi)
GO(gtk_combo_box_set_column_span_column, vFpi)
GO(gtk_combo_box_set_entry_text_column, vFpi)
GO(gtk_combo_box_set_focus_on_click, vFpi)
GO(gtk_combo_box_set_model, vFpp)
//GOM(gtk_combo_box_set_row_separator_func, vFEpppp)
GO(gtk_combo_box_set_row_span_column, vFpi)
GO(gtk_combo_box_set_title, vFpp)
GO(gtk_combo_box_set_wrap_width, vFpi)
//GO(gtk_combo_box_text_append_text, 
//GO(gtk_combo_box_text_get_active_text, 
GO(gtk_combo_box_text_get_type, iFv)
//GO(gtk_combo_box_text_insert_text, 
//GO(gtk_combo_box_text_new, 
//GO(gtk_combo_box_text_new_with_entry, 
//GO(gtk_combo_box_text_prepend_text, 
//GO(gtk_combo_box_text_remove, 
GO(gtk_combo_disable_activate, vFp)
GO(gtk_combo_get_type, iFv)
GO(gtk_combo_new, pFv)
GO(gtk_combo_set_case_sensitive, vFpi)
GO(gtk_combo_set_item_string, vFppp)
GO(gtk_combo_set_popdown_strings, vFpp)
GO(gtk_combo_set_use_arrows, vFpi)
GO(gtk_combo_set_use_arrows_always, vFpi)
GO(gtk_combo_set_value_in_list, vFpii)
GO(gtk_container_add, vFpp)
GO(gtk_container_add_with_properties, vFpppppppppppp)    //vaarg
GO(gtk_container_check_resize, vFp)
GO2(gtk_container_child_get, vFpppV, gtk_container_child_get_valist)
GO(gtk_container_child_get_property, vFpppp)
GO(gtk_container_child_get_valist, vFpppp)
GO2(gtk_container_child_set, vFpppV, gtk_container_child_set_valist)
GO(gtk_container_child_set_property, vFpppp)
GO(gtk_container_child_set_valist, vFpppp)
GO(gtk_container_child_type, iFp)
GO(gtk_container_class_find_child_property, pFpp)
GO(gtk_container_class_install_child_property, vFpup)
GO(gtk_container_class_list_child_properties, pFpp)
GOM(gtk_container_forall, vFEppp)
//GOM(gtk_container_foreach, vFEppp)
//GOM(gtk_container_foreach_full, vFEppppp)
GO(gtk_container_get_border_width, uFp)
GO(gtk_container_get_children, pFp)
GO(gtk_container_get_focus_chain, iFpp)
GO(gtk_container_get_focus_child, pFp)
GO(gtk_container_get_focus_hadjustment, pFp)
GO(gtk_container_get_focus_vadjustment, pFp)
GO(gtk_container_get_resize_mode, iFp)
GO(gtk_container_get_type, iFv)
GO(gtk_container_propagate_expose, vFppp)
GO(gtk_container_remove, vFpp)
GO(gtk_container_resize_children, vFp)
GO(gtk_container_set_border_width, vFpu)
GO(gtk_container_set_focus_chain, vFpp)
GO(gtk_container_set_focus_child, vFpp)
GO(gtk_container_set_focus_hadjustment, vFpp)
GO(gtk_container_set_focus_vadjustment, vFpp)
GO(gtk_container_set_reallocate_redraws, vFpp)
GO(gtk_container_set_resize_mode, vFpi)
GO(gtk_container_unset_focus_chain, vFp)
GO(gtk_corner_type_get_type, iFv)
//GO(gtk_ctree_collapse, 
//GO(gtk_ctree_collapse_recursive, 
//GO(gtk_ctree_collapse_to_depth, 
//GO(gtk_ctree_expand, 
GO(gtk_ctree_expander_style_get_type, iFv)
//GO(gtk_ctree_expand_recursive, 
//GO(gtk_ctree_expand_to_depth, 
GO(gtk_ctree_expansion_type_get_type, iFv)
//GO(gtk_ctree_export_to_gnode, 
//GO(gtk_ctree_find, 
//GO(gtk_ctree_find_all_by_row_data, 
//GO(gtk_ctree_find_all_by_row_data_custom, 
//GO(gtk_ctree_find_by_row_data, 
//GO(gtk_ctree_find_by_row_data_custom, 
//GO(gtk_ctree_find_node_ptr, 
//GO(gtk_ctree_get_node_info, 
GO(gtk_ctree_get_type, iFv)
//GO(gtk_ctree_insert_gnode, 
//GO(gtk_ctree_insert_node, 
//GO(gtk_ctree_is_ancestor, 
//GO(gtk_ctree_is_hot_spot, 
//GO(gtk_ctree_is_viewable, 
//GO(gtk_ctree_last, 
GO(gtk_ctree_line_style_get_type, iFv)
//GO(gtk_ctree_move, 
//GO(gtk_ctree_new, 
//GO(gtk_ctree_new_with_titles, 
//GO(gtk_ctree_node_get_cell_style, 
//GO(gtk_ctree_node_get_cell_type, 
//GO(gtk_ctree_node_get_pixmap, 
//GO(gtk_ctree_node_get_pixtext, 
//GO(gtk_ctree_node_get_row_data, 
//GO(gtk_ctree_node_get_row_style, 
//GO(gtk_ctree_node_get_selectable, 
//GO(gtk_ctree_node_get_text, 
GO(gtk_ctree_node_get_type, iFv)
//GO(gtk_ctree_node_is_visible, 
//GO(gtk_ctree_node_moveto, 
//GO(gtk_ctree_node_nth, 
//GO(gtk_ctree_node_set_background, 
//GO(gtk_ctree_node_set_cell_style, 
//GO(gtk_ctree_node_set_foreground, 
//GO(gtk_ctree_node_set_pixmap, 
//GO(gtk_ctree_node_set_pixtext, 
//GO(gtk_ctree_node_set_row_data, 
//GO(gtk_ctree_node_set_row_data_full, 
//GO(gtk_ctree_node_set_row_style, 
//GO(gtk_ctree_node_set_selectable, 
//GO(gtk_ctree_node_set_shift, 
//GO(gtk_ctree_node_set_text, 
GO(gtk_ctree_pos_get_type, iFv)
//GO(gtk_ctree_post_recursive, 
//GO(gtk_ctree_post_recursive_to_depth, 
//GO(gtk_ctree_pre_recursive, 
//GO(gtk_ctree_pre_recursive_to_depth, 
//GO(gtk_ctree_real_select_recursive, 
//GO(gtk_ctree_remove_node, 
//GO(gtk_ctree_select, 
//GO(gtk_ctree_select_recursive, 
//GO(gtk_ctree_set_drag_compare_func, 
//GO(gtk_ctree_set_expander_style, 
//GO(gtk_ctree_set_indent, 
//GO(gtk_ctree_set_line_style, 
//GO(gtk_ctree_set_node_info, 
//GO(gtk_ctree_set_show_stub, 
//GO(gtk_ctree_set_spacing, 
//GO(gtk_ctree_sort_node, 
//GO(gtk_ctree_sort_recursive, 
//GO(gtk_ctree_toggle_expansion, 
//GO(gtk_ctree_toggle_expansion_recursive, 
//GO(gtk_ctree_unselect, 
//GO(gtk_ctree_unselect_recursive, 
GO(gtk_curve_get_type, iFv)
GO(gtk_curve_get_vector, vFpip)
GO(gtk_curve_new, pFv)
GO(gtk_curve_reset, vFp)
GO(gtk_curve_set_curve_type, vFpi)
GO(gtk_curve_set_gamma, vFpf)
GO(gtk_curve_set_range, vFpffff)
GO(gtk_curve_set_vector, vFpip)
GO(gtk_curve_type_get_type, iFv)
GO(gtk_custom_paper_unix_dialog_get_type, iFv)
GO(gtk_debug_flag_get_type, iFv)
GO(gtk_decorated_window_calculate_frame_size, vFp)
GO(gtk_decorated_window_init, vFp)
GO(gtk_decorated_window_move_resize_window, vFpiiii)
GO(gtk_decorated_window_set_title, vFpp)
GO(gtk_delete_type_get_type, iFv)
GO(gtk_dest_defaults_get_type, iFv)
GO(gtk_dialog_add_action_widget, vFppi)
GO(gtk_dialog_add_button, pFppi)
GOM(gtk_dialog_add_buttons, vFEppV)
GO(gtk_dialog_flags_get_type, iFv)
GO(gtk_dialog_get_action_area, pFp)
GO(gtk_dialog_get_content_area, pFp)
GO(gtk_dialog_get_has_separator, iFp)
GO(gtk_dialog_get_response_for_widget, iFpp)
GO(gtk_dialog_get_type, iFv)
GO(gtk_dialog_get_widget_for_response, pFpi)
GO(gtk_dialog_new, pFv)
GO(gtk_dialog_new_with_buttons, pFppipppppppppppp)    //vaarg
GO(gtk_dialog_response, vFpi)
GO(gtk_dialog_run, iFp)
GO(gtk_dialog_set_alternative_button_order, vFpiiiiiiiiiiiiiiiiii)  // vaarg, should wrap using gtk_dialog_set_alternative_button_order_from_array
GO(gtk_dialog_set_alternative_button_order_from_array, vFpip)
GO(gtk_dialog_set_default_response, vFpi)
GO(gtk_dialog_set_has_separator, vFpi)
GO(gtk_dialog_set_response_sensitive, vFpii)
GO(gtk_direction_type_get_type, iFv)
GO(gtk_disable_setlocale, vFv)
GO(gtk_drag_begin, pFppiip)
GO(gtk_drag_check_threshold, iFpiiii)
GO(gtk_drag_dest_add_image_targets, vFp)
GO(gtk_drag_dest_add_text_targets, vFp)
GO(gtk_drag_dest_add_uri_targets, vFp)
GO(gtk_drag_dest_find_target, pFppp)
GO(gtk_drag_dest_get_target_list, pFp)
GO(gtk_drag_dest_get_track_motion, iFp)
GO(gtk_drag_dest_set, vFpipii)
GO(gtk_drag_dest_set_proxy, vFppii)
GO(gtk_drag_dest_set_target_list, vFpp)
GO(gtk_drag_dest_set_track_motion, vFpi)
GO(gtk_drag_dest_unset, vFp)
GO(gtk_drag_finish, vFpiiu)
GO(gtk_drag_get_data, vFpppu)
GO(gtk_drag_get_source_widget, pFp)
GO(gtk_drag_highlight, vFp)
GO(gtk_drag_result_get_type, iFv)
GO(gtk_drag_set_default_icon, vFpppii)
GO(gtk_drag_set_icon_default, vFp)
GO(gtk_drag_set_icon_name, vFppii)
GO(gtk_drag_set_icon_pixbuf, vFppii)
GO(gtk_drag_set_icon_pixmap, vFppppii)
GO(gtk_drag_set_icon_stock, vFppii)
GO(gtk_drag_set_icon_widget, vFppii)
GO(gtk_drag_source_add_image_targets, vFp)
GO(gtk_drag_source_add_text_targets, vFp)
GO(gtk_drag_source_add_uri_targets, vFp)
GO(gtk_drag_source_get_target_list, pFp)
GO(gtk_drag_source_set, vFpipii)
GO(gtk_drag_source_set_icon, vFpppp)
GO(gtk_drag_source_set_icon_name, vFpp)
GO(gtk_drag_source_set_icon_pixbuf, vFpp)
GO(gtk_drag_source_set_icon_stock, vFpp)
GO(gtk_drag_source_set_target_list, vFpp)
GO(gtk_drag_source_unset, vFp)
GO(gtk_drag_unhighlight, vFp)
GO(gtk_draw_arrow, vFppiiiiiiii)
GO(gtk_draw_box, vFppiiiiii)
GO(gtk_draw_box_gap, vFppiiiiiiiii)
GO(gtk_draw_check, vFppiiiiii)
GO(gtk_draw_diamond, vFppiiiiii)
GO(gtk_draw_expander, vFppiiii)
GO(gtk_draw_extension, vFppiiiiiii)
GO(gtk_draw_flat_box, vFppiiiiii)
GO(gtk_draw_focus, vFppiiii)
GO(gtk_draw_handle, vFppiiiiiii)
GO(gtk_draw_hline, vFppiiii)
GO(gtk_drawing_area_get_type, iFv)
GO(gtk_drawing_area_new, pFv)
GO(gtk_drawing_area_size, vFpii)
GO(gtk_draw_insertion_cursor, vFppppiii)
GO(gtk_draw_layout, vFppiiiip)
GO(gtk_draw_option, vFppiiiiii)
GO(gtk_draw_polygon, vFppiipii)
GO(gtk_draw_resize_grip, vFppiiiiii)
GO(gtk_draw_shadow, vFppiiiiii)
GO(gtk_draw_shadow_gap, vFppiiiiiiiii)
GO(gtk_draw_slider, vFppiiiiiii)
GO(gtk_draw_string, vFppiiip)
GO(gtk_draw_tab, vFppiiiiii)
GO(gtk_draw_vline, vFppiiii)
GO(gtk_editable_copy_clipboard, vFp)
GO(gtk_editable_cut_clipboard, vFp)
GO(gtk_editable_delete_selection, vFp)
GO(gtk_editable_delete_text, vFpii)
GO(gtk_editable_get_chars, pFpii)
GO(gtk_editable_get_editable, iFp)
GO(gtk_editable_get_position, iFp)
GO(gtk_editable_get_selection_bounds, iFppp)
GO(gtk_editable_get_type, iFv)
GO(gtk_editable_insert_text, vFppip)
GO(gtk_editable_paste_clipboard, vFp)
GO(gtk_editable_select_region, vFpii)
GO(gtk_editable_set_editable, vFpi)
GO(gtk_editable_set_position, vFpi)
GO(gtk_entry_append_text, vFpp)
//GO(gtk_entry_buffer_delete_text, 
//GO(gtk_entry_buffer_emit_deleted_text, 
//GO(gtk_entry_buffer_emit_inserted_text, 
//GO(gtk_entry_buffer_get_bytes, 
//GO(gtk_entry_buffer_get_length, 
//GO(gtk_entry_buffer_get_max_length, 
//GO(gtk_entry_buffer_get_text, 
GO(gtk_entry_buffer_get_type, iFv)
//GO(gtk_entry_buffer_insert_text, 
//GO(gtk_entry_buffer_new, 
//GO(gtk_entry_buffer_set_max_length, 
//GO(gtk_entry_buffer_set_text, 
//GO(gtk_entry_completion_complete, 
//GO(gtk_entry_completion_delete_action, 
//GO(gtk_entry_completion_get_completion_prefix, 
//GO(gtk_entry_completion_get_entry, 
//GO(gtk_entry_completion_get_inline_completion, 
//GO(gtk_entry_completion_get_inline_selection, 
//GO(gtk_entry_completion_get_minimum_key_length, 
//GO(gtk_entry_completion_get_model, 
//GO(gtk_entry_completion_get_popup_completion, 
//GO(gtk_entry_completion_get_popup_set_width, 
//GO(gtk_entry_completion_get_popup_single_match, 
//GO(gtk_entry_completion_get_text_column, 
GO(gtk_entry_completion_get_type, iFv)
//GO(gtk_entry_completion_insert_action_markup, 
//GO(gtk_entry_completion_insert_action_text, 
//GO(gtk_entry_completion_insert_prefix, 
//GO(gtk_entry_completion_new, 
//GO(gtk_entry_completion_set_inline_completion, 
//GO(gtk_entry_completion_set_inline_selection, 
//GO(gtk_entry_completion_set_match_func, 
//GO(gtk_entry_completion_set_minimum_key_length, 
//GO(gtk_entry_completion_set_model, 
//GO(gtk_entry_completion_set_popup_completion, 
//GO(gtk_entry_completion_set_popup_set_width, 
//GO(gtk_entry_completion_set_popup_single_match, 
//GO(gtk_entry_completion_set_text_column, 
GO(gtk_entry_get_activates_default, iFp)
GO(gtk_entry_get_alignment, fFp)
//GO(gtk_entry_get_buffer, 
//GO(gtk_entry_get_completion, 
//GO(gtk_entry_get_current_icon_drag_source, 
//GO(gtk_entry_get_cursor_hadjustment, 
GO(gtk_entry_get_has_frame, iFp)
//GO(gtk_entry_get_icon_activatable, 
//GO(gtk_entry_get_icon_at_pos, 
//GO(gtk_entry_get_icon_gicon, 
//GO(gtk_entry_get_icon_name, 
//GO(gtk_entry_get_icon_pixbuf, 
//GO(gtk_entry_get_icon_sensitive, 
//GO(gtk_entry_get_icon_stock, 
//GO(gtk_entry_get_icon_storage_type, 
//GO(gtk_entry_get_icon_tooltip_markup, 
//GO(gtk_entry_get_icon_tooltip_text, 
//GO(gtk_entry_get_icon_window, 
GO(gtk_entry_get_inner_border, pFp)
//GO(gtk_entry_get_invisible_char, 
GO(gtk_entry_get_layout, pFp)
GO(gtk_entry_get_layout_offsets, vFppp)
//GO(gtk_entry_get_max_length, 
GO(gtk_entry_get_overwrite_mode, iFp)
//GO(gtk_entry_get_progress_fraction, 
//GO(gtk_entry_get_progress_pulse_step, 
GO(gtk_entry_get_text, pFp)
GO(gtk_entry_get_text_length, WFp)
//GO(gtk_entry_get_text_window, 
GO(gtk_entry_get_type, iFv)
//GO(gtk_entry_get_visibility, 
GO(gtk_entry_get_width_chars, iFp)
GO(gtk_entry_icon_position_get_type, iFv)
//GO(gtk_entry_im_context_filter_keypress, 
//GO(gtk_entry_layout_index_to_text_index, 
GO(gtk_entry_new, pFv)
GO(gtk_entry_new_with_buffer, pFp)
GO(gtk_entry_new_with_max_length, pFi)
GO(gtk_entry_prepend_text, vFpp)
//GO(gtk_entry_progress_pulse, 
//GO(gtk_entry_reset_im_context, 
GO(gtk_entry_select_region, vFpii)
GO(gtk_entry_set_activates_default, vFpi)
GO(gtk_entry_set_alignment, vFpf)
GO(gtk_entry_set_buffer, vFpp)
//GO(gtk_entry_set_completion, 
//GO(gtk_entry_set_cursor_hadjustment, 
GO(gtk_entry_set_editable, vFpi)
GO(gtk_entry_set_has_frame, vFpi)
//GO(gtk_entry_set_icon_activatable, 
//GO(gtk_entry_set_icon_drag_source, 
//GO(gtk_entry_set_icon_from_gicon, 
//GO(gtk_entry_set_icon_from_icon_name, 
//GO(gtk_entry_set_icon_from_pixbuf, 
//GO(gtk_entry_set_icon_from_stock, 
//GO(gtk_entry_set_icon_sensitive, 
//GO(gtk_entry_set_icon_tooltip_markup, 
//GO(gtk_entry_set_icon_tooltip_text, 
GO(gtk_entry_set_inner_border, vFpp)
GO(gtk_entry_set_invisible_char, vFp)
GO(gtk_entry_set_max_length, vFpi)
GO(gtk_entry_set_overwrite_mode, vFpi)
GO(gtk_entry_set_position, vFpi)
//GO(gtk_entry_set_progress_fraction, 
//GO(gtk_entry_set_progress_pulse_step, 
GO(gtk_entry_set_text, vFpp)
GO(gtk_entry_set_visibility, vFpi)
GO(gtk_entry_set_width_chars, uFp)
//GO(gtk_entry_text_index_to_layout_index, 
//GO(gtk_entry_unset_invisible_char, 
//GO(gtk_enumerate_printers, 
GO(gtk_event_box_get_above_child, iFp)
GO(gtk_event_box_get_type, iFv)
GO(gtk_event_box_get_visible_window, iFp)
GO(gtk_event_box_new, pFv)
GO(gtk_event_box_set_above_child, vFpi)
GO(gtk_event_box_set_visible_window, vFpi)
GO(gtk_events_pending, iFv)
GO(gtk_exit, vFi)
//GO(gtk_expander_get_expanded, 
//GO(gtk_expander_get_label, 
//GO(gtk_expander_get_label_fill, 
//GO(gtk_expander_get_label_widget, 
//GO(gtk_expander_get_spacing, 
GO(gtk_expander_get_type, iFv)
//GO(gtk_expander_get_use_markup, 
//GO(gtk_expander_get_use_underline, 
//GO(gtk_expander_new, 
//GO(gtk_expander_new_with_mnemonic, 
//GO(gtk_expander_set_expanded, 
//GO(gtk_expander_set_label, 
//GO(gtk_expander_set_label_fill, 
//GO(gtk_expander_set_label_widget, 
//GO(gtk_expander_set_spacing, 
//GO(gtk_expander_set_use_markup, 
//GO(gtk_expander_set_use_underline, 
GO(gtk_expander_style_get_type, iFv)
GO(gtk_false, iFv)
GO(gtk_file_chooser_action_get_type, iFv)
GO(gtk_file_chooser_add_filter, vFpp)
GO(gtk_file_chooser_add_shortcut_folder, iFppp)
GO(gtk_file_chooser_add_shortcut_folder_uri, iFppp)
GO(gtk_file_chooser_button_get_focus_on_click, iFp)
GO(gtk_file_chooser_button_get_title, pFp)
GO(gtk_file_chooser_button_get_type, iFv)
GO(gtk_file_chooser_button_get_width_chars, iFp)
GO(gtk_file_chooser_button_new, pFpi)
GO(gtk_file_chooser_button_new_with_backend, pFpip)
GO(gtk_file_chooser_button_new_with_dialog, pFp)
GO(gtk_file_chooser_button_set_focus_on_click, vFpi)
GO(gtk_file_chooser_button_set_title, vFpp)
GO(gtk_file_chooser_button_set_width_chars, vFpi)
GO(gtk_file_chooser_confirmation_get_type, iFv)
GO(gtk_file_chooser_dialog_get_type, iFv)
GO(gtk_file_chooser_dialog_new, pFppipipipipipipip)  // vaargs (so pFppipV) with additionnal buttons, end with a NULL
GO(gtk_file_chooser_dialog_new_with_backend, pFppippipipipipipip)   // same but pFppippV
GO(gtk_file_chooser_error_get_type, iFv)
GO(gtk_file_chooser_error_quark, pFv)
GO(gtk_file_chooser_get_action, iFp)
GO(gtk_file_chooser_get_create_folders, iFp)
GO(gtk_file_chooser_get_current_folder, pFp)
GO(gtk_file_chooser_get_current_folder_file, pFp)
GO(gtk_file_chooser_get_current_folder_uri, pFp)
GO(gtk_file_chooser_get_do_overwrite_confirmation, iFp)
GO(gtk_file_chooser_get_extra_widget, pFp)
GO(gtk_file_chooser_get_file, pFp)
GO(gtk_file_chooser_get_filename, pFp)
GO(gtk_file_chooser_get_filenames, pFp)
GO(gtk_file_chooser_get_files, pFp)
GO(gtk_file_chooser_get_filter, pFp)
GO(gtk_file_chooser_get_local_only, iFp)
GO(gtk_file_chooser_get_preview_file, pFp)
GO(gtk_file_chooser_get_preview_filename, pFp)
GO(gtk_file_chooser_get_preview_uri, pFp)
GO(gtk_file_chooser_get_preview_widget, pFp)
GO(gtk_file_chooser_get_preview_widget_active, iFp)
GO(gtk_file_chooser_get_select_multiple, iFp)
GO(gtk_file_chooser_get_show_hidden, iFp)
GO(gtk_file_chooser_get_type, iFv)
GO(gtk_file_chooser_get_uri, pFp)
GO(gtk_file_chooser_get_uris, pFp)
GO(gtk_file_chooser_get_use_preview_label, iFp)
GO(gtk_file_chooser_list_filters, pFp)
GO(gtk_file_chooser_list_shortcut_folders, pFp)
GO(gtk_file_chooser_list_shortcut_folder_uris, pFp)
GO(gtk_file_chooser_remove_filter, vFpp)
GO(gtk_file_chooser_remove_shortcut_folder, iFppp)
GO(gtk_file_chooser_remove_shortcut_folder_uri, iFppp)
GO(gtk_file_chooser_select_all, vFp)
GO(gtk_file_chooser_select_file, iFppp)
GO(gtk_file_chooser_select_filename, iFpp)
GO(gtk_file_chooser_select_uri, iFpp)
GO(gtk_file_chooser_set_action, vFpi)
GO(gtk_file_chooser_set_create_folders, vFpi)
GO(gtk_file_chooser_set_current_folder, iFpp)
GO(gtk_file_chooser_set_current_folder_file, iFppp)
GO(gtk_file_chooser_set_current_folder_uri, iFpp)
GO(gtk_file_chooser_set_current_name, vFpp)
GO(gtk_file_chooser_set_do_overwrite_confirmation, vFpi)
GO(gtk_file_chooser_set_extra_widget, vFpp)
GO(gtk_file_chooser_set_file, iFppp)
GO(gtk_file_chooser_set_filename, iFpp)
GO(gtk_file_chooser_set_filter, vFpp)
GO(gtk_file_chooser_set_local_only, vFpi)
GO(gtk_file_chooser_set_preview_widget, vFpp)
GO(gtk_file_chooser_set_preview_widget_active, vFpi)
GO(gtk_file_chooser_set_select_multiple, vFpi)
GO(gtk_file_chooser_set_show_hidden, vFpi)
GO(gtk_file_chooser_set_uri, vFpp)
GO(gtk_file_chooser_set_use_preview_label, vFpi)
GO(gtk_file_chooser_unselect_all, vFp)
GO(gtk_file_chooser_unselect_file, vFpp)
GO(gtk_file_chooser_unselect_filename, vFpp)
GO(gtk_file_chooser_unselect_uri, vFpp)
GO(gtk_file_chooser_widget_get_type, iFv)
GO(gtk_file_chooser_widget_new, pFi)
GO(gtk_file_chooser_widget_new_with_backend, pFip)
//GOM(gtk_file_filter_add_custom, vFEppppp)
//GO(gtk_file_filter_add_mime_type, vFpp)
GO(gtk_file_filter_add_pattern, vFpp)
GO(gtk_file_filter_add_pixbuf_formats, vFp)
GO(gtk_file_filter_filter, iFpp)
GO(gtk_file_filter_flags_get_type, iFv)
GO(gtk_file_filter_get_name, pFp)
GO(gtk_file_filter_get_needed, iFp)
GO(gtk_file_filter_get_type, iFv)
GO(gtk_file_filter_new, pFv)
GO(gtk_file_filter_set_name, vFpp)
GO(gtk_file_selection_complete, vFpp)
GO(gtk_file_selection_get_filename, pFp)
GO(gtk_file_selection_get_selections, pFp)
GO(gtk_file_selection_get_select_multiple, iFp)
GO(gtk_file_selection_get_type, iFv)
GO(gtk_file_selection_hide_fileop_buttons, vFp)
GO(gtk_file_selection_new, pFp)
GO(gtk_file_selection_set_filename, vFpp)
GO(gtk_file_selection_set_select_multiple, vFpi)
GO(gtk_file_selection_show_fileop_buttons, vFp)
GO(gtk_fixed_get_has_window, iFp)
GO(gtk_fixed_get_type, iFv)
GO(gtk_fixed_move, vFppii)
GO(gtk_fixed_new, pFv)
GO(gtk_fixed_put, vFppii)
GO(gtk_fixed_set_has_window, vFpi)
GO(gtk_font_button_get_font_name, pFp)
GO(gtk_font_button_get_show_size, iFp)
GO(gtk_font_button_get_show_style, iFp)
GO(gtk_font_button_get_title, pFp)
GO(gtk_font_button_get_type, iFv)
GO(gtk_font_button_get_use_font, iFp)
GO(gtk_font_button_get_use_size, iFp)
GO(gtk_font_button_new, pFv)
GO(gtk_font_button_new_with_font, pFp)
GO(gtk_font_button_set_font_name, iFpp)
GO(gtk_font_button_set_show_size, vFpi)
GO(gtk_font_button_set_show_style, vFpi)
GO(gtk_font_button_set_title, vFpp)
GO(gtk_font_button_set_use_font, vFpi)
GO(gtk_font_button_set_use_size, vFpi)
GO(gtk_font_selection_dialog_get_apply_button, pFp)
GO(gtk_font_selection_dialog_get_cancel_button, pFp)
GO(gtk_font_selection_dialog_get_font, pFp)
GO(gtk_font_selection_dialog_get_font_name, pFp)
GO(gtk_font_selection_dialog_get_font_selection, pFp)
GO(gtk_font_selection_dialog_get_ok_button, pFp)
GO(gtk_font_selection_dialog_get_preview_text, pFp)
GO(gtk_font_selection_dialog_get_type, iFv)
GO(gtk_font_selection_dialog_new, pFp)
GO(gtk_font_selection_dialog_set_font_name, vFpp)
GO(gtk_font_selection_dialog_set_preview_text, vFpp)
GO(gtk_font_selection_get_face, pFp)
GO(gtk_font_selection_get_face_list, pFp)
GO(gtk_font_selection_get_family, pFp)
GO(gtk_font_selection_get_family_list, pFp)
GO(gtk_font_selection_get_font, pFp)
GO(gtk_font_selection_get_font_name, pFp)
GO(gtk_font_selection_get_preview_entry, pFp)
GO(gtk_font_selection_get_preview_text, pFp)
GO(gtk_font_selection_get_size, iFp)
GO(gtk_font_selection_get_size_entry, pFp)
GO(gtk_font_selection_get_size_list, pFp)
GO(gtk_font_selection_get_type, iFv)
GO(gtk_font_selection_new, pFv)
GO(gtk_font_selection_set_font_name, iFpp)
GO(gtk_font_selection_set_preview_text, vFpp)
GO(gtk_frame_get_label, pFp)
GO(gtk_frame_get_label_align, vFppp)
GO(gtk_frame_get_label_widget, pFp)
GO(gtk_frame_get_shadow_type, iFp)
GO(gtk_frame_get_type, iFv)
GO(gtk_frame_new, pFp)
GO(gtk_frame_set_label, vFpp)
GO(gtk_frame_set_label_align, vFpff)
GO(gtk_frame_set_label_widget, vFpp)
GO(gtk_frame_set_shadow_type, vFpi)
GO(gtk_gamma_curve_get_type, iFv)
GO(gtk_gamma_curve_new, pFv)
GO(gtk_gc_get, pFippu)
GO(gtk_gc_release, vFp)
GO(gtk_get_current_event, pFv)
GO(gtk_get_current_event_state, iFp)
GO(gtk_get_current_event_time, uFv)
GO(gtk_get_default_language, pFv)
GO(gtk_get_event_widget, pFp)
GO(gtk_get_option_group, pFi)
GO(gtk_grab_add, vFp)
GO(gtk_grab_get_current, pFv)
GO(gtk_grab_remove, vFp)
GO(gtk_handle_box_get_child_detached, iFp)
GO(gtk_handle_box_get_handle_position, iFp)
GO(gtk_handle_box_get_shadow_type, iFp)
GO(gtk_handle_box_get_snap_edge, iFp)
GO(gtk_handle_box_get_type, iFv)
GO(gtk_handle_box_new, pFv)
GO(gtk_handle_box_set_handle_position, vFpi)
GO(gtk_handle_box_set_shadow_type, vFpi)
GO(gtk_handle_box_set_snap_edge, vFpi)
GO(gtk_hbox_get_type, iFv)
GO(gtk_hbox_new, pFii)
GO(gtk_hbutton_box_get_layout_default, iFv)
GO(gtk_hbutton_box_get_spacing_default, iFv)
GO(gtk_hbutton_box_get_type, iFv)
GO(gtk_hbutton_box_new, pFv)
GO(gtk_hbutton_box_set_layout_default, vFi)
GO(gtk_hbutton_box_set_spacing_default, vFi)
GO(gtk_hpaned_get_type, iFv)
//GO(gtk_hpaned_new, 
GO(gtk_hruler_get_type, iFv)
//GO(gtk_hruler_new, 
GO(gtk_hscale_get_type, iFv)
//GO(gtk_hscale_new, 
//GO(gtk_hscale_new_with_range, 
GO(gtk_hscrollbar_get_type, iFv)
GO(gtk_hscrollbar_new, pFp)
GO(gtk_hseparator_get_type, iFv)
GO(gtk_hseparator_new, pFv)
//GO(gtk_hsv_get_color, 
//GO(gtk_hsv_get_metrics, 
GO(gtk_hsv_get_type, iFv)
//GO(gtk_hsv_is_adjusting, 
//GO(gtk_hsv_new, 
//GO(gtk_hsv_set_color, 
//GO(gtk_hsv_set_metrics, 
//GO(gtk_hsv_to_rgb, 
GO(gtk_icon_factory_add, vFppp)
GO(gtk_icon_factory_add_default, vFp)
GO(gtk_icon_factory_get_type, iFv)
GO(gtk_icon_factory_lookup, pFpp)
GO(gtk_icon_factory_lookup_default, pFp)
GO(gtk_icon_factory_new, pFv)
GO(gtk_icon_factory_remove_default, vFp)
GO(gtk_icon_info_copy, pFp)
GO(gtk_icon_info_free, vFp)
GO(gtk_icon_info_get_attach_points, iFppp)
GO(gtk_icon_info_get_base_size, iFp)
GO(gtk_icon_info_get_builtin_pixbuf, pFp)
GO(gtk_icon_info_get_display_name, pFp)
GO(gtk_icon_info_get_embedded_rect, iFpp)
GO(gtk_icon_info_get_filename, pFp)
GO(gtk_icon_info_get_type, iFv)
GO(gtk_icon_info_load_icon, pFpp)
GO(gtk_icon_info_new_for_pixbuf, pFpp)
GO(gtk_icon_info_set_raw_coordinates, vFpp)
GO(gtk_icon_lookup_flags_get_type, iFv)
GO(gtk_icon_set_add_source, vFpp)
GO(gtk_icon_set_copy, pFp)
GO(gtk_icon_set_get_sizes, vFppp)
GO(gtk_icon_set_get_type, iFv)
GO(gtk_icon_set_new, pFv)
GO(gtk_icon_set_new_from_pixbuf, pFp)
GO(gtk_icon_set_ref, pFp)
GO(gtk_icon_set_render_icon, pFppipipp)
GO(gtk_icon_set_unref, vFp)
GO(gtk_icon_size_from_name, iFp)
GO(gtk_icon_size_get_name, pFi)
GO(gtk_icon_size_get_type, iFv)
GO(gtk_icon_size_lookup, iFipp)
GO(gtk_icon_size_lookup_for_settings, iFpipp)
GO(gtk_icon_size_register, iFpii)
GO(gtk_icon_size_register_alias, vFpi)
GO(gtk_icon_source_copy, pFp)
GO(gtk_icon_source_free, vFp)
GO(gtk_icon_source_get_direction, iFp)
GO(gtk_icon_source_get_direction_wildcarded, iFp)
GO(gtk_icon_source_get_filename, pFp)
GO(gtk_icon_source_get_icon_name, pFp)
GO(gtk_icon_source_get_pixbuf, pFp)
GO(gtk_icon_source_get_size, iFp)
GO(gtk_icon_source_get_size_wildcarded, iFp)
GO(gtk_icon_source_get_state, iFp)
GO(gtk_icon_source_get_state_wildcarded, iFp)
GO(gtk_icon_source_get_type, iFv)
GO(gtk_icon_source_new, pFv)
GO(gtk_icon_source_set_direction, vFpi)
GO(gtk_icon_source_set_direction_wildcarded, vFpi)
GO(gtk_icon_source_set_filename, vFpp)
GO(gtk_icon_source_set_icon_name, vFpp)
GO(gtk_icon_source_set_pixbuf, vFpp)
GO(gtk_icon_source_set_size, vFpi)
GO(gtk_icon_source_set_size_wildcarded, vFpi)
GO(gtk_icon_source_set_state, vFpi)
GO(gtk_icon_source_set_state_wildcarded, vFpi)
GO(gtk_icon_theme_add_builtin_icon, vFpip)
GO(gtk_icon_theme_append_search_path, vFpp)
GO(gtk_icon_theme_choose_icon, pFppiu)
GO(gtk_icon_theme_error_get_type, iFv)
//GO(gtk_icon_theme_error_quark, 
GO(gtk_icon_theme_get_default, pFv)
GO(gtk_icon_theme_get_example_icon_name, pFp)
GO(gtk_icon_theme_get_for_screen, pFp)
GO(gtk_icon_theme_get_icon_sizes, pFpp)
GO(gtk_icon_theme_get_search_path, vFppp)
GO(gtk_icon_theme_get_type, iFv)
GO(gtk_icon_theme_has_icon, iFpp)
GO(gtk_icon_theme_list_contexts, pFp)
GO(gtk_icon_theme_list_icons, pFpp)
GO(gtk_icon_theme_load_icon, pFppiup)
GO(gtk_icon_theme_lookup_by_gicon, pFppiu)
GO(gtk_icon_theme_lookup_icon, pFppiu)
GO(gtk_icon_theme_new, pFv)
//GO(gtk_icon_theme_prepend_search_path, 
GO(gtk_icon_theme_rescan_if_needed, iFp)
GO(gtk_icon_theme_set_custom_theme, vFpp)
GO(gtk_icon_theme_set_screen, vFpp)
GO(gtk_icon_theme_set_search_path, vFppi)
GO(gtk_icon_view_convert_widget_to_bin_window_coords, vFpiipp)
GO(gtk_icon_view_create_drag_icon, pFpp)
GO(gtk_icon_view_drop_position_get_type, iFv)
GO(gtk_icon_view_enable_model_drag_dest, vFppii)
GO(gtk_icon_view_enable_model_drag_source, vFpipii)
GO(gtk_icon_view_get_columns, iFp)
GO(gtk_icon_view_get_column_spacing, iFp)
GO(gtk_icon_view_get_cursor, iFppp)
GO(gtk_icon_view_get_dest_item_at_pos, iFpiipp)
GO(gtk_icon_view_get_drag_dest_item, vFppp)
GO(gtk_icon_view_get_item_at_pos, iFpiipp)
GO(gtk_icon_view_get_item_column, iFpp)
GO(gtk_icon_view_get_item_orientation, iFp)
GO(gtk_icon_view_get_item_padding, iFp)
GO(gtk_icon_view_get_item_row, iFpp)
GO(gtk_icon_view_get_item_width, iFp)
GO(gtk_icon_view_get_margin, iFp)
GO(gtk_icon_view_get_markup_column, iFp)
GO(gtk_icon_view_get_model, pFp)
GO(gtk_icon_view_get_orientation, iFp)
GO(gtk_icon_view_get_path_at_pos, pFpii)
GO(gtk_icon_view_get_pixbuf_column, iFp)
GO(gtk_icon_view_get_reorderable, iFp)
GO(gtk_icon_view_get_row_spacing, iFp)
GO(gtk_icon_view_get_selected_items, pFp)
GO(gtk_icon_view_get_selection_mode, iFp)
GO(gtk_icon_view_get_spacing, iFp)
GO(gtk_icon_view_get_text_column, iFp)
GO(gtk_icon_view_get_tooltip_column, iFp)
GO(gtk_icon_view_get_tooltip_context, iFpppippp)
GO(gtk_icon_view_get_type, iFv)
GO(gtk_icon_view_get_visible_range, iFppp)
GO(gtk_icon_view_item_activated, vFpp)
GO(gtk_icon_view_new, pFv)
GO(gtk_icon_view_new_with_model, pFp)
GO(gtk_icon_view_path_is_selected, iFpp)
GO(gtk_icon_view_scroll_to_path, vFppiff)
GO(gtk_icon_view_select_all, vFp)
//GOM(gtk_icon_view_selected_foreach, vFpBp)
GO(gtk_icon_view_select_path, vFpp)
GO(gtk_icon_view_set_columns, vFpi)
GO(gtk_icon_view_set_column_spacing, vFpi)
GO(gtk_icon_view_set_cursor, vFpppi)
GO(gtk_icon_view_set_drag_dest_item, vFppi)
GO(gtk_icon_view_set_item_orientation, vFpi)
GO(gtk_icon_view_set_item_padding, vFpi)
GO(gtk_icon_view_set_item_width, vFpi)
GO(gtk_icon_view_set_margin, vFpi)
GO(gtk_icon_view_set_markup_column, vFpi)
GO(gtk_icon_view_set_model, vFpp)
GO(gtk_icon_view_set_orientation, vFpi)
GO(gtk_icon_view_set_pixbuf_column, vFpi)
GO(gtk_icon_view_set_reorderable, vFpi)
GO(gtk_icon_view_set_row_spacing, vFpi)
GO(gtk_icon_view_set_selection_mode, vFpi)
GO(gtk_icon_view_set_spacing, vFpi)
GO(gtk_icon_view_set_text_column, vFpi)
GO(gtk_icon_view_set_tooltip_cell, vFpppp)
GO(gtk_icon_view_set_tooltip_column, vFpi)
GO(gtk_icon_view_set_tooltip_item, vFppp)
GO(gtk_icon_view_unselect_all, vFp)
GO(gtk_icon_view_unselect_path, vFpp)
GO(gtk_icon_view_unset_model_drag_dest, vFp)
GO(gtk_icon_view_unset_model_drag_source, vFp)
GO(gtk_identifier_get_type, iFv)
//GOM(gtk_idle_add, uFEBp)
//GOM(gtk_idle_add_full, uFEiBppB)
//GOM(gtk_idle_add_priority, uFEiBp)
GO(gtk_idle_remove, vFu)
GO(gtk_idle_remove_by_data, vFp)
GO(gtk_image_clear, vFp)
GO(gtk_image_get, vFppp)
GO(gtk_image_get_animation, pFp)
GO(gtk_image_get_gicon, vFppp)
GO(gtk_image_get_icon_name, vFppp)
GO(gtk_image_get_icon_set, vFppp)
GO(gtk_image_get_image, vFppp)
GO(gtk_image_get_pixbuf, pFp)
GO(gtk_image_get_pixel_size, iFp)
GO(gtk_image_get_pixmap, vFppp)
GO(gtk_image_get_stock, vFppp)
GO(gtk_image_get_storage_type, iFp)
GO(gtk_image_get_type, iFv)
GO(gtk_image_menu_item_get_always_show_image, iFp)
GO(gtk_image_menu_item_get_image, pFp)
GO(gtk_image_menu_item_get_type, iFv)
GO(gtk_image_menu_item_get_use_stock, iFp)
GO(gtk_image_menu_item_new, pFv)
GO(gtk_image_menu_item_new_from_stock, pFpp)
GO(gtk_image_menu_item_new_with_label, pFp)
GO(gtk_image_menu_item_new_with_mnemonic, pFp)
GO(gtk_image_menu_item_set_accel_group, vFpp)
GO(gtk_image_menu_item_set_always_show_image, vFpi)
GO(gtk_image_menu_item_set_image, vFpp)
GO(gtk_image_menu_item_set_use_stock, vFpi)
GO(gtk_image_new, pFv)
GO(gtk_image_new_from_animation, pFp)
GO(gtk_image_new_from_file, pFp)
GO(gtk_image_new_from_gicon, pFpi)
GO(gtk_image_new_from_icon_name, pFpi)
GO(gtk_image_new_from_icon_set, pFpi)
GO(gtk_image_new_from_image, pFpp)
GO(gtk_image_new_from_pixbuf, pFp)
GO(gtk_image_new_from_pixmap, pFpp)
GO(gtk_image_new_from_stock, pFpi)
GO(gtk_image_set, vFppp)
GO(gtk_image_set_from_animation, vFpp)
GO(gtk_image_set_from_file, vFppp)
GO(gtk_image_set_from_gicon, vFppi)
GO(gtk_image_set_from_icon_name, vFppi)
GO(gtk_image_set_from_icon_set, vFppi)
GO(gtk_image_set_from_image, vFppp)
GO(gtk_image_set_from_pixbuf, vFpp)
GO(gtk_image_set_from_pixmap, vFppp)
GO(gtk_image_set_from_stock, vFppi)
GO(gtk_image_set_pixel_size, vFpi)
GO(gtk_image_type_get_type, iFv)
GO(gtk_im_context_delete_surrounding, iFpii)
GO(gtk_im_context_filter_keypress, iFpp)
GO(gtk_im_context_focus_in, vFp)
GO(gtk_im_context_focus_out, vFp)
GO(gtk_im_context_get_preedit_string, vFpppp)
GO(gtk_im_context_get_surrounding, iFppp)
GO(gtk_im_context_get_type, iFv)
GO(gtk_im_context_reset, vFp)
GO(gtk_im_context_set_client_window, vFpp)
GO(gtk_im_context_set_cursor_location, vFpp)
GO(gtk_im_context_set_surrounding, vFppii)
GO(gtk_im_context_set_use_preedit, vFpi)
GO(gtk_im_context_simple_add_table, vFppii)
GO(gtk_im_context_simple_get_type, iFv)
GO(gtk_im_context_simple_new, pFv)
GO(gtk_im_multicontext_append_menuitems, vFpp)
GO(gtk_im_multicontext_get_context_id, pFp)
GO(gtk_im_multicontext_get_type, iFv)
GO(gtk_im_multicontext_new, pFv)
GO(gtk_im_multicontext_set_context_id, vFpp)
GO(gtk_im_preedit_style_get_type, iFv)
GO(gtk_im_status_style_get_type, iFv)
//GO(gtk_info_bar_add_action_widget, 
//GO(gtk_info_bar_add_button, 
//GO(gtk_info_bar_add_buttons, 
//GO(gtk_info_bar_get_action_area, 
//GO(gtk_info_bar_get_content_area, 
//GO(gtk_info_bar_get_message_type, 
GO(gtk_info_bar_get_type, iFv)
//GO(gtk_info_bar_new, 
//GO(gtk_info_bar_new_with_buttons, 
//GO(gtk_info_bar_response, 
//GO(gtk_info_bar_set_default_response, 
//GO(gtk_info_bar_set_message_type, 
//GO(gtk_info_bar_set_response_sensitive, 
GOM(gtk_init, vFEpp)
//GO(gtk_init_add, 
GOM(gtk_init_check, iFEpp)
GOM(gtk_init_with_args, iFEpppppp)
//GOM(gtk_input_add_full, uFEiBBppB)
GO(gtk_input_dialog_get_type, iFv)
GO(gtk_input_dialog_new, pFv)
GO(gtk_input_remove, vFu)
//GO(gtk_invisible_get_screen, 
GO(gtk_invisible_get_type, iFv)
//GO(gtk_invisible_new, 
//GO(gtk_invisible_new_for_screen, 
//GO(gtk_invisible_set_screen, 
//GO(gtk_item_deselect, 
//GO(gtk_item_factories_path_delete, 
//GO(gtk_item_factory_add_foreign, 
//GO(gtk_item_factory_construct, 
//GO(gtk_item_factory_create_item, 
//GO(gtk_item_factory_create_items, 
//GO(gtk_item_factory_create_items_ac, 
//GO(gtk_item_factory_create_menu_entries, 
//GO(gtk_item_factory_delete_entries, 
//GO(gtk_item_factory_delete_entry, 
//GO(gtk_item_factory_delete_item, 
//GO(gtk_item_factory_from_path, 
//GO(gtk_item_factory_from_widget, 
//GO(gtk_item_factory_get_item, 
//GO(gtk_item_factory_get_item_by_action, 
GO(gtk_item_factory_get_type, iFv)
//GO(gtk_item_factory_get_widget, 
//GO(gtk_item_factory_get_widget_by_action, 
//GO(gtk_item_factory_new, 
//GO(gtk_item_factory_path_from_widget, 
//GO(gtk_item_factory_popup, 
//GO(gtk_item_factory_popup_data, 
//GO(gtk_item_factory_popup_data_from_widget, 
//GO(gtk_item_factory_popup_with_data, 
//GO(gtk_item_factory_set_translate_func, 
GO(gtk_item_get_type, iFv)
//GO(gtk_item_select, 
//GO(gtk_item_toggle, 
GO(gtk_justification_get_type, iFv)
//GOM(gtk_key_snooper_install, uFEBp)
GO(gtk_key_snooper_remove, vFu)
GO(gtk_label_get, vFpp)
GO(gtk_label_get_angle, dFp)
GO(gtk_label_get_attributes, pFp)
GO(gtk_label_get_current_uri, pFp)
GO(gtk_label_get_ellipsize, iFp)
GO(gtk_label_get_justify, iFp)
GO(gtk_label_get_label, pFp)
GO(gtk_label_get_layout, pFp)
GO(gtk_label_get_layout_offsets, vFppp)
GO(gtk_label_get_line_wrap, iFp)
GO(gtk_label_get_line_wrap_mode, iFp)
GO(gtk_label_get_max_width_chars, iFp)
GO(gtk_label_get_mnemonic_keyval, uFp)
GO(gtk_label_get_mnemonic_widget, pFp)
GO(gtk_label_get_selectable, iFp)
GO(gtk_label_get_selection_bounds, iFppp)
GO(gtk_label_get_single_line_mode, iFp)
GO(gtk_label_get_text, pFp)
GO(gtk_label_get_track_visited_links, iFp)
GO(gtk_label_get_type, iFv)
GO(gtk_label_get_use_markup, iFp)
GO(gtk_label_get_use_underline, iFp)
GO(gtk_label_get_width_chars, iFp)
GO(gtk_label_new, pFp)
GO(gtk_label_new_with_mnemonic, pFp)
GO(gtk_label_parse_uline, uFpp)
GO(gtk_label_select_region, vFpii)
GO(gtk_label_set_angle, vFpd)
GO(gtk_label_set_attributes, vFpp)
GO(gtk_label_set_ellipsize, vFpi)
GO(gtk_label_set_justify, vFpi)
GO(gtk_label_set_label, vFpp)
GO(gtk_label_set_line_wrap, vFpi)
GO(gtk_label_set_line_wrap_mode, vFpi)
GO(gtk_label_set_markup, vFpp)
GO(gtk_label_set_markup_with_mnemonic, vFpp)
GO(gtk_label_set_max_width_chars, vFpi)
GO(gtk_label_set_mnemonic_widget, vFpp)
GO(gtk_label_set_pattern, vFpp)
GO(gtk_label_set_selectable, vFpi)
GO(gtk_label_set_single_line_mode, vFpi)
GO(gtk_label_set_text, vFpp)
GO(gtk_label_set_text_with_mnemonic, vFpp)
GO(gtk_label_set_track_visited_links, vFpi)
GO(gtk_label_set_use_markup, vFpi)
GO(gtk_label_set_use_underline, vFpi)
GO(gtk_label_set_width_chars, vFpi)
//GO(gtk_layout_freeze, 
//GO(gtk_layout_get_bin_window, 
//GO(gtk_layout_get_hadjustment, 
//GO(gtk_layout_get_size, 
GO(gtk_layout_get_type, iFv)
//GO(gtk_layout_get_vadjustment, 
//GO(gtk_layout_move, 
GO(gtk_layout_new, pFpp)
//GO(gtk_layout_put, 
//GO(gtk_layout_set_hadjustment, 
//GO(gtk_layout_set_size, 
//GO(gtk_layout_set_vadjustment, 
//GO(gtk_layout_thaw, 
GO(gtk_link_button_get_type, iFv)
//GO(gtk_link_button_get_uri, 
//GO(gtk_link_button_get_visited, 
//GO(gtk_link_button_new, 
//GO(gtk_link_button_new_with_label, 
//GO(gtk_link_button_set_uri, 
//GO(gtk_link_button_set_uri_hook, 
//GO(gtk_link_button_set_visited, 
GO(gtk_list_append_items, vFpp)
GO(gtk_list_child_position, iFpp)
GO(gtk_list_clear_items, vFpii)
GO(gtk_list_end_drag_selection, vFp)
GO(gtk_list_end_selection, vFp)
GO(gtk_list_extend_selection, vFpifi)
GO(gtk_list_get_type, iFv)
GO(gtk_list_insert_items, vFppi)
GO(gtk_list_item_deselect, vFp)
GO(gtk_list_item_get_type, iFv)
GO(gtk_list_item_new, pFv)
GO(gtk_list_item_new_with_label, pFp)
GO(gtk_list_item_select, vFp)
GO(gtk_list_new, pFv)
GO(gtk_list_prepend_items, vFpp)
GO(gtk_list_remove_items, vFpp)
GO(gtk_list_remove_items_no_unref, vFpp)
GO(gtk_list_scroll_horizontal, vFpif)
GO(gtk_list_scroll_vertical, vFpif)
GO(gtk_list_select_all, vFp)
GO(gtk_list_select_child, vFpp)
GO(gtk_list_select_item, vFpi)
GO(gtk_list_set_selection_mode, vFpi)
GO(gtk_list_start_selection, vFp)
GO(gtk_list_store_append, vFpp)
GO(gtk_list_store_clear, vFp)
GO(gtk_list_store_get_type, iFv)
GO(gtk_list_store_insert, vFppi)
GO(gtk_list_store_insert_after, vFppp)
GO(gtk_list_store_insert_before, vFppp)
//GOM(gtk_list_store_insert_with_values, vFppiV)    // wrap with gtk_list_store_insert_with_valuesv
GO(gtk_list_store_insert_with_valuesv, vFppippi)
GO(gtk_list_store_iter_is_valid, iFpp)
GO(gtk_list_store_move_after, vFppp)
GO(gtk_list_store_move_before, vFppp)
GO2(gtk_list_store_new, pFiV, gtk_list_store_newv)
GO(gtk_list_store_newv, pFip)
GO(gtk_list_store_prepend, vFpp)
GO(gtk_list_store_remove, iFpp)
GO(gtk_list_store_reorder, vFpp)
GO2(gtk_list_store_set, vFppV, gtk_list_store_set_valist)
GO(gtk_list_store_set_column_types, vFpip)
GO(gtk_list_store_set_valist, vFppp)
GO(gtk_list_store_set_value, vFppip)
GO(gtk_list_store_set_valuesv, vFppppi)
GO(gtk_list_store_swap, vFppp)
GO(gtk_list_toggle_add_mode, vFp)
GO(gtk_list_toggle_focus_row, vFp)
GO(gtk_list_toggle_row, vFpp)
GO(gtk_list_undo_selection, vFp)
GO(gtk_list_unselect_all, vFp)
GO(gtk_list_unselect_child, vFpp)
GO(gtk_list_unselect_item, vFpi)
GO(gtk_main, vFv)
GO(gtk_main_do_event, vFp)
GO(gtk_main_iteration, iFv)
GO(gtk_main_iteration_do, iFi)
GO(gtk_main_level, uFv)
GO(gtk_main_quit, vFv)
//GO(gtk_marshal_BOOLEAN__POINTER, 
//GO(gtk_marshal_BOOLEAN__POINTER_INT_INT, 
//GO(gtk_marshal_BOOLEAN__POINTER_INT_INT_UINT, 
//GO(gtk_marshal_BOOLEAN__POINTER_POINTER_INT_INT, 
//GO(gtk_marshal_BOOLEAN__POINTER_STRING_STRING_POINTER, 
//GO(gtk_marshal_BOOLEAN__VOID, 
//GO(gtk_marshal_ENUM__ENUM, 
//GO(gtk_marshal_INT__POINTER, 
//GO(gtk_marshal_INT__POINTER_CHAR_CHAR, 
//GO(gtk_marshal_VOID__ENUM_FLOAT, 
//GO(gtk_marshal_VOID__ENUM_FLOAT_BOOLEAN, 
//GO(gtk_marshal_VOID__INT_INT, 
//GO(gtk_marshal_VOID__INT_INT_POINTER, 
//GO(gtk_marshal_VOID__POINTER_INT, 
//GO(gtk_marshal_VOID__POINTER_INT_INT_POINTER_UINT_UINT, 
//GO(gtk_marshal_VOID__POINTER_POINTER, 
//GO(gtk_marshal_VOID__POINTER_POINTER_POINTER, 
//GO(gtk_marshal_VOID__POINTER_POINTER_UINT_UINT, 
//GO(gtk_marshal_VOID__POINTER_STRING_STRING, 
//GO(gtk_marshal_VOID__POINTER_UINT, 
//GO(gtk_marshal_VOID__POINTER_UINT_ENUM, 
//GO(gtk_marshal_VOID__POINTER_UINT_UINT, 
//GO(gtk_marshal_VOID__STRING_INT_POINTER, 
//GO(gtk_marshal_VOID__UINT_POINTER_UINT_ENUM_ENUM_POINTER, 
//GO(gtk_marshal_VOID__UINT_POINTER_UINT_UINT_ENUM, 
//GO(gtk_marshal_VOID__UINT_STRING, 
GO(gtk_match_type_get_type, iFv)
GO(gtk_menu_attach, vFppuuuu)
GOM(gtk_menu_attach_to_widget, vFEppp)
GO(gtk_menu_bar_get_child_pack_direction, iFp)
GO(gtk_menu_bar_get_pack_direction, iFp)
GO(gtk_menu_bar_get_type, iFv)
GO(gtk_menu_bar_new, pFv)
GO(gtk_menu_bar_set_child_pack_direction, vFpi)
GO(gtk_menu_bar_set_pack_direction, vFpi)
GO(gtk_menu_detach, vFp)
GO(gtk_menu_direction_type_get_type, iFv)
GO(gtk_menu_get_accel_group, pFp)
GO(gtk_menu_get_accel_path, pFp)
GO(gtk_menu_get_active, pFp)
GO(gtk_menu_get_attach_widget, pFp)
GO(gtk_menu_get_for_attach_widget, pFp)
GO(gtk_menu_get_monitor, iFp)
GO(gtk_menu_get_reserve_toggle_size, iFp)
GO(gtk_menu_get_tearoff_state, iFp)
GO(gtk_menu_get_title, pFp)
GO(gtk_menu_get_type, iFv)
GO(gtk_menu_item_activate, vFp)
GO(gtk_menu_item_deselect, vFp)
GO(gtk_menu_item_get_accel_path, pFp)
GO(gtk_menu_item_get_label, pFp)
GO(gtk_menu_item_get_right_justified, iFp)
GO(gtk_menu_item_get_submenu, pFp)
GO(gtk_menu_item_get_type, iFv)
GO(gtk_menu_item_get_use_underline, vFpi)
GO(gtk_menu_item_new, pFv)
GO(gtk_menu_item_new_with_label, pFp)
GO(gtk_menu_item_new_with_mnemonic, pFp)
GO(gtk_menu_item_remove_submenu, pFp)
GO(gtk_menu_item_select, vFp)
GO(gtk_menu_item_set_accel_path, vFpp)
GO(gtk_menu_item_set_label, vFpp)
GO(gtk_menu_item_set_right_justified, vFpi)
GO(gtk_menu_item_set_submenu, vFpp)
GO(gtk_menu_item_set_use_underline, iFp)
GO(gtk_menu_item_toggle_size_allocate, vFpi)
GO(gtk_menu_item_toggle_size_request, vFpp)
GO(gtk_menu_new, pFv)
GO(gtk_menu_popdown, vFp)
GOM(gtk_menu_popup, vFEpppppuu)
GO(gtk_menu_reorder_child, vFppi)
GO(gtk_menu_reposition, vFp)
GO(gtk_menu_set_accel_group, vFpp)
GO(gtk_menu_set_accel_path, vFpp)
GO(gtk_menu_set_active, vFpu)
GO(gtk_menu_set_monitor, vFpi)
GO(gtk_menu_set_reserve_toggle_size, vFpi)
GO(gtk_menu_set_screen, vFpp)
GO(gtk_menu_set_tearoff_state, vFpi)
GO(gtk_menu_set_title, vFpp)
//GO(gtk_menu_shell_activate_item, 
GO(gtk_menu_shell_append, vFpp)
//GO(gtk_menu_shell_cancel, 
//GO(gtk_menu_shell_deactivate, 
//GO(gtk_menu_shell_deselect, 
//GO(gtk_menu_shell_get_take_focus, 
GO(gtk_menu_shell_get_type, iFv)
GO(gtk_menu_shell_insert, vFppi)
GO(gtk_menu_shell_prepend, vFpp)
GO(gtk_menu_shell_select_first, vFpi)
GO(gtk_menu_shell_select_item, vFpp)
//GO(gtk_menu_shell_set_take_focus, 
//GO(gtk_menu_tool_button_get_menu, 
GO(gtk_menu_tool_button_get_type, iFv)
//GO(gtk_menu_tool_button_new, 
//GO(gtk_menu_tool_button_new_from_stock, 
//GO(gtk_menu_tool_button_set_arrow_tooltip, 
//GO(gtk_menu_tool_button_set_arrow_tooltip_markup, 
//GO(gtk_menu_tool_button_set_arrow_tooltip_text, 
//GO(gtk_menu_tool_button_set_menu, 
//GO(gtk_message_dialog_format_secondary_markup, 
GOM(gtk_message_dialog_format_secondary_text, vFEppV)
//GO(gtk_message_dialog_get_image, 
//GO(gtk_message_dialog_get_message_area, 
GO(gtk_message_dialog_get_type, iFv)
GO(gtk_message_dialog_new, pFpuiippppppppppp)   // vaarg :(
//GO(gtk_message_dialog_new_with_markup, 
//GO(gtk_message_dialog_set_image, 
//GO(gtk_message_dialog_set_markup, 
GO(gtk_message_type_get_type, iFv)
GO(gtk_metric_type_get_type, iFv)
GO(gtk_misc_get_alignment, vFppp)
GO(gtk_misc_get_padding, vFppp)
GO(gtk_misc_get_type, iFv)
GO(gtk_misc_set_alignment, vFpff)
GO(gtk_misc_set_padding, vFpii)
//GO(gtk_mount_operation_get_parent, 
//GO(gtk_mount_operation_get_screen, 
GO(gtk_mount_operation_get_type, iFv)
//GO(gtk_mount_operation_is_showing, 
//GO(gtk_mount_operation_new, 
//GO(gtk_mount_operation_set_parent, 
//GO(gtk_mount_operation_set_screen, 
GO(gtk_movement_step_get_type, iFv)
GO(gtk_notebook_append_page, iFppp)
GO(gtk_notebook_append_page_menu, iFpppp)
GO(gtk_notebook_get_action_widget, pFpi)
GO(gtk_notebook_get_current_page, iFp)
GO(gtk_notebook_get_group, pFp)
GO(gtk_notebook_get_group_id, iFp)
GO(gtk_notebook_get_group_name, pFp)
GO(gtk_notebook_get_menu_label, pFpp)
GO(gtk_notebook_get_menu_label_text, pFpp)
GO(gtk_notebook_get_n_pages, iFp)
GO(gtk_notebook_get_nth_page, pFpi)
GO(gtk_notebook_get_scrollable, iFp)
GO(gtk_notebook_get_show_border, iFp)
GO(gtk_notebook_get_show_tabs, iFp)
GO(gtk_notebook_get_tab_detachable, iFpp)
GO(gtk_notebook_get_tab_hborder, WFp)
GO(gtk_notebook_get_tab_label, pFpp)
GO(gtk_notebook_get_tab_label_text, pFpp)
GO(gtk_notebook_get_tab_pos, iFp)
GO(gtk_notebook_get_tab_reorderable, iFpp)
GO(gtk_notebook_get_tab_vborder, WFp)
GO(gtk_notebook_get_type, iFv)
GO(gtk_notebook_insert_page, iFpppi)
GO(gtk_notebook_insert_page_menu, iFppppi)
GO(gtk_notebook_new, pFv)
GO(gtk_notebook_next_page, vFp)
GO(gtk_notebook_page_num, iFpp)
GO(gtk_notebook_popup_disable, vFp)
GO(gtk_notebook_popup_enable, vFp)
GO(gtk_notebook_prepend_page, iFppp)
GO(gtk_notebook_prepend_page_menu, iFpppp)
GO(gtk_notebook_prev_page, vFp)
GO(gtk_notebook_query_tab_label_packing, vFppppp)
GO(gtk_notebook_remove_page, vFpi)
GO(gtk_notebook_reorder_child, vFppi)
GO(gtk_notebook_set_action_widget, vFppi)
GO(gtk_notebook_set_current_page, vFpi)
GO(gtk_notebook_set_group, vFpp)
GO(gtk_notebook_set_group_id, vFpi)
GO(gtk_notebook_set_group_name, vFpp)
GO(gtk_notebook_set_homogeneous_tabs, vFpi)
GO(gtk_notebook_set_menu_label, vFppp)
GO(gtk_notebook_set_menu_label_text, vFppp)
GO(gtk_notebook_set_scrollable, vFpi)
GO(gtk_notebook_set_show_border, vFpi)
GO(gtk_notebook_set_show_tabs, vFpi)
GO(gtk_notebook_set_tab_border, vFpu)
GO(gtk_notebook_set_tab_detachable, vFppi)
GO(gtk_notebook_set_tab_hborder, vFpu)
GO(gtk_notebook_set_tab_label, vFppp)
GO(gtk_notebook_set_tab_label_packing, vFppiii)
GO(gtk_notebook_set_tab_label_text, vFppp)
GO(gtk_notebook_set_tab_pos, vFpi)
GO(gtk_notebook_set_tab_reorderable, vFppi)
GO(gtk_notebook_set_tab_vborder, vFpu)
//GOM(gtk_notebook_set_window_creation_hook, pFEppp)
GO(gtk_notebook_tab_get_type, iFv)
GO(gtk_number_up_layout_get_type, iFv)
GO(gtk_object_add_arg_type, vFpiuu)
GO(gtk_object_destroy, vFp)
GO(gtk_object_flags_get_type, iFv)
GO(gtk_object_get, vFppppppppppp)   // vaarg
GO(gtk_object_get_data, pFpp)
GO(gtk_object_get_data_by_id, pFpp)
GO(gtk_object_get_type, iFv)
GO(gtk_object_get_user_data, pFp)
GO(gtk_object_new, pFppppppppppp)   //vaarg
GO(gtk_object_ref, pFp)
GO(gtk_object_remove_data, vFpp)
GO(gtk_object_remove_data_by_id, vFpp)
GO(gtk_object_remove_no_notify, vFpp)
GO(gtk_object_remove_no_notify_by_id, vFpp)
GO(gtk_object_set, vFppppppppppp)   //vaarg
GO(gtk_object_set_data, vFppp)
GO(gtk_object_set_data_by_id, vFppp)
//GOM(gtk_object_set_data_by_id_full, vFEpppp)
GOM(gtk_object_set_data_full, vFEpppp)
GO(gtk_object_set_user_data, vFpp)
GO(gtk_object_sink, vFp)
GO(gtk_object_unref, vFp)
//GOM(gtk_object_weakref, vFEppp)
//GOM(gtk_object_weakunref, vFEppp)
GO(gtk_offscreen_window_get_pixbuf, pFp)
GO(gtk_offscreen_window_get_pixmap, pFp)
GO(gtk_offscreen_window_get_type, iFv)
GO(gtk_offscreen_window_new, pFv)
GO(gtk_old_editable_changed, vFp)
GO(gtk_old_editable_claim_selection, vFpiu)
GO(gtk_old_editable_get_type, iFv)
GO(gtk_option_menu_get_history, iFp)
GO(gtk_option_menu_get_menu, pFp)
GO(gtk_option_menu_get_type, iFv)
GO(gtk_option_menu_new, pFv)
GO(gtk_option_menu_remove_menu, vFp)
GO(gtk_option_menu_set_history, vFpu)
GO(gtk_option_menu_set_menu, vFpp)
GO(gtk_orientable_get_orientation, iFp)
GO(gtk_orientable_get_type, iFv)
GO(gtk_orientable_set_orientation, vFpi)
GO(gtk_orientation_get_type, iFv)
GO(gtk_pack_direction_get_type, iFv)
GO(gtk_pack_type_get_type, iFv)
GO(gtk_page_orientation_get_type, iFv)
GO(gtk_page_set_get_type, iFv)
//GO(gtk_page_setup_copy, 
//GO(gtk_page_setup_get_bottom_margin, 
//GO(gtk_page_setup_get_left_margin, 
//GO(gtk_page_setup_get_orientation, 
//GO(gtk_page_setup_get_page_height, 
//GO(gtk_page_setup_get_page_width, 
//GO(gtk_page_setup_get_paper_height, 
//GO(gtk_page_setup_get_paper_size, 
//GO(gtk_page_setup_get_paper_width, 
//GO(gtk_page_setup_get_right_margin, 
//GO(gtk_page_setup_get_top_margin, 
GO(gtk_page_setup_get_type, iFv)
//GO(gtk_page_setup_load_file, 
//GO(gtk_page_setup_load_key_file, 
//GO(gtk_page_setup_new, 
//GO(gtk_page_setup_new_from_file, 
//GO(gtk_page_setup_new_from_key_file, 
//GO(gtk_page_setup_set_bottom_margin, 
//GO(gtk_page_setup_set_left_margin, 
//GO(gtk_page_setup_set_orientation, 
//GO(gtk_page_setup_set_paper_size, 
//GO(gtk_page_setup_set_paper_size_and_default_margins, 
//GO(gtk_page_setup_set_right_margin, 
//GO(gtk_page_setup_set_top_margin, 
//GO(gtk_page_setup_to_file, 
//GO(gtk_page_setup_to_key_file, 
//GO(gtk_page_setup_unix_dialog_get_page_setup, 
//GO(gtk_page_setup_unix_dialog_get_print_settings, 
GO(gtk_page_setup_unix_dialog_get_type, iFv)
//GO(gtk_page_setup_unix_dialog_new, 
//GO(gtk_page_setup_unix_dialog_set_page_setup, 
//GO(gtk_page_setup_unix_dialog_set_print_settings, 
GO(gtk_paint_arrow, vFppiipppiiiiii)
GO(gtk_paint_box, vFppiipppiiii)
GO(gtk_paint_box_gap, vFppiipppiiiiiii)
GO(gtk_paint_check, vFppiipppiiii)
GO(gtk_paint_diamond, vFppiipppiiii)
GO(gtk_paint_expander, vFppipppiii)
GO(gtk_paint_extension, vFppiipppiiiii)
GO(gtk_paint_flat_box, vFppiipppiiii)
GO(gtk_paint_focus, vFppipppiiii)
GO(gtk_paint_handle, vFppiipppiiiii)
GO(gtk_paint_hline, vFppipppiii)
GO(gtk_paint_layout, vFppiipppiip)
GO(gtk_paint_option, vFppiipppiiii)
GO(gtk_paint_polygon, vFppiippppii)
GO(gtk_paint_resize_grip, vFppipppiiiii)
GO(gtk_paint_shadow, vFppiipppiiii)
GO(gtk_paint_shadow_gap, vFppiipppiiiiiii)
GO(gtk_paint_slider, vFppiipppiiiii)
GO(gtk_paint_spinner, vFppipppuiiii)
GO(gtk_paint_string, vFppipppiip)
GO(gtk_paint_tab, vFppiipppiiii)
GO(gtk_paint_vline, vFppipppiii)
GO(gtk_paned_add1, vFpp)
GO(gtk_paned_add2, vFpp)
GO(gtk_paned_compute_position, vFpiii)
GO(gtk_paned_get_child1, pFp)
GO(gtk_paned_get_child2, pFp)
GO(gtk_paned_get_handle_window, pFp)
GO(gtk_paned_get_position, pFp)
GO(gtk_paned_get_type, iFv)
GO(gtk_paned_pack1, vFppii)
GO(gtk_paned_pack2, vFppii)
GO(gtk_paned_set_position, vFpi)
//GO(gtk_paper_size_copy, 
//GO(gtk_paper_size_free, 
//GO(gtk_paper_size_get_default, 
//GO(gtk_paper_size_get_default_bottom_margin, 
//GO(gtk_paper_size_get_default_left_margin, 
//GO(gtk_paper_size_get_default_right_margin, 
//GO(gtk_paper_size_get_default_top_margin, 
//GO(gtk_paper_size_get_display_name, 
//GO(gtk_paper_size_get_height, 
//GO(gtk_paper_size_get_name, 
//GO(gtk_paper_size_get_paper_sizes, 
//GO(gtk_paper_size_get_ppd_name, 
GO(gtk_paper_size_get_type, iFv)
//GO(gtk_paper_size_get_width, 
//GO(gtk_paper_size_is_custom, 
//GO(gtk_paper_size_is_equal, 
//GO(gtk_paper_size_new, 
//GO(gtk_paper_size_new_custom, 
//GO(gtk_paper_size_new_from_key_file, 
//GO(gtk_paper_size_new_from_ppd, 
//GO(gtk_paper_size_set_size, 
//GO(gtk_paper_size_to_key_file, 
GO(gtk_parse_args, iFpp)
GO(gtk_path_bar_get_type, iFv)
GO(gtk_path_priority_type_get_type, iFv)
GO(gtk_path_type_get_type, iFv)
GO(gtk_pixmap_get, vFppp)
GO(gtk_pixmap_get_type, iFv)
GO(gtk_pixmap_new, pFpp)
GO(gtk_pixmap_set, vFppp)
GO(gtk_pixmap_set_build_insensitive, vFpi)
GO(gtk_plug_construct, vFpp)
GO(gtk_plug_construct_for_display, vFppp)
GO(gtk_plug_get_embedded, iFp)
GO(gtk_plug_get_id, pFp)
GO(gtk_plug_get_socket_window, pFp)
GO(gtk_plug_get_type, iFv)
GO(gtk_plug_new, pFp)
GO(gtk_plug_new_for_display, pFpp)
GO(gtk_policy_type_get_type, iFv)
GO(gtk_position_type_get_type, iFv)
//GO(gtk_preview_draw_row, 
//GO(gtk_preview_get_cmap, 
//GO(gtk_preview_get_info, 
GO(gtk_preview_get_type, iFv)
//GO(gtk_preview_get_visual, 
//GO(gtk_preview_new, 
//GO(gtk_preview_put, 
//GO(gtk_preview_reset, 
//GO(gtk_preview_set_color_cube, 
//GO(gtk_preview_set_dither, 
//GO(gtk_preview_set_expand, 
//GO(gtk_preview_set_gamma, 
//GO(gtk_preview_set_install_cmap, 
//GO(gtk_preview_set_reserved, 
//GO(gtk_preview_size, 
GO(gtk_preview_type_get_type, iFv)
//GO(gtk_preview_uninit, 
//GO(gtk_print_backend_add_printer, 
//GO(gtk_print_backend_destroy, 
//GO(gtk_print_backend_error_quark, 
//GO(gtk_print_backend_find_printer, 
//GO(gtk_print_backend_get_printer_list, 
GO(gtk_print_backend_get_type, iFv)
//GO(gtk_print_backend_load_modules, 
//GO(gtk_print_backend_printer_list_is_done, 
//GO(gtk_print_backend_print_stream, 
//GO(gtk_print_backend_remove_printer, 
//GO(gtk_print_backend_set_list_done, 
//GO(gtk_print_backend_set_password, 
GO(gtk_print_capabilities_get_type, iFv)
//GO(gtk_print_context_create_pango_context, 
//GO(gtk_print_context_create_pango_layout, 
//GO(gtk_print_context_get_cairo_context, 
//GO(gtk_print_context_get_dpi_x, 
//GO(gtk_print_context_get_dpi_y, 
//GO(gtk_print_context_get_hard_margins, 
//GO(gtk_print_context_get_height, 
//GO(gtk_print_context_get_page_setup, 
//GO(gtk_print_context_get_pango_fontmap, 
GO(gtk_print_context_get_type, iFv)
//GO(gtk_print_context_get_width, 
//GO(gtk_print_context_set_cairo_context, 
GO(gtk_print_duplex_get_type, iFv)
//GO(gtk_printer_accepts_pdf, 
//GO(gtk_printer_accepts_ps, 
//GO(gtk_printer_compare, 
//GO(gtk_printer_get_backend, 
//GO(gtk_printer_get_capabilities, 
//GO(gtk_printer_get_default_page_size, 
//GO(gtk_printer_get_description, 
//GO(gtk_printer_get_hard_margins, 
//GO(gtk_printer_get_icon_name, 
//GO(gtk_printer_get_job_count, 
//GO(gtk_printer_get_location, 
//GO(gtk_printer_get_name, 
//GO(gtk_printer_get_state_message, 
GO(gtk_printer_get_type, iFv)
//GO(gtk_printer_has_details, 
//GO(gtk_printer_is_accepting_jobs, 
//GO(gtk_printer_is_active, 
//GO(gtk_printer_is_default, 
//GO(gtk_printer_is_new, 
//GO(gtk_printer_is_paused, 
//GO(gtk_printer_is_virtual, 
//GO(gtk_printer_list_papers, 
//GO(gtk_printer_new, 
//GO(gtk_printer_option_allocate_choices, 
//GO(gtk_printer_option_choices_from_array, 
//GO(gtk_printer_option_clear_has_conflict, 
//GO(gtk_printer_option_get_activates_default, 
GO(gtk_printer_option_get_type, iFv)
//GO(gtk_printer_option_has_choice, 
//GO(gtk_printer_option_new, 
//GO(gtk_printer_option_set, 
//GO(gtk_printer_option_set_activates_default, 
//GO(gtk_printer_option_set_add, 
//GO(gtk_printer_option_set_boolean, 
//GO(gtk_printer_option_set_clear_conflicts, 
//GO(gtk_printer_option_set_foreach, 
//GO(gtk_printer_option_set_foreach_in_group, 
//GO(gtk_printer_option_set_get_groups, 
GO(gtk_printer_option_set_get_type, iFv)
//GO(gtk_printer_option_set_has_conflict, 
//GO(gtk_printer_option_set_lookup, 
//GO(gtk_printer_option_set_new, 
//GO(gtk_printer_option_set_remove, 
//GO(gtk_printer_option_widget_get_external_label, 
GO(gtk_printer_option_widget_get_type, iFv)
//GO(gtk_printer_option_widget_get_value, 
//GO(gtk_printer_option_widget_has_external_label, 
//GO(gtk_printer_option_widget_new, 
//GO(gtk_printer_option_widget_set_source, 
//GO(gtk_printer_request_details, 
GO(gtk_print_error_get_type, iFv)
//GO(gtk_print_error_quark, 
//GO(gtk_printer_set_accepts_pdf, 
//GO(gtk_printer_set_accepts_ps, 
//GO(gtk_printer_set_description, 
//GO(gtk_printer_set_has_details, 
//GO(gtk_printer_set_icon_name, 
//GO(gtk_printer_set_is_accepting_jobs, 
//GO(gtk_printer_set_is_active, 
//GO(gtk_printer_set_is_default, 
//GO(gtk_printer_set_is_new, 
//GO(gtk_printer_set_is_paused, 
//GO(gtk_printer_set_job_count, 
//GO(gtk_printer_set_location, 
//GO(gtk_printer_set_state_message, 
//GO(gtk_print_job_get_printer, 
//GO(gtk_print_job_get_settings, 
//GO(gtk_print_job_get_status, 
//GO(gtk_print_job_get_surface, 
//GO(gtk_print_job_get_title, 
//GO(gtk_print_job_get_track_print_status, 
GO(gtk_print_job_get_type, iFv)
//GO(gtk_print_job_new, 
//GO(gtk_print_job_send, 
//GO(gtk_print_job_set_source_file, 
//GO(gtk_print_job_set_status, 
//GO(gtk_print_job_set_track_print_status, 
GO(gtk_print_operation_action_get_type, iFv)
//GO(gtk_print_operation_cancel, 
//GO(gtk_print_operation_draw_page_finish, 
//GO(gtk_print_operation_get_default_page_setup, 
//GO(gtk_print_operation_get_embed_page_setup, 
//GO(gtk_print_operation_get_error, 
//GO(gtk_print_operation_get_has_selection, 
//GO(gtk_print_operation_get_n_pages_to_print, 
//GO(gtk_print_operation_get_print_settings, 
//GO(gtk_print_operation_get_status, 
//GO(gtk_print_operation_get_status_string, 
//GO(gtk_print_operation_get_support_selection, 
GO(gtk_print_operation_get_type, iFv)
//GO(gtk_print_operation_is_finished, 
//GO(gtk_print_operation_new, 
//GO(gtk_print_operation_preview_end_preview, 
GO(gtk_print_operation_preview_get_type, iFv)
//GO(gtk_print_operation_preview_is_selected, 
//GO(gtk_print_operation_preview_render_page, 
GO(gtk_print_operation_result_get_type, iFv)
//GO(gtk_print_operation_run, 
//GO(gtk_print_operation_set_allow_async, 
//GO(gtk_print_operation_set_current_page, 
//GO(gtk_print_operation_set_custom_tab_label, 
//GO(gtk_print_operation_set_default_page_setup, 
//GO(gtk_print_operation_set_defer_drawing, 
//GO(gtk_print_operation_set_embed_page_setup, 
//GO(gtk_print_operation_set_export_filename, 
//GO(gtk_print_operation_set_has_selection, 
//GO(gtk_print_operation_set_job_name, 
//GO(gtk_print_operation_set_n_pages, 
//GO(gtk_print_operation_set_print_settings, 
//GO(gtk_print_operation_set_show_progress, 
//GO(gtk_print_operation_set_support_selection, 
//GO(gtk_print_operation_set_track_print_status, 
//GO(gtk_print_operation_set_unit, 
//GO(gtk_print_operation_set_use_full_page, 
GO(gtk_print_pages_get_type, iFv)
GO(gtk_print_quality_get_type, iFv)
//GO(gtk_print_run_page_setup_dialog, 
//GO(gtk_print_run_page_setup_dialog_async, 
//GO(gtk_print_settings_copy, 
//GO(gtk_print_settings_foreach, 
//GO(gtk_print_settings_get, 
//GO(gtk_print_settings_get_bool, 
//GO(gtk_print_settings_get_collate, 
//GO(gtk_print_settings_get_default_source, 
//GO(gtk_print_settings_get_dither, 
//GO(gtk_print_settings_get_double, 
//GO(gtk_print_settings_get_double_with_default, 
//GO(gtk_print_settings_get_duplex, 
//GO(gtk_print_settings_get_finishings, 
//GO(gtk_print_settings_get_int, 
//GO(gtk_print_settings_get_int_with_default, 
//GO(gtk_print_settings_get_length, 
//GO(gtk_print_settings_get_media_type, 
//GO(gtk_print_settings_get_n_copies, 
//GO(gtk_print_settings_get_number_up, 
//GO(gtk_print_settings_get_number_up_layout, 
//GO(gtk_print_settings_get_orientation, 
//GO(gtk_print_settings_get_output_bin, 
//GO(gtk_print_settings_get_page_ranges, 
//GO(gtk_print_settings_get_page_set, 
//GO(gtk_print_settings_get_paper_height, 
//GO(gtk_print_settings_get_paper_size, 
//GO(gtk_print_settings_get_paper_width, 
//GO(gtk_print_settings_get_printer, 
//GO(gtk_print_settings_get_printer_lpi, 
//GO(gtk_print_settings_get_print_pages, 
//GO(gtk_print_settings_get_quality, 
//GO(gtk_print_settings_get_resolution, 
//GO(gtk_print_settings_get_resolution_x, 
//GO(gtk_print_settings_get_resolution_y, 
//GO(gtk_print_settings_get_reverse, 
//GO(gtk_print_settings_get_scale, 
GO(gtk_print_settings_get_type, iFv)
//GO(gtk_print_settings_get_use_color, 
//GO(gtk_print_settings_has_key, 
//GO(gtk_print_settings_load_file, 
//GO(gtk_print_settings_load_key_file, 
//GO(gtk_print_settings_new, 
//GO(gtk_print_settings_new_from_file, 
//GO(gtk_print_settings_new_from_key_file, 
//GO(gtk_print_settings_set, 
//GO(gtk_print_settings_set_bool, 
//GO(gtk_print_settings_set_collate, 
//GO(gtk_print_settings_set_default_source, 
//GO(gtk_print_settings_set_dither, 
//GO(gtk_print_settings_set_double, 
//GO(gtk_print_settings_set_duplex, 
//GO(gtk_print_settings_set_finishings, 
//GO(gtk_print_settings_set_int, 
//GO(gtk_print_settings_set_length, 
//GO(gtk_print_settings_set_media_type, 
//GO(gtk_print_settings_set_n_copies, 
//GO(gtk_print_settings_set_number_up, 
//GO(gtk_print_settings_set_number_up_layout, 
//GO(gtk_print_settings_set_orientation, 
//GO(gtk_print_settings_set_output_bin, 
//GO(gtk_print_settings_set_page_ranges, 
//GO(gtk_print_settings_set_page_set, 
//GO(gtk_print_settings_set_paper_height, 
//GO(gtk_print_settings_set_paper_size, 
//GO(gtk_print_settings_set_paper_width, 
//GO(gtk_print_settings_set_printer, 
//GO(gtk_print_settings_set_printer_lpi, 
//GO(gtk_print_settings_set_print_pages, 
//GO(gtk_print_settings_set_quality, 
//GO(gtk_print_settings_set_resolution, 
//GO(gtk_print_settings_set_resolution_xy, 
//GO(gtk_print_settings_set_reverse, 
//GO(gtk_print_settings_set_scale, 
//GO(gtk_print_settings_set_use_color, 
//GO(gtk_print_settings_to_file, 
//GO(gtk_print_settings_to_key_file, 
//GO(gtk_print_settings_unset, 
GO(gtk_print_status_get_type, iFv)
//GO(gtk_print_unix_dialog_add_custom_tab, 
//GO(gtk_print_unix_dialog_get_current_page, 
//GO(gtk_print_unix_dialog_get_embed_page_setup, 
//GO(gtk_print_unix_dialog_get_has_selection, 
//GO(gtk_print_unix_dialog_get_manual_capabilities, 
//GO(gtk_print_unix_dialog_get_page_setup, 
//GO(gtk_print_unix_dialog_get_page_setup_set, 
//GO(gtk_print_unix_dialog_get_selected_printer, 
//GO(gtk_print_unix_dialog_get_settings, 
//GO(gtk_print_unix_dialog_get_support_selection, 
GO(gtk_print_unix_dialog_get_type, iFv)
//GO(gtk_print_unix_dialog_new, 
//GO(gtk_print_unix_dialog_set_current_page, 
//GO(gtk_print_unix_dialog_set_embed_page_setup, 
//GO(gtk_print_unix_dialog_set_has_selection, 
//GO(gtk_print_unix_dialog_set_manual_capabilities, 
//GO(gtk_print_unix_dialog_set_page_setup, 
//GO(gtk_print_unix_dialog_set_settings, 
//GO(gtk_print_unix_dialog_set_support_selection, 
GO(gtk_private_flags_get_type, iFv)
GO(gtk_progress_bar_get_ellipsize, iFp)
GO(gtk_progress_bar_get_fraction, dFp)
GO(gtk_progress_bar_get_orientation, iFp)
GO(gtk_progress_bar_get_pulse_step, fFp)
GO(gtk_progress_bar_get_text, pFp)
GO(gtk_progress_bar_get_type, iFv)
GO(gtk_progress_bar_new, pFv)
GO(gtk_progress_bar_new_with_adjustment, pFp)
GO(gtk_progress_bar_orientation_get_type, iFv)
GO(gtk_progress_bar_pulse, vFp)
GO(gtk_progress_bar_set_activity_blocks, vFpu)
GO(gtk_progress_bar_set_activity_step, vFpu)
GO(gtk_progress_bar_set_bar_style, vFpi)
GO(gtk_progress_bar_set_discrete_blocks, vFpu)
GO(gtk_progress_bar_set_ellipsize, vFpi)
GO(gtk_progress_bar_set_fraction, vFpd)
GO(gtk_progress_bar_set_orientation, vFpi)
GO(gtk_progress_bar_set_pulse_step, vFpd)
GO(gtk_progress_bar_set_text, vFpp)
GO(gtk_progress_bar_style_get_type, iFv)
GO(gtk_progress_bar_update, vFpd)
//GO(gtk_progress_configure, 
//GO(gtk_progress_get_current_percentage, 
//GO(gtk_progress_get_current_text, 
//GO(gtk_progress_get_percentage_from_value, 
//GO(gtk_progress_get_text_from_value, 
GO(gtk_progress_get_type, iFv)
//GO(gtk_progress_get_value, 
//GO(gtk_progress_set_activity_mode, 
//GO(gtk_progress_set_adjustment, 
//GO(gtk_progress_set_format_string, 
//GO(gtk_progress_set_percentage, 
//GO(gtk_progress_set_show_text, 
//GO(gtk_progress_set_text_alignment, 
//GO(gtk_progress_set_value, 
GO(gtk_propagate_event, vFpp)
//GOM(gtk_quit_add, iFEuBp)
GO(gtk_quit_add_destroy, vFup)
//GOM(gtk_quit_add_full, uFuBppB)
GO(gtk_quit_remove, vFu)
GO(gtk_quit_remove_by_data, vFp)
GO(gtk_radio_action_get_current_value, iFp)
GO(gtk_radio_action_get_group, pFp)
GO(gtk_radio_action_get_type, iFv)
GO(gtk_radio_action_new, pFppppi)
GO(gtk_radio_action_set_current_value, vFpi)
GO(gtk_radio_action_set_group, vFpp)
GO(gtk_radio_button_get_group, pFp)
GO(gtk_radio_button_get_type, iFv)
GO(gtk_radio_button_new, pFp)
GO(gtk_radio_button_new_from_widget, pFp)
GO(gtk_radio_button_new_with_label, pFpp)
GO(gtk_radio_button_new_with_label_from_widget, pFpp)
GO(gtk_radio_button_new_with_mnemonic, pFpp)
GO(gtk_radio_button_new_with_mnemonic_from_widget, pFpp)
GO(gtk_radio_button_set_group, vFpp)
GO(gtk_radio_menu_item_get_group, pFp)
GO(gtk_radio_menu_item_get_type, iFv)
GO(gtk_radio_menu_item_new, pFp)
GO(gtk_radio_menu_item_new_from_widget, pFp)
GO(gtk_radio_menu_item_new_with_label, pFpp)
GO(gtk_radio_menu_item_new_with_label_from_widget, pFpp)
GO(gtk_radio_menu_item_new_with_mnemonic, pFpp)
GO(gtk_radio_menu_item_new_with_mnemonic_from_widget, pFpp)
GO(gtk_radio_menu_item_set_group, vFpp)
GO(gtk_radio_tool_button_get_group, pFp)
GO(gtk_radio_tool_button_get_type, iFv)
GO(gtk_radio_tool_button_new, pFp)
GO(gtk_radio_tool_button_new_from_stock, pFpp)
GO(gtk_radio_tool_button_new_from_widget, pFp)
GO(gtk_radio_tool_button_new_with_stock_from_widget, pFpp)
GO(gtk_radio_tool_button_set_group, vFpp)
GO(gtk_range_get_adjustment, pFp)
GO(gtk_range_get_fill_level, dFp)
GO(gtk_range_get_flippable, iFp)
GO(gtk_range_get_inverted, iFp)
GO(gtk_range_get_lower_stepper_sensitivity, iFp)
GO(gtk_range_get_min_slider_size, iFp)
GO(gtk_range_get_range_rect, vFpp)
GO(gtk_range_get_restrict_to_fill_level, iFp)
GO(gtk_range_get_round_digits, iFp)
GO(gtk_range_get_show_fill_level, iFp)
GO(gtk_range_get_slider_range, vFppp)
GO(gtk_range_get_slider_size_fixed, iFp)
GO(gtk_range_get_type, iFv)
GO(gtk_range_get_update_policy, iFp)
GO(gtk_range_get_upper_stepper_sensitivity, iFp)
GO(gtk_range_get_value, dFp)
GO(gtk_range_set_adjustment, vFpp)
GO(gtk_range_set_fill_level, vFpd)
GO(gtk_range_set_flippable, vFpi)
GO(gtk_range_set_increments, vFpdd)
GO(gtk_range_set_inverted, vFpi)
GO(gtk_range_set_lower_stepper_sensitivity, vFpi)
GO(gtk_range_set_min_slider_size, vFpi)
GO(gtk_range_set_range, vFpdd)
GO(gtk_range_set_restrict_to_fill_level, vFpi)
GO(gtk_range_set_round_digits, vFpi)
GO(gtk_range_set_show_fill_level, vFpi)
GO(gtk_range_set_slider_size_fixed, vFpi)
GO(gtk_range_set_update_policy, vFpi)
GO(gtk_range_set_upper_stepper_sensitivity, vFpi)
GO(gtk_range_set_value, vFpd)
GO(gtk_rc_add_class_style, vFpp)
GO(gtk_rc_add_default_file, vFp)
GO(gtk_rc_add_widget_class_style, vFpp)
GO(gtk_rc_add_widget_name_style, vFpp)
GO(gtk_rc_find_module_in_path, pFp)
GO(gtk_rc_find_pixmap_in_path, pFppp)
GO(gtk_rc_flags_get_type, iFv)
GO(gtk_rc_get_default_files, pFv)
GO(gtk_rc_get_im_module_file, pFv)
GO(gtk_rc_get_im_module_path, pFv)
GO(gtk_rc_get_module_dir, pFv)
GO(gtk_rc_get_style, pFp)
GO(gtk_rc_get_style_by_paths, pFpppi)
GO(gtk_rc_get_theme_dir, pFv)
GO(gtk_rc_parse, vFp)
GO(gtk_rc_parse_color, uFpp)
GO(gtk_rc_parse_color_full, uFppp)
GO(gtk_rc_parse_priority, iFpp)
GO(gtk_rc_parse_state, uFpp)
GO(gtk_rc_parse_string, vFp)
GO(gtk_rc_property_parse_border, iFppp)
GO(gtk_rc_property_parse_color, iFppp)
GO(gtk_rc_property_parse_enum, iFppp)
GO(gtk_rc_property_parse_flags, iFppp)
GO(gtk_rc_property_parse_requisition, iFppp)
GO(gtk_rc_reparse_all, iFv)
GO(gtk_rc_reparse_all_for_settings, iFpi)
GO(gtk_rc_reset_styles, vFp)
GO(gtk_rc_scanner_new, pFv)
GO(gtk_rc_set_default_files, vFp)
GO(gtk_rc_style_copy, pFp)
GO(gtk_rc_style_get_type, iFv)
GO(gtk_rc_style_new, pFv)
GO(gtk_rc_style_ref, vFp)
GO(gtk_rc_style_unref, vFp)
GO(gtk_rc_token_type_get_type, iFv)
//GO(gtk_recent_action_get_show_numbers, 
GO(gtk_recent_action_get_type, iFv)
//GO(gtk_recent_action_new, 
//GO(gtk_recent_action_new_for_manager, 
//GO(gtk_recent_action_set_show_numbers, 
//GO(gtk_recent_chooser_add_filter, 
GO(gtk_recent_chooser_dialog_get_type, iFv)
//GO(gtk_recent_chooser_dialog_new, 
//GO(gtk_recent_chooser_dialog_new_for_manager, 
GO(gtk_recent_chooser_error_get_type, iFv)
//GO(gtk_recent_chooser_error_quark, 
//GO(gtk_recent_chooser_get_current_item, 
//GO(gtk_recent_chooser_get_current_uri, 
//GO(gtk_recent_chooser_get_filter, 
//GO(gtk_recent_chooser_get_items, 
//GO(gtk_recent_chooser_get_limit, 
//GO(gtk_recent_chooser_get_local_only, 
//GO(gtk_recent_chooser_get_select_multiple, 
//GO(gtk_recent_chooser_get_show_icons, 
//GO(gtk_recent_chooser_get_show_not_found, 
//GO(gtk_recent_chooser_get_show_numbers, 
//GO(gtk_recent_chooser_get_show_private, 
//GO(gtk_recent_chooser_get_show_tips, 
//GO(gtk_recent_chooser_get_sort_type, 
GO(gtk_recent_chooser_get_type, iFv)
//GO(gtk_recent_chooser_get_uris, 
//GO(gtk_recent_chooser_list_filters, 
//GO(gtk_recent_chooser_menu_get_show_numbers, 
GO(gtk_recent_chooser_menu_get_type, iFv)
//GO(gtk_recent_chooser_menu_new, 
//GO(gtk_recent_chooser_menu_new_for_manager, 
//GO(gtk_recent_chooser_menu_set_show_numbers, 
//GO(gtk_recent_chooser_remove_filter, 
//GO(gtk_recent_chooser_select_all, 
//GO(gtk_recent_chooser_select_uri, 
//GO(gtk_recent_chooser_set_current_uri, 
//GO(gtk_recent_chooser_set_filter, 
//GO(gtk_recent_chooser_set_limit, 
//GO(gtk_recent_chooser_set_local_only, 
//GO(gtk_recent_chooser_set_select_multiple, 
//GO(gtk_recent_chooser_set_show_icons, 
//GO(gtk_recent_chooser_set_show_not_found, 
//GO(gtk_recent_chooser_set_show_numbers, 
//GO(gtk_recent_chooser_set_show_private, 
//GO(gtk_recent_chooser_set_show_tips, 
//GO(gtk_recent_chooser_set_sort_func, 
//GO(gtk_recent_chooser_set_sort_type, 
//GO(gtk_recent_chooser_unselect_all, 
//GO(gtk_recent_chooser_unselect_uri, 
GO(gtk_recent_chooser_widget_get_type, iFv)
//GO(gtk_recent_chooser_widget_new, 
//GO(gtk_recent_chooser_widget_new_for_manager, 
//GO(gtk_recent_filter_add_age, 
//GO(gtk_recent_filter_add_application, 
//GO(gtk_recent_filter_add_custom, 
//GO(gtk_recent_filter_add_group, 
//GO(gtk_recent_filter_add_mime_type, 
//GO(gtk_recent_filter_add_pattern, 
//GO(gtk_recent_filter_add_pixbuf_formats, 
//GO(gtk_recent_filter_filter, 
GO(gtk_recent_filter_flags_get_type, iFv)
//GO(gtk_recent_filter_get_name, 
//GO(gtk_recent_filter_get_needed, 
GO(gtk_recent_filter_get_type, iFv)
//GO(gtk_recent_filter_new, 
//GO(gtk_recent_filter_set_name, 
//GO(gtk_recent_info_exists, 
//GO(gtk_recent_info_get_added, 
//GO(gtk_recent_info_get_age, 
//GO(gtk_recent_info_get_application_info, 
//GO(gtk_recent_info_get_applications, 
//GO(gtk_recent_info_get_description, 
//GO(gtk_recent_info_get_display_name, 
//GO(gtk_recent_info_get_groups, 
//GO(gtk_recent_info_get_icon, 
//GO(gtk_recent_info_get_mime_type, 
//GO(gtk_recent_info_get_modified, 
//GO(gtk_recent_info_get_private_hint, 
//GO(gtk_recent_info_get_short_name, 
GO(gtk_recent_info_get_type, iFv)
//GO(gtk_recent_info_get_uri, 
//GO(gtk_recent_info_get_uri_display, 
//GO(gtk_recent_info_get_visited, 
//GO(gtk_recent_info_has_application, 
//GO(gtk_recent_info_has_group, 
//GO(gtk_recent_info_is_local, 
//GO(gtk_recent_info_last_application, 
//GO(gtk_recent_info_match, 
//GO(gtk_recent_info_ref, 
//GO(gtk_recent_info_unref, 
//GO(gtk_recent_manager_add_full, 
//GO(gtk_recent_manager_add_item, 
GO(gtk_recent_manager_error_get_type, iFv)
//GO(gtk_recent_manager_error_quark, 
//GO(gtk_recent_manager_get_default, 
//GO(gtk_recent_manager_get_for_screen, 
//GO(gtk_recent_manager_get_items, 
//GO(gtk_recent_manager_get_limit, 
GO(gtk_recent_manager_get_type, iFv)
//GO(gtk_recent_manager_has_item, 
//GO(gtk_recent_manager_lookup_item, 
//GO(gtk_recent_manager_move_item, 
//GO(gtk_recent_manager_new, 
//GO(gtk_recent_manager_purge_items, 
//GO(gtk_recent_manager_remove_item, 
//GO(gtk_recent_manager_set_limit, 
//GO(gtk_recent_manager_set_screen, 
GO(gtk_recent_sort_type_get_type, iFv)
GO(gtk_relief_style_get_type, iFv)
GO(gtk_requisition_copy, pFp)
GO(gtk_requisition_free, vFp)
GO(gtk_requisition_get_type, iFv)
GO(gtk_resize_mode_get_type, iFv)
GO(gtk_response_type_get_type, iFv)
//GO(gtk_rgb_to_hsv, 
//GO(gtk_ruler_draw_pos, 
//GO(gtk_ruler_draw_ticks, 
//GO(gtk_ruler_get_metric, 
//GO(gtk_ruler_get_range, 
GO(gtk_ruler_get_type, iFv)
//GO(gtk_ruler_set_metric, 
//GO(gtk_ruler_set_range, 
//GO(gtk_scale_add_mark, 
//GO(gtk_scale_button_get_adjustment, 
//GO(gtk_scale_button_get_minus_button, 
//GO(gtk_scale_button_get_orientation, 
//GO(gtk_scale_button_get_plus_button, 
//GO(gtk_scale_button_get_popup, 
GO(gtk_scale_button_get_type, iFv)
//GO(gtk_scale_button_get_value, 
//GO(gtk_scale_button_new, 
//GO(gtk_scale_button_set_adjustment, 
//GO(gtk_scale_button_set_icons, 
//GO(gtk_scale_button_set_orientation, 
//GO(gtk_scale_button_set_value, 
//GO(gtk_scale_clear_marks, 
//GO(gtk_scale_get_digits, 
//GO(gtk_scale_get_draw_value, 
//GO(gtk_scale_get_layout, 
//GO(gtk_scale_get_layout_offsets, 
GO(gtk_scale_get_type, iFv)
//GO(gtk_scale_get_value_pos, 
//GO(gtk_scale_set_digits, 
//GO(gtk_scale_set_draw_value, 
//GO(gtk_scale_set_value_pos, 
GO(gtk_scrollbar_get_type, iFv)
//GO(gtk_scrolled_window_add_with_viewport, 
GO(gtk_scrolled_window_get_hadjustment, pFp)
GO(gtk_scrolled_window_get_hscrollbar, pFp)
GO(gtk_scrolled_window_get_placement, iFp)
GO(gtk_scrolled_window_get_policy, vFppp)
GO(gtk_scrolled_window_get_shadow_type, iFp)
GO(gtk_scrolled_window_get_type, iFv)
GO(gtk_scrolled_window_get_vadjustment, pFp)
GO(gtk_scrolled_window_get_vscrollbar, pFp)
GO(gtk_scrolled_window_new, pFpp)
GO(gtk_scrolled_window_set_hadjustment, vFpp)
GO(gtk_scrolled_window_set_placement, vFpi)
GO(gtk_scrolled_window_set_policy, vFpii)
GO(gtk_scrolled_window_set_shadow_type, vFpi)
GO(gtk_scrolled_window_set_vadjustment, vFpp)
GO(gtk_scrolled_window_unset_placement, vFp)
GO(gtk_scroll_step_get_type, iFv)
GO(gtk_scroll_type_get_type, iFv)
GO(gtk_selection_add_target, vFpppu)
GO(gtk_selection_add_targets, vFpppu)
GO(gtk_selection_clear, iFpp)
GO(gtk_selection_clear_targets, vFpp)
GO(gtk_selection_convert, iFpppu)
GO(gtk_selection_data_copy, pFp)
GO(gtk_selection_data_free, vFp)
GO(gtk_selection_data_get_data, pFp)
GO(gtk_selection_data_get_data_type, iFp)
GO(gtk_selection_data_get_display, pFp)
GO(gtk_selection_data_get_format, iFp)
GO(gtk_selection_data_get_length, iFp)
GO(gtk_selection_data_get_pixbuf, pFp)
GO(gtk_selection_data_get_selection, pFp)
GO(gtk_selection_data_get_target, pFp)
GO(gtk_selection_data_get_targets, iFppp)
GO(gtk_selection_data_get_text, pFp)
GO(gtk_selection_data_get_type, iFv)
GO(gtk_selection_data_get_uris, pFp)
GO(gtk_selection_data_set, vFppipi)
GO(gtk_selection_data_set_pixbuf, iFpp)
GO(gtk_selection_data_set_text, iFppi)
GO(gtk_selection_data_set_uris, iFpp)
GO(gtk_selection_data_targets_include_image, iFpi)
GO(gtk_selection_data_targets_include_rich_text, iFpp)
GO(gtk_selection_data_targets_include_text, iFp)
GO(gtk_selection_data_targets_include_uri, iFp)
GO(gtk_selection_mode_get_type, iFv)
GO(gtk_selection_owner_set, iFppu)
GO(gtk_selection_owner_set_for_display, iFpppu)
GO(gtk_selection_remove_all, vFp)
GO(gtk_sensitivity_type_get_type, iFv)
GO(gtk_separator_get_type, iFv)
GO(gtk_separator_menu_item_get_type, iFv)
GO(gtk_separator_menu_item_new, pFv)
//GO(gtk_separator_tool_item_get_draw, 
GO(gtk_separator_tool_item_get_type, iFv)
//GO(gtk_separator_tool_item_new, 
//GO(gtk_separator_tool_item_set_draw, 
GO(gtk_set_locale, pFv)
GO(gtk_settings_get_default, pFv)
GO(gtk_settings_get_for_screen, pFp)
GO(gtk_settings_get_type, iFv)
GO(gtk_settings_install_property, vFp)
//GOM(gtk_settings_install_property_parser, vFEpB)
GO(gtk_settings_set_double_property, vFppdp)
GO(gtk_settings_set_long_property, vFpplp)
GO(gtk_settings_set_property_value, vFppp)
GO(gtk_settings_set_string_property, vFpppp)
GO(gtk_shadow_type_get_type, iFv)
//GO(gtk_show_about_dialog, 
//GO(gtk_show_uri, 
GO(gtk_side_type_get_type, iFv)
//GO(gtk_signal_compat_matched, 
GOM(gtk_signal_connect_full, LFEppppppii)
//GO(gtk_signal_connect_object_while_alive, 
//GO(gtk_signal_connect_while_alive, 
//GO(gtk_signal_emit, 
//GO(gtk_signal_emit_by_name, 
//GO(gtk_signal_emit_stop_by_name, 
//GO(gtk_signal_emitv, 
//GO(gtk_signal_emitv_by_name, 
//GO(gtk_signal_new, 
//GO(gtk_signal_newv, 
GO(gtk_signal_run_type_get_type, iFv)
//GO(gtk_size_group_add_widget, 
//GO(gtk_size_group_get_ignore_hidden, 
//GO(gtk_size_group_get_mode, 
GO(gtk_size_group_get_type, iFv)
//GO(gtk_size_group_get_widgets, 
GO(gtk_size_group_mode_get_type, iFv)
//GO(gtk_size_group_new, 
//GO(gtk_size_group_remove_widget, 
//GO(gtk_size_group_set_ignore_hidden, 
//GO(gtk_size_group_set_mode, 
GO(gtk_socket_add_id, vFpp)
GO(gtk_socket_get_id, pFp)
GO(gtk_socket_get_plug_window, pFp)
GO(gtk_socket_get_type, iFv)
GO(gtk_socket_new, pFv)
GO(gtk_socket_steal, vFpp)
GO(gtk_sort_type_get_type, iFv)
GO(gtk_spin_button_configure, vFppdu)
GO(gtk_spin_button_get_adjustment, pFp)
GO(gtk_spin_button_get_digits, uFp)
GO(gtk_spin_button_get_increments, vFppp)
GO(gtk_spin_button_get_numeric, iFp)
GO(gtk_spin_button_get_range, vFppp)
GO(gtk_spin_button_get_snap_to_ticks, iFp)
GO(gtk_spin_button_get_type, iFv)
GO(gtk_spin_button_get_update_policy, iFp)
GO(gtk_spin_button_get_value, dFp)
GO(gtk_spin_button_get_value_as_int, iFp)
GO(gtk_spin_button_get_wrap, iFp)
GO(gtk_spin_button_new, pFpdu)
GO(gtk_spin_button_new_with_range, pFddd)
GO(gtk_spin_button_set_adjustment, vFpp)
GO(gtk_spin_button_set_digits, vFpu)
GO(gtk_spin_button_set_increments, vFpdd)
GO(gtk_spin_button_set_numeric, vFpi)
GO(gtk_spin_button_set_range, vFpdd)
GO(gtk_spin_button_set_snap_to_ticks, vFpi)
GO(gtk_spin_button_set_update_policy, vFpi)
GO(gtk_spin_button_set_value, vFpd)
GO(gtk_spin_button_set_wrap, vFpi)
GO(gtk_spin_button_spin, vFpid)
GO(gtk_spin_button_update, vFp)
GO(gtk_spin_button_update_policy_get_type, iFv)
GO(gtk_spinner_get_type, iFv)
GO(gtk_spinner_new, pFv)
GO(gtk_spinner_start, vFp)
GO(gtk_spinner_stop, vFp)
GO(gtk_spin_type_get_type, iFv)
GO(gtk_state_type_get_type, iFv)
//GO(gtk_statusbar_get_context_id, 
//GO(gtk_statusbar_get_has_resize_grip, 
//GO(gtk_statusbar_get_message_area, 
GO(gtk_statusbar_get_type, iFv)
//GO(gtk_statusbar_new, 
//GO(gtk_statusbar_pop, 
//GO(gtk_statusbar_push, 
//GO(gtk_statusbar_remove, 
//GO(gtk_statusbar_remove_all, 
//GO(gtk_statusbar_set_has_resize_grip, 
GO(gtk_status_icon_get_blinking, iFp)
GO(gtk_status_icon_get_geometry, iFpppp)
GO(gtk_status_icon_get_gicon, pFp)
GO(gtk_status_icon_get_has_tooltip, iFp)
GO(gtk_status_icon_get_icon_name, pFp)
GO(gtk_status_icon_get_pixbuf, pFp)
GO(gtk_status_icon_get_screen, pFp)
GO(gtk_status_icon_get_size, iFp)
GO(gtk_status_icon_get_stock, pFp)
GO(gtk_status_icon_get_storage_type, iFp)
GO(gtk_status_icon_get_title, pFp)
GO(gtk_status_icon_get_tooltip_markup, pFp)
GO(gtk_status_icon_get_tooltip_text, pFp)
GO(gtk_status_icon_get_type, iFv)
GO(gtk_status_icon_get_visible, iFp)
GO(gtk_status_icon_get_x11_window_id, uFp)
GO(gtk_status_icon_is_embedded, iFp)
GO(gtk_status_icon_new, pFv)
GO(gtk_status_icon_new_from_file, pFp)
GO(gtk_status_icon_new_from_gicon, pFp)
GO(gtk_status_icon_new_from_icon_name, pFp)
GO(gtk_status_icon_new_from_pixbuf, pFp)
GO(gtk_status_icon_new_from_stock, pFp)
GO(gtk_status_icon_position_menu, vFppppp)
GO(gtk_status_icon_set_blinking, vFpi)
GO(gtk_status_icon_set_from_file, vFpp)
GO(gtk_status_icon_set_from_gicon, vFpp)
GO(gtk_status_icon_set_from_icon_name, vFpp)
GO(gtk_status_icon_set_from_pixbuf, vFpp)
GO(gtk_status_icon_set_from_stock, vFpp)
GO(gtk_status_icon_set_has_tooltip, vFpi)
GO(gtk_status_icon_set_name, vFpp)
GO(gtk_status_icon_set_screen, vFpp)
GO(gtk_status_icon_set_title, vFpp)
GO(gtk_status_icon_set_tooltip, vFpp)
GO(gtk_status_icon_set_tooltip_markup, vFpp)
GO(gtk_status_icon_set_tooltip_text, vFpp)
GO(gtk_status_icon_set_visible, vFpi)
GO(gtk_stock_add, vFpu)
GO(gtk_stock_add_static, vFpu)
GO(gtk_stock_item_copy, pFp)
GO(gtk_stock_item_free, vFp)
GO(gtk_stock_list_ids, pFv)
GO(gtk_stock_lookup, iFpp)
GOM(gtk_stock_set_translate_func, vFEpppp)
GO(gtk_style_apply_default_background, vFppiipiiii)
GO(gtk_style_attach, pFpp)
GO(gtk_style_copy, pFp)
GO(gtk_style_detach, vFp)
GO(gtk_style_get, vFpippppppppppp)  //vaarg, wrap with gtk_style_get_valist?
GO(gtk_style_get_font, pFp)
GO(gtk_style_get_style_property, vFpipp)
GO(gtk_style_get_type, iFv)
GO(gtk_style_get_valist, vFpipp)    
GO(gtk_style_lookup_color, iFppp)
GO(gtk_style_lookup_icon_set, pFpp)
GO(gtk_style_new, pFv)
GO(gtk_style_ref, pFp)
GO(gtk_style_render_icon, pFppiiipp)
GO(gtk_style_set_background, vFppi)
GO(gtk_style_set_font, vFpp)
GO(gtk_style_unref, vFp)
GO(gtk_submenu_direction_get_type, iFv)
GO(gtk_submenu_placement_get_type, iFv)
GO(gtk_table_attach, vFppuuuuiiuu)
GO(gtk_table_attach_defaults, vFppuuuu)
GO(gtk_table_get_col_spacing, uFpu)
GO(gtk_table_get_default_col_spacing, uFp)
GO(gtk_table_get_default_row_spacing, uFp)
GO(gtk_table_get_homogeneous, iFp)
GO(gtk_table_get_row_spacing, uFpu)
GO(gtk_table_get_size, vFppp)
GO(gtk_table_get_type, iFv)
GO(gtk_table_new, pFuui)
GO(gtk_table_resize, vFpuu)
GO(gtk_table_set_col_spacing, vFpuu)
GO(gtk_table_set_col_spacings, vFpu)
GO(gtk_table_set_homogeneous, vFpi)
GO(gtk_table_set_row_spacing, vFpuu)
GO(gtk_table_set_row_spacings, vFpu)
GO(gtk_target_flags_get_type, iFv)
GO(gtk_target_list_add, vFppuu)
GO(gtk_target_list_add_image_targets, vFpui)
GO(gtk_target_list_add_rich_text_targets, vFpuip)
GO(gtk_target_list_add_table, vFppu)
GO(gtk_target_list_add_text_targets, vFpu)
GO(gtk_target_list_add_uri_targets, vFpu)
GO(gtk_target_list_find, iFppp)
GO(gtk_target_list_get_type, iFv)
GO(gtk_target_list_new, pFpu)
GO(gtk_target_list_ref, pFp)
GO(gtk_target_list_remove, iFppp)
GO(gtk_target_list_unref, vFp)
GO(gtk_targets_include_image, iFpii)
GO(gtk_targets_include_rich_text, iFpip)
GO(gtk_targets_include_text, iFpi)
GO(gtk_targets_include_uri, iFpi)
GO(gtk_target_table_free, vFpi)
GO(gtk_target_table_new_from_list, pFpp)
GO(gtk_tearoff_menu_item_get_type, iFv)
GO(gtk_tearoff_menu_item_new, pFv)
//GO(gtk_test_create_simple_window, 
//GO(gtk_test_create_widget, 
//GO(gtk_test_display_button_window, 
//GO(gtk_test_find_label, 
//GO(gtk_test_find_sibling, 
//GO(gtk_test_find_widget, 
//GO(gtk_test_init, 
//GO(gtk_test_list_all_types, 
//GO(gtk_test_register_all_types, 
//GO(gtk_test_slider_get_value, 
//GO(gtk_test_slider_set_perc, 
//GO(gtk_test_spin_button_click, 
//GO(gtk_test_text_get, 
//GO(gtk_test_text_set, 
//GO(gtk_test_widget_click, 
//GO(gtk_test_widget_send_key, 
GO(gtk_text_anchored_child_set_layout, vFpp)
GO(gtk_text_attributes_copy, pFp)
GO(gtk_text_attributes_copy_values, vFpp)
GO(gtk_text_attributes_get_type, iFv)
GO(gtk_text_attributes_new, pFv)
GO(gtk_text_attributes_ref, pFp)
GO(gtk_text_attributes_unref, vFp)
GO(gtk_text_backward_delete, iFpu)
GO(gtk_text_buffer_add_mark, vFpp)
GO(gtk_text_buffer_add_selection_clipboard, vFpp)
GO(gtk_text_buffer_apply_tag, vFpppp)
GO(gtk_text_buffer_apply_tag_by_name, vFpp)
GO(gtk_text_buffer_backspace, iFppii)
GO(gtk_text_buffer_begin_user_action, vFp)
GO(gtk_text_buffer_copy_clipboard, vFpp)
GO(gtk_text_buffer_create_child_anchor, pFpp)
GO(gtk_text_buffer_create_mark, pFpppi)
GO(gtk_text_buffer_create_tag, pFppppppppppppppp) //vaarg after 3 p
GO(gtk_text_buffer_cut_clipboard, vFppi)
GO(gtk_text_buffer_delete, vFppp)
GO(gtk_text_buffer_delete_interactive, iFpppi)
GO(gtk_text_buffer_delete_mark, vFpp)
GO(gtk_text_buffer_delete_mark_by_name, vFpp)
GO(gtk_text_buffer_delete_selection, iFpii)
GO(gtk_text_buffer_deserialize, iFpppppup)
GO(gtk_text_buffer_deserialize_get_can_create_tags, iFpp)
GO(gtk_text_buffer_deserialize_set_can_create_tags, vFppi)
GO(gtk_text_buffer_end_user_action, vFp)
GO(gtk_text_buffer_get_bounds, vFppp)
GO(gtk_text_buffer_get_char_count, iFp)
GO(gtk_text_buffer_get_copy_target_list, pFp)
GO(gtk_text_buffer_get_deserialize_formats, pFpp)
GO(gtk_text_buffer_get_end_iter, vFpp)
GO(gtk_text_buffer_get_has_selection, iFp)
GO(gtk_text_buffer_get_insert, pFp)
GO(gtk_text_buffer_get_iter_at_child_anchor, vFppp)
GO(gtk_text_buffer_get_iter_at_line, vFppi)
GO(gtk_text_buffer_get_iter_at_line_index, vFppii)
GO(gtk_text_buffer_get_iter_at_line_offset, vFppii)
GO(gtk_text_buffer_get_iter_at_mark, vFppp)
GO(gtk_text_buffer_get_iter_at_offset, vFppi)
GO(gtk_text_buffer_get_line_count, iFp)
GO(gtk_text_buffer_get_mark, pFpp)
GO(gtk_text_buffer_get_modified, iFp)
GO(gtk_text_buffer_get_paste_target_list, pFp)
GO(gtk_text_buffer_get_selection_bound, pFp)
GO(gtk_text_buffer_get_selection_bounds, iFppp)
GO(gtk_text_buffer_get_serialize_formats, pFpp)
GO(gtk_text_buffer_get_slice, pFpppi)
GO(gtk_text_buffer_get_start_iter, vFpp)
GO(gtk_text_buffer_get_tag_table, pFp)
GO(gtk_text_buffer_get_text, pFpppi)
GO(gtk_text_buffer_get_type, iFv)
GO(gtk_text_buffer_insert, vFpppi)
GO(gtk_text_buffer_insert_at_cursor, vFppi)
GO(gtk_text_buffer_insert_child_anchor, vFppp)
GO(gtk_text_buffer_insert_interactive, iFpppii)
GO(gtk_text_buffer_insert_interactive_at_cursor, iFppii)
GO(gtk_text_buffer_insert_pixbuf, vFppp)
GO(gtk_text_buffer_insert_range, vFpppp)
GO(gtk_text_buffer_insert_range_interactive, iFppppi)
GO(gtk_text_buffer_insert_with_tags, vFpppipppppppppppppp)
GO(gtk_text_buffer_insert_with_tags_by_name, vFpppippppppppppp)
GO(gtk_text_buffer_move_mark, vFppp)
GO(gtk_text_buffer_move_mark_by_name, vFppp)
GO(gtk_text_buffer_new, pFp)
GO(gtk_text_buffer_paste_clipboard, vFpppi)
GO(gtk_text_buffer_place_cursor, vFpp)
//GOM(gtk_text_buffer_register_deserialize_format, pFEppBpB)
GO(gtk_text_buffer_register_deserialize_tagset, pFpp)
//GOM(gtk_text_buffer_register_serialize_format, pFppBpB)
GO(gtk_text_buffer_register_serialize_tagset, pFpp)
GO(gtk_text_buffer_remove_all_tags, vFppp)
GO(gtk_text_buffer_remove_selection_clipboard, vFpp)
GO(gtk_text_buffer_remove_tag, vFpppp)
GO(gtk_text_buffer_remove_tag_by_name, vFpppp)
GO(gtk_text_buffer_select_range, vFppp)
GO(gtk_text_buffer_serialize, pFpppppp)
GO(gtk_text_buffer_set_modified, vFpi)
GO(gtk_text_buffer_set_text, vFppi)
GO(gtk_text_buffer_target_info_get_type, iFv)
GO(gtk_text_buffer_unregister_deserialize_format, vFpp)
GO(gtk_text_buffer_unregister_serialize_format, vFpp)
GO(gtk_text_byte_begins_utf8_char, iFp)
GO(gtk_text_child_anchor_get_deleted, iFp)
GO(gtk_text_child_anchor_get_type, iFv)
GO(gtk_text_child_anchor_get_widgets, pFp)
GO(gtk_text_child_anchor_new, pFv)
GO(gtk_text_child_anchor_queue_resize, vFpp)
GO(gtk_text_child_anchor_register_child, vFppp)
GO(gtk_text_child_anchor_unregister_child, vFpp)
GO(gtk_text_direction_get_type, iFv)
GO(gtk_text_forward_delete, iFpu)
GO(gtk_text_freeze, vFp)
GO(gtk_text_get_length, uFp)
GO(gtk_text_get_point, uFp)
GO(gtk_text_get_type, iFv)
GO(gtk_text_insert, vFpppppi)
GO(gtk_text_iter_backward_char, iFp)
GO(gtk_text_iter_backward_chars, iFpi)
GO(gtk_text_iter_backward_cursor_position, iFp)
GO(gtk_text_iter_backward_cursor_positions, iFpi)
GOM(gtk_text_iter_backward_find_char, iFEpppp)
GO(gtk_text_iter_backward_line, iFp)
GO(gtk_text_iter_backward_lines, iFpi)
GO(gtk_text_iter_backward_search, iFppuppp)
GO(gtk_text_iter_backward_sentence_start, iFp)
GO(gtk_text_iter_backward_sentence_starts, iFpi)
GO(gtk_text_iter_backward_to_tag_toggle, iFpp)
GO(gtk_text_iter_backward_visible_cursor_position, iFp)
GO(gtk_text_iter_backward_visible_cursor_positions, iFpi)
GO(gtk_text_iter_backward_visible_line, iFp)
GO(gtk_text_iter_backward_visible_lines, iFpi)
GO(gtk_text_iter_backward_visible_word_start, iFp)
GO(gtk_text_iter_backward_visible_word_starts, iFpi)
GO(gtk_text_iter_backward_word_start, iFp)
GO(gtk_text_iter_backward_word_starts, iFpi)
GO(gtk_text_iter_begins_tag, iFpp)
GO(gtk_text_iter_can_insert, iFpi)
GO(gtk_text_iter_compare, iFpp)
GO(gtk_text_iter_copy, pFp)
GO(gtk_text_iter_editable, iFpi)
GO(gtk_text_iter_ends_line, iFp)
GO(gtk_text_iter_ends_sentence, iFp)
GO(gtk_text_iter_ends_tag, iFpp)
GO(gtk_text_iter_ends_word, iFp)
GO(gtk_text_iter_equal, iFpp)
GO(gtk_text_iter_forward_char, iFp)
GO(gtk_text_iter_forward_chars, iFpi)
GO(gtk_text_iter_forward_cursor_position, iFp)
GO(gtk_text_iter_forward_cursor_positions, iFpi)
GOM(gtk_text_iter_forward_find_char, iFEpppp)
GO(gtk_text_iter_forward_line, iFp)
GO(gtk_text_iter_forward_lines, iFpi)
GO(gtk_text_iter_forward_search, iFppuppp)
GO(gtk_text_iter_forward_sentence_end, iFp)
GO(gtk_text_iter_forward_sentence_ends, iFpi)
GO(gtk_text_iter_forward_to_end, iFp)
GO(gtk_text_iter_forward_to_line_end, iFp)
GO(gtk_text_iter_forward_to_tag_toggle, iFpp)
GO(gtk_text_iter_forward_visible_cursor_position, iFp)
GO(gtk_text_iter_forward_visible_cursor_positions, iFpi)
GO(gtk_text_iter_forward_visible_line, iFp)
GO(gtk_text_iter_forward_visible_lines, iFpi)
GO(gtk_text_iter_forward_visible_word_end, iFp)
GO(gtk_text_iter_forward_visible_word_ends, iFpi)
GO(gtk_text_iter_forward_word_end, iFp)
GO(gtk_text_iter_forward_word_ends, iFpi)
GO(gtk_text_iter_free, vFp)
GO(gtk_text_iter_get_attributes, iFpp)
GO(gtk_text_iter_get_buffer, pFp)
GO(gtk_text_iter_get_bytes_in_line, iFp)
GO(gtk_text_iter_get_char, uFp)
GO(gtk_text_iter_get_chars_in_line, iFp)
GO(gtk_text_iter_get_child_anchor, pFp)
GO(gtk_text_iter_get_language, pFp)
GO(gtk_text_iter_get_line, iFp)
GO(gtk_text_iter_get_line_index, iFp)
GO(gtk_text_iter_get_line_offset, iFp)
GO(gtk_text_iter_get_marks, pFp)
GO(gtk_text_iter_get_offset, iFp)
GO(gtk_text_iter_get_pixbuf, pFp)
GO(gtk_text_iter_get_slice, pFpp)
GO(gtk_text_iter_get_tags, pFp)
GO(gtk_text_iter_get_text, pFpp)
GO(gtk_text_iter_get_toggled_tags, pFpi)
GO(gtk_text_iter_get_type, iFv)
GO(gtk_text_iter_get_visible_line_index, iFp)
GO(gtk_text_iter_get_visible_line_offset, iFp)
GO(gtk_text_iter_get_visible_slice, pFpp)
GO(gtk_text_iter_get_visible_text, pFpp)
GO(gtk_text_iter_has_tag, iFpp)
GO(gtk_text_iter_in_range, iFppp)
GO(gtk_text_iter_inside_sentence, iFp)
GO(gtk_text_iter_inside_word, iFp)
GO(gtk_text_iter_is_cursor_position, iFp)
GO(gtk_text_iter_is_end, iFp)
GO(gtk_text_iter_is_start, iFp)
GO(gtk_text_iter_order, vFpp)
GO(gtk_text_iter_set_line, vFpi)
GO(gtk_text_iter_set_line_index, vFpi)
GO(gtk_text_iter_set_line_offset, vFpi)
GO(gtk_text_iter_set_offset, vFpi)
GO(gtk_text_iter_set_visible_line_index, vFpi)
GO(gtk_text_iter_set_visible_line_offset, vFpi)
GO(gtk_text_iter_starts_line, iFp)
GO(gtk_text_iter_starts_sentence, iFp)
GO(gtk_text_iter_starts_word, iFp)
GO(gtk_text_iter_toggles_tag, iFpp)
//GO(gtk_text_layout_changed, 
//GO(gtk_text_layout_clamp_iter_to_vrange, 
//GO(gtk_text_layout_cursors_changed, 
//GO(gtk_text_layout_default_style_changed, 
//GO(gtk_text_layout_draw, 
//GO(gtk_text_layout_free_line_data, 
//GO(gtk_text_layout_free_line_display, 
//GO(gtk_text_layout_get_buffer, 
//GO(gtk_text_layout_get_cursor_locations, 
//GO(gtk_text_layout_get_cursor_visible, 
//GO(gtk_text_layout_get_iter_at_line, 
//GO(gtk_text_layout_get_iter_at_pixel, 
//GO(gtk_text_layout_get_iter_at_position, 
//GO(gtk_text_layout_get_iter_location, 
//GO(gtk_text_layout_get_line_at_y, 
//GO(gtk_text_layout_get_line_display, 
//GO(gtk_text_layout_get_lines, 
//GO(gtk_text_layout_get_line_yrange, 
//GO(gtk_text_layout_get_size, 
GO(gtk_text_layout_get_type, iFv)
//GO(gtk_text_layout_invalidate, 
//GO(gtk_text_layout_invalidate_cursors, 
//GO(gtk_text_layout_is_valid, 
//GO(gtk_text_layout_iter_starts_line, 
//GO(gtk_text_layout_move_iter_to_line_end, 
//GO(gtk_text_layout_move_iter_to_next_line, 
//GO(gtk_text_layout_move_iter_to_previous_line, 
//GO(gtk_text_layout_move_iter_to_x, 
//GO(gtk_text_layout_move_iter_visually, 
//GO(gtk_text_layout_new, 
//GO(gtk_text_layout_set_buffer, 
//GO(gtk_text_layout_set_contexts, 
//GO(gtk_text_layout_set_cursor_direction, 
//GO(gtk_text_layout_set_cursor_visible, 
//GO(gtk_text_layout_set_default_style, 
//GO(gtk_text_layout_set_keyboard_direction, 
//GO(gtk_text_layout_set_overwrite_mode, 
//GO(gtk_text_layout_set_preedit_string, 
//GO(gtk_text_layout_set_screen_width, 
//GO(gtk_text_layout_spew, 
//GO(gtk_text_layout_validate, 
//GO(gtk_text_layout_validate_yrange, 
//GO(gtk_text_layout_wrap, 
//GO(gtk_text_layout_wrap_loop_end, 
//GO(gtk_text_layout_wrap_loop_start, 
//GO(gtk_text_line_segment_split, 
GO(gtk_text_mark_get_buffer, pFp)
GO(gtk_text_mark_get_deleted, iFp)
GO(gtk_text_mark_get_left_gravity, iFp)
GO(gtk_text_mark_get_name, pFp)
GO(gtk_text_mark_get_type, iFv)
GO(gtk_text_mark_get_visible, iFp)
GO(gtk_text_mark_new, pFpi)
GO(gtk_text_mark_set_visible, vFpi)
GO(gtk_text_new, pFpp)
GO(gtk_text_search_flags_get_type, iFv)
GO(gtk_text_set_adjustments, vFppp)
GO(gtk_text_set_editable, vFpi)
GO(gtk_text_set_line_wrap, vFpi)
GO(gtk_text_set_point, vFpu)
GO(gtk_text_set_word_wrap, vFpi)
GO(gtk_text_tag_event, iFpppp)
GO(gtk_text_tag_get_priority, iFp)
GO(gtk_text_tag_get_type, iFv)
GO(gtk_text_tag_new, pFp)
GO(gtk_text_tag_set_priority, vFpi)
GO(gtk_text_tag_table_add, vFpp)
//GOM(gtk_text_tag_table_foreach, vFEpBp)
GO(gtk_text_tag_table_get_size, iFp)
GO(gtk_text_tag_table_get_type, iFv)
GO(gtk_text_tag_table_lookup, pFpp)
GO(gtk_text_tag_table_new, pFv)
GO(gtk_text_tag_table_remove, vFpp)
GO(gtk_text_thaw, vFp)
GO(gtk_text_view_add_child_at_anchor, vFppp)
GO(gtk_text_view_add_child_in_window, vFppiii)
GO(gtk_text_view_backward_display_line, iFpp)
GO(gtk_text_view_backward_display_line_start, iFpp)
GO(gtk_text_view_buffer_to_window_coords, vFpiiipp)
GO(gtk_text_view_forward_display_line, iFpp)
GO(gtk_text_view_forward_display_line_end, iFpp)
GO(gtk_text_view_get_accepts_tab, iFp)
GO(gtk_text_view_get_border_window_size, iFpi)
GO(gtk_text_view_get_buffer, pFp)
GO(gtk_text_view_get_cursor_visible, iFp)
GO(gtk_text_view_get_default_attributes, pFp)
GO(gtk_text_view_get_editable, iFp)
GO(gtk_text_view_get_hadjustment, pFp)
GO(gtk_text_view_get_indent, iFp)
GO(gtk_text_view_get_iter_at_location, vFppii)
GO(gtk_text_view_get_iter_at_position, vFpppii)
GO(gtk_text_view_get_iter_location, vFppp)
GO(gtk_text_view_get_justification, iFp)
GO(gtk_text_view_get_left_margin, iFp)
GO(gtk_text_view_get_line_at_y, vFppip)
GO(gtk_text_view_get_line_yrange, vFpppp)
GO(gtk_text_view_get_overwrite, iFp)
GO(gtk_text_view_get_pixels_above_lines, iFp)
GO(gtk_text_view_get_pixels_below_lines, iFp)
GO(gtk_text_view_get_pixels_inside_wrap, iFp)
GO(gtk_text_view_get_right_margin, iFp)
GO(gtk_text_view_get_tabs, pFp)
GO(gtk_text_view_get_type, iFv)
GO(gtk_text_view_get_vadjustment, pFp)
GO(gtk_text_view_get_visible_rect, vFpp)
GO(gtk_text_view_get_window, pFpi)
GO(gtk_text_view_get_window_type, iFpp)
GO(gtk_text_view_get_wrap_mode, iFp)
GO(gtk_text_view_im_context_filter_keypress, iFpp)
GO(gtk_text_view_move_child, vFppii)
GO(gtk_text_view_move_mark_onscreen, iFpp)
GO(gtk_text_view_move_visually, iFppi)
GO(gtk_text_view_new, pFv)
GO(gtk_text_view_new_with_buffer, pFp)
GO(gtk_text_view_place_cursor_onscreen, iFp)
GO(gtk_text_view_reset_im_context, vFp)
GO(gtk_text_view_scroll_mark_onscreen, vFpp)
GO(gtk_text_view_scroll_to_iter, iFppdidd)
GO(gtk_text_view_scroll_to_mark, vFppdidd)
GO(gtk_text_view_set_accepts_tab, vFpi)
GO(gtk_text_view_set_border_window_size, vFpii)
GO(gtk_text_view_set_buffer, vFpp)
GO(gtk_text_view_set_cursor_visible, vFpi)
GO(gtk_text_view_set_editable, vFpi)
GO(gtk_text_view_set_indent, vFpi)
GO(gtk_text_view_set_justification, vFpi)
GO(gtk_text_view_set_left_margin, vFpi)
GO(gtk_text_view_set_overwrite, vFpi)
GO(gtk_text_view_set_pixels_above_lines, vFpi)
GO(gtk_text_view_set_pixels_below_lines, vFpi)
GO(gtk_text_view_set_pixels_inside_wrap, vFpi)
GO(gtk_text_view_set_right_margin, vFpi)
GO(gtk_text_view_set_tabs, vFpp)
GO(gtk_text_view_set_wrap_mode, vFpi)
GO(gtk_text_view_starts_display_line, iFpp)
GO(gtk_text_view_window_to_buffer_coords, vFpiiipp)
GO(gtk_text_window_type_get_type, iFv)
//GO(gtk_theme_engine_create_rc_style, 
//GO(gtk_theme_engine_get, 
GO(gtk_theme_engine_get_type, iFv)
GOM(gtk_timeout_add, uFEupp)
//GOM(gtk_timeout_add_full, uFuBppB)
GO(gtk_timeout_remove, vFu)
GO(gtk_tips_query_get_type, iFv)
//GO(gtk_tips_query_new, 
//GO(gtk_tips_query_set_caller, 
//GO(gtk_tips_query_set_labels, 
//GO(gtk_tips_query_start_query, 
//GO(gtk_tips_query_stop_query, 
//GO(gtk_toggle_action_get_active, 
//GO(gtk_toggle_action_get_draw_as_radio, 
GO(gtk_toggle_action_get_type, iFv)
//GO(gtk_toggle_action_new, 
//GO(gtk_toggle_action_set_active, 
//GO(gtk_toggle_action_set_draw_as_radio, 
//GO(gtk_toggle_action_toggled, 
GO(gtk_toggle_button_get_active, iFp)
GO(gtk_toggle_button_get_inconsistent, iFp)
GO(gtk_toggle_button_get_mode, iFp)
GO(gtk_toggle_button_get_type, iFv)
GO(gtk_toggle_button_new, pFv)
GO(gtk_toggle_button_new_with_label, pFp)
GO(gtk_toggle_button_new_with_mnemonic, pFp)
GO(gtk_toggle_button_set_active, vFpi)
GO(gtk_toggle_button_set_inconsistent, vFpi)
GO(gtk_toggle_button_set_mode, vFpi)
GO(gtk_toggle_button_toggled, vFp)
GO(gtk_toggle_tool_button_get_active, iFp)
GO(gtk_toggle_tool_button_get_type, iFv)
GO(gtk_toggle_tool_button_new, pFv)
GO(gtk_toggle_tool_button_new_from_stock, pFp)
GO(gtk_toggle_tool_button_set_active, vFpi)
GOM(gtk_toolbar_append_element, pFEpippppppp)
GOM(gtk_toolbar_append_item, pFEppppppp)
GO(gtk_toolbar_append_space, vFp)
GO(gtk_toolbar_append_widget, vFpppp)
GO(gtk_toolbar_child_type_get_type, iFv)
GO(gtk_toolbar_get_drop_index, iFpii)
GO(gtk_toolbar_get_icon_size, iFp)
GO(gtk_toolbar_get_item_index, iFpp)
GO(gtk_toolbar_get_n_items, iFp)
GO(gtk_toolbar_get_nth_item, pFpi)
GO(gtk_toolbar_get_orientation, iFp)
GO(gtk_toolbar_get_relief_style, iFp)
GO(gtk_toolbar_get_show_arrow, iFp)
GO(gtk_toolbar_get_style, iFp)
GO(gtk_toolbar_get_tooltips, iFp)
GO(gtk_toolbar_get_type, iFv)
GO(gtk_toolbar_insert, vFppi)
GOM(gtk_toolbar_insert_element, pFEpipppppppi)
GOM(gtk_toolbar_insert_item, pFEpppppppi)
GO(gtk_toolbar_insert_space, vFpi)
GOM(gtk_toolbar_insert_stock, pFEppppppi)
GO(gtk_toolbar_insert_widget, vFppppi)
GO(gtk_toolbar_new, pFv)
GOM(gtk_toolbar_prepend_element, pFEpippppppp)
GOM(gtk_toolbar_prepend_item, pFEppppppp)
GO(gtk_toolbar_prepend_space, vFp)
GO(gtk_toolbar_prepend_widget, vFpppp)
GO(gtk_toolbar_remove_space, vFpi)
GO(gtk_toolbar_set_drop_highlight_item, vFppi)
GO(gtk_toolbar_set_icon_size, vFpi)
GO(gtk_toolbar_set_orientation, vFpi)
GO(gtk_toolbar_set_show_arrow, vFpi)
GO(gtk_toolbar_set_style, vFpi)
GO(gtk_toolbar_set_tooltips, vFpi)
GO(gtk_toolbar_space_style_get_type, iFv)
GO(gtk_toolbar_style_get_type, iFv)
GO(gtk_toolbar_unset_icon_size, vFp)
GO(gtk_toolbar_unset_style, vFp)
GO(gtk_tool_button_get_icon_name, pFp)
GO(gtk_tool_button_get_icon_widget, pFp)
GO(gtk_tool_button_get_label, pFp)
GO(gtk_tool_button_get_label_widget, pFp)
GO(gtk_tool_button_get_stock_id, pFp)
GO(gtk_tool_button_get_type, iFv)
GO(gtk_tool_button_get_use_underline, iFp)
GO(gtk_tool_button_new, pFpp)
GO(gtk_tool_button_new_from_stock, pFp)
GO(gtk_tool_button_set_icon_name, vFpp)
GO(gtk_tool_button_set_icon_widget, vFpp)
GO(gtk_tool_button_set_label, vFpp)
GO(gtk_tool_button_set_label_widget, vFpp)
GO(gtk_tool_button_set_stock_id, vFpp)
GO(gtk_tool_button_set_use_underline, vFpi)
//GO(gtk_tool_item_get_ellipsize_mode, 
//GO(gtk_tool_item_get_expand, 
//GO(gtk_tool_item_get_homogeneous, 
//GO(gtk_tool_item_get_icon_size, 
//GO(gtk_tool_item_get_is_important, 
//GO(gtk_tool_item_get_orientation, 
//GO(gtk_tool_item_get_proxy_menu_item, 
//GO(gtk_tool_item_get_relief_style, 
//GO(gtk_tool_item_get_text_alignment, 
//GO(gtk_tool_item_get_text_orientation, 
//GO(gtk_tool_item_get_text_size_group, 
//GO(gtk_tool_item_get_toolbar_style, 
GO(gtk_tool_item_get_type, iFv)
//GO(gtk_tool_item_get_use_drag_window, 
//GO(gtk_tool_item_get_visible_horizontal, 
//GO(gtk_tool_item_get_visible_vertical, 
//GO(gtk_tool_item_group_get_collapsed, 
//GO(gtk_tool_item_group_get_drop_item, 
//GO(gtk_tool_item_group_get_ellipsize, 
//GO(gtk_tool_item_group_get_header_relief, 
//GO(gtk_tool_item_group_get_item_position, 
//GO(gtk_tool_item_group_get_label, 
//GO(gtk_tool_item_group_get_label_widget, 
//GO(gtk_tool_item_group_get_n_items, 
//GO(gtk_tool_item_group_get_nth_item, 
GO(gtk_tool_item_group_get_type, iFv)
//GO(gtk_tool_item_group_insert, 
//GO(gtk_tool_item_group_new, 
//GO(gtk_tool_item_group_set_collapsed, 
//GO(gtk_tool_item_group_set_ellipsize, 
//GO(gtk_tool_item_group_set_header_relief, 
//GO(gtk_tool_item_group_set_item_position, 
//GO(gtk_tool_item_group_set_label, 
//GO(gtk_tool_item_group_set_label_widget, 
//GO(gtk_tool_item_new, 
//GO(gtk_tool_item_rebuild_menu, 
//GO(gtk_tool_item_retrieve_proxy_menu_item, 
//GO(gtk_tool_item_set_expand, 
//GO(gtk_tool_item_set_homogeneous, 
//GO(gtk_tool_item_set_is_important, 
//GO(gtk_tool_item_set_proxy_menu_item, 
//GO(gtk_tool_item_set_tooltip, 
//GO(gtk_tool_item_set_tooltip_markup, 
//GO(gtk_tool_item_set_tooltip_text, 
//GO(gtk_tool_item_set_use_drag_window, 
//GO(gtk_tool_item_set_visible_horizontal, 
//GO(gtk_tool_item_set_visible_vertical, 
//GO(gtk_tool_item_toolbar_reconfigured, 
//GO(gtk_tool_palette_add_drag_dest, 
GO(gtk_tool_palette_drag_targets_get_type, iFv)
//GO(gtk_tool_palette_get_drag_item, 
//GO(gtk_tool_palette_get_drag_target_group, 
//GO(gtk_tool_palette_get_drag_target_item, 
//GO(gtk_tool_palette_get_drop_group, 
//GO(gtk_tool_palette_get_drop_item, 
//GO(gtk_tool_palette_get_exclusive, 
//GO(gtk_tool_palette_get_expand, 
//GO(gtk_tool_palette_get_group_position, 
//GO(gtk_tool_palette_get_hadjustment, 
//GO(gtk_tool_palette_get_icon_size, 
//GO(gtk_tool_palette_get_style, 
GO(gtk_tool_palette_get_type, iFv)
//GO(gtk_tool_palette_get_vadjustment, 
//GO(gtk_tool_palette_new, 
//GO(gtk_tool_palette_set_drag_source, 
//GO(gtk_tool_palette_set_exclusive, 
//GO(gtk_tool_palette_set_expand, 
//GO(gtk_tool_palette_set_group_position, 
//GO(gtk_tool_palette_set_icon_size, 
//GO(gtk_tool_palette_set_style, 
//GO(gtk_tool_palette_unset_icon_size, 
//GO(gtk_tool_palette_unset_style, 
//GO(gtk_tool_shell_get_ellipsize_mode, 
//GO(gtk_tool_shell_get_icon_size, 
//GO(gtk_tool_shell_get_orientation, 
//GO(gtk_tool_shell_get_relief_style, 
//GO(gtk_tool_shell_get_style, 
//GO(gtk_tool_shell_get_text_alignment, 
//GO(gtk_tool_shell_get_text_orientation, 
//GO(gtk_tool_shell_get_text_size_group, 
GO(gtk_tool_shell_get_type, iFv)
//GO(gtk_tool_shell_rebuild_menu, 
GO(gtk_tooltip_get_type, iFv)
GO(gtk_tooltips_data_get, pFp)
GO(gtk_tooltips_disable, vFp)
GO(gtk_tooltips_enable, vFp)
//GO(gtk_tooltip_set_custom, 
//GO(gtk_tooltip_set_icon, 
//GO(gtk_tooltip_set_icon_from_gicon, 
//GO(gtk_tooltip_set_icon_from_icon_name, 
//GO(gtk_tooltip_set_icon_from_stock, 
//GO(gtk_tooltip_set_markup, 
//GO(gtk_tooltip_set_text, 
//GO(gtk_tooltip_set_tip_area, 
GO(gtk_tooltips_force_window, vFp)
GO(gtk_tooltips_get_info_from_tip_window, iFppp)
GO(gtk_tooltips_get_type, iFv)
GO(gtk_tooltips_new, pFv)
GO(gtk_tooltips_set_delay, vFpu)
GO(gtk_tooltips_set_tip, vFpppp)
//GO(gtk_tooltip_trigger_tooltip_query, 
GO(gtk_tray_icon_get_type, iFv)
//GO(gtk_tree_append, 
//GO(gtk_tree_child_position, 
//GO(gtk_tree_clear_items, 
//GO(gtk_tree_drag_dest_drag_data_received, 
GO(gtk_tree_drag_dest_get_type, iFv)
//GO(gtk_tree_drag_dest_row_drop_possible, 
//GO(gtk_tree_drag_source_drag_data_delete, 
//GO(gtk_tree_drag_source_drag_data_get, 
GO(gtk_tree_drag_source_get_type, iFv)
//GO(gtk_tree_drag_source_row_draggable, 
//GO(gtk_tree_get_row_drag_data, 
GO(gtk_tree_get_type, iFv)
//GO(gtk_tree_insert, 
//GO(gtk_tree_item_collapse, 
//GO(gtk_tree_item_deselect, 
//GO(gtk_tree_item_expand, 
GO(gtk_tree_item_get_type, iFv)
//GO(gtk_tree_item_new, 
//GO(gtk_tree_item_new_with_label, 
//GO(gtk_tree_item_remove_subtree, 
//GO(gtk_tree_item_select, 
//GO(gtk_tree_item_set_subtree, 
GO(gtk_tree_iter_copy, pFp)
GO(gtk_tree_iter_free, vFp)
GO(gtk_tree_iter_get_type, iFv)
//GO(gtk_tree_model_filter_clear_cache, 
//GO(gtk_tree_model_filter_convert_child_iter_to_iter, 
//GO(gtk_tree_model_filter_convert_child_path_to_path, 
//GO(gtk_tree_model_filter_convert_iter_to_child_iter, 
//GO(gtk_tree_model_filter_convert_path_to_child_path, 
//GO(gtk_tree_model_filter_get_model, 
GO(gtk_tree_model_filter_get_type, iFv)
//GO(gtk_tree_model_filter_new, 
//GO(gtk_tree_model_filter_refilter, 
//GO(gtk_tree_model_filter_set_modify_func, 
//GO(gtk_tree_model_filter_set_visible_column, 
//GO(gtk_tree_model_filter_set_visible_func, 
GO(gtk_tree_model_flags_get_type, iFv)
//GOM(gtk_tree_model_foreach, vFEpBp)
GO2(gtk_tree_model_get, vFppV, gtk_tree_model_get_valist)
GO(gtk_tree_model_get_column_type, iFpi)
GO(gtk_tree_model_get_flags, iFp)
GO(gtk_tree_model_get_iter, iFppp)
GO(gtk_tree_model_get_iter_first, iFpp)
GO(gtk_tree_model_get_iter_from_string, iFppp)
GO(gtk_tree_model_get_n_columns, iFp)
GO(gtk_tree_model_get_path, pFpp)
GO(gtk_tree_model_get_string_from_iter, pFpp)
GO(gtk_tree_model_get_type, iFv)
GO(gtk_tree_model_get_valist, vFppp)
GO(gtk_tree_model_get_value, vFppip)
GO(gtk_tree_model_iter_children, iFppp)
GO(gtk_tree_model_iter_has_child, iFpp)
GO(gtk_tree_model_iter_n_children, iFpp)
GO(gtk_tree_model_iter_next, iFpp)
GO(gtk_tree_model_iter_nth_child, iFpppi)
GO(gtk_tree_model_iter_parent, iFppp)
GO(gtk_tree_model_ref_node, vFpp)
GO(gtk_tree_model_row_changed, vFppp)
GO(gtk_tree_model_row_deleted, vFpp)
GO(gtk_tree_model_row_has_child_toggled, vFppp)
GO(gtk_tree_model_row_inserted, vFppp)
GO(gtk_tree_model_rows_reordered, vFpppp)
//GO(gtk_tree_model_sort_clear_cache, 
//GO(gtk_tree_model_sort_convert_child_iter_to_iter, 
//GO(gtk_tree_model_sort_convert_child_path_to_path, 
//GO(gtk_tree_model_sort_convert_iter_to_child_iter, 
//GO(gtk_tree_model_sort_convert_path_to_child_path, 
//GO(gtk_tree_model_sort_get_model, 
GO(gtk_tree_model_sort_get_type, iFv)
//GO(gtk_tree_model_sort_iter_is_valid, 
//GO(gtk_tree_model_sort_new_with_model, 
//GO(gtk_tree_model_sort_reset_default_sort_func, 
GO(gtk_tree_model_unref_node, vFpp)
//GO(gtk_tree_new, 
GO(gtk_tree_path_append_index, vFpi)
GO(gtk_tree_path_compare, iFpp)
GO(gtk_tree_path_copy, pFp)
GO(gtk_tree_path_down, vFp)
GO(gtk_tree_path_free, vFp)
GO(gtk_tree_path_get_depth, iFp)
GO(gtk_tree_path_get_indices, pFp)
GO(gtk_tree_path_get_indices_with_depth, pFpp)
GO(gtk_tree_path_get_type, iFv)
GO(gtk_tree_path_is_ancestor, iFpp)
GO(gtk_tree_path_is_descendant, iFpp)
GO(gtk_tree_path_new, pFv)
GO(gtk_tree_path_new_first, pFv)
GO(gtk_tree_path_new_from_indices, pFippppppppppppppppp)  // vaarg
GO(gtk_tree_path_new_from_string, pFp)
GO(gtk_tree_path_next, vFp)
GO(gtk_tree_path_prepend_index, vFpi)
GO(gtk_tree_path_prev, vFp)
GO(gtk_tree_path_to_string, pFp)
GO(gtk_tree_path_up, iFp)
//GO(gtk_tree_prepend, 
//GO(gtk_tree_remove_item, 
//GO(gtk_tree_remove_items, 
GO(gtk_tree_row_reference_copy, pFp)
GO(gtk_tree_row_reference_deleted, vFpp)
GO(gtk_tree_row_reference_free, vFp)
GO(gtk_tree_row_reference_get_model, pFp)
GO(gtk_tree_row_reference_get_path, pFp)
GO(gtk_tree_row_reference_get_type, iFv)
GO(gtk_tree_row_reference_inserted, vFpp)
GO(gtk_tree_row_reference_new, pFpp)
GO(gtk_tree_row_reference_new_proxy, pFppp)
GO(gtk_tree_row_reference_reordered, vFpppp)
GO(gtk_tree_row_reference_valid, iFp)
//GO(gtk_tree_select_child, 
GO(gtk_tree_selection_count_selected_rows, iFp)
GO(gtk_tree_selection_get_mode, iFp)
GO(gtk_tree_selection_get_selected, iFppp)
GO(gtk_tree_selection_get_selected_rows, pFpp)
//GOM(gtk_tree_selection_get_select_function, BFEp)
GO(gtk_tree_selection_get_tree_view, pFp)
GO(gtk_tree_selection_get_type, iFv)
//GOM(gtk_tree_selection_get_user_data, pFEp)
GO(gtk_tree_selection_iter_is_selected, iFpp)
GO(gtk_tree_selection_path_is_selected, iFpp)
GO(gtk_tree_selection_select_all, vFp)
//GOM(gtk_tree_selection_selected_foreach, vFEpBp)
GO(gtk_tree_selection_select_iter, vFpp)
GO(gtk_tree_selection_select_path, vFpp)
GO(gtk_tree_selection_select_range, vFppp)
GO(gtk_tree_selection_set_mode, vFpi)
//GOM(gtk_tree_selection_set_select_function, vFEpBpB)
GO(gtk_tree_selection_unselect_all, vFp)
GO(gtk_tree_selection_unselect_iter, vFpp)
GO(gtk_tree_selection_unselect_path, vFpp)
GO(gtk_tree_selection_unselect_range, vFppp)
//GO(gtk_tree_select_item, 
//GO(gtk_tree_set_row_drag_data, 
//GO(gtk_tree_set_selection_mode, 
//GO(gtk_tree_set_view_lines, 
//GO(gtk_tree_set_view_mode, 
GO(gtk_tree_sortable_get_sort_column_id, iFppp)
GO(gtk_tree_sortable_get_type, iFv)
GO(gtk_tree_sortable_has_default_sort_func, iFp)
GOM(gtk_tree_sortable_set_default_sort_func, vFEpppp)
GO(gtk_tree_sortable_set_sort_column_id, vFpii)
GOM(gtk_tree_sortable_set_sort_func, vFEpippp)
GO(gtk_tree_sortable_sort_column_changed, vFp)
//GO(gtk_tree_store_append, 
//GO(gtk_tree_store_clear, 
GO(gtk_tree_store_get_type, iFv)
//GO(gtk_tree_store_insert, 
//GO(gtk_tree_store_insert_after, 
//GO(gtk_tree_store_insert_before, 
//GO(gtk_tree_store_insert_with_values, 
//GO(gtk_tree_store_insert_with_valuesv, 
//GO(gtk_tree_store_is_ancestor, 
//GO(gtk_tree_store_iter_depth, 
//GO(gtk_tree_store_iter_is_valid, 
//GO(gtk_tree_store_move_after, 
//GO(gtk_tree_store_move_before, 
//GO(gtk_tree_store_new, 
//GO(gtk_tree_store_newv, 
//GO(gtk_tree_store_prepend, 
//GO(gtk_tree_store_remove, 
//GO(gtk_tree_store_reorder, 
//GO(gtk_tree_store_set, 
//GO(gtk_tree_store_set_column_types, 
//GO(gtk_tree_store_set_valist, 
//GO(gtk_tree_store_set_value, 
//GO(gtk_tree_store_set_valuesv, 
//GO(gtk_tree_store_swap, 
//GO(gtk_tree_unselect_child, 
//GO(gtk_tree_unselect_item, 
GO(gtk_tree_view_append_column, iFpp)
GO(gtk_tree_view_collapse_all, vFp)
GO(gtk_tree_view_collapse_row, iFpp)
GO(gtk_tree_view_column_add_attribute, vFpppi)
GO(gtk_tree_view_column_cell_get_position, iFpppp)
GO(gtk_tree_view_column_cell_get_size, vFpppppp)
GO(gtk_tree_view_column_cell_is_visible, iFp)
GO(gtk_tree_view_column_cell_set_cell_data, vFpppii)
GO(gtk_tree_view_column_clear, vFp)
GO(gtk_tree_view_column_clear_attributes, vFpp)
GO(gtk_tree_view_column_clicked, vFp)
GO(gtk_tree_view_column_focus_cell, vFpp)
GO(gtk_tree_view_column_get_alignment, fFp)
GO(gtk_tree_view_column_get_cell_renderers, pFp)
GO(gtk_tree_view_column_get_clickable, iFp)
GO(gtk_tree_view_column_get_expand, iFp)
GO(gtk_tree_view_column_get_fixed_width, iFp)
GO(gtk_tree_view_column_get_max_width, iFp)
GO(gtk_tree_view_column_get_min_width, iFp)
GO(gtk_tree_view_column_get_reorderable, iFp)
GO(gtk_tree_view_column_get_resizable, iFp)
GO(gtk_tree_view_column_get_sizing, iFp)
GO(gtk_tree_view_column_get_sort_column_id, iFp)
GO(gtk_tree_view_column_get_sort_indicator, iFp)
GO(gtk_tree_view_column_get_sort_order, iFp)
GO(gtk_tree_view_column_get_spacing, iFp)
GO(gtk_tree_view_column_get_title, pFp)
GO(gtk_tree_view_column_get_tree_view, pFp)
GO(gtk_tree_view_column_get_type, iFv)
GO(gtk_tree_view_column_get_visible, iFp)
GO(gtk_tree_view_column_get_widget, pFp)
GO(gtk_tree_view_column_get_width, iFp)
GO(gtk_tree_view_column_new, pFv)
GO(gtk_tree_view_column_new_with_attributes, pFppppppppppppp)   //vaarg
GO(gtk_tree_view_column_pack_end, vFppi)
GO(gtk_tree_view_column_pack_start, vFppi)
GO(gtk_tree_view_column_queue_resize, vFp)
GO(gtk_tree_view_columns_autosize, vFp)
GO(gtk_tree_view_column_set_alignment, vFpf)
GO(gtk_tree_view_column_set_attributes, vFpppppppppppp) //vaarg
//GOM(gtk_tree_view_column_set_cell_data_func, vFEppBpB)
GO(gtk_tree_view_column_set_clickable, vFpi)
GO(gtk_tree_view_column_set_expand, vFpi)
GO(gtk_tree_view_column_set_fixed_width, vFpi)
GO(gtk_tree_view_column_set_max_width, vFpi)
GO(gtk_tree_view_column_set_min_width, vFpi)
GO(gtk_tree_view_column_set_reorderable, vFpi)
GO(gtk_tree_view_column_set_resizable, vFpi)
GO(gtk_tree_view_column_set_sizing, vFpi)
GO(gtk_tree_view_column_set_sort_column_id, iFp)
GO(gtk_tree_view_column_set_sort_indicator, vFpi)
GO(gtk_tree_view_column_set_sort_order, vFpi)
GO(gtk_tree_view_column_set_spacing, vFpi)
GO(gtk_tree_view_column_set_title, vFpp)
GO(gtk_tree_view_column_set_visible, vFpi)
GO(gtk_tree_view_column_set_widget, vFpp)
GO(gtk_tree_view_column_sizing_get_type, iFv)
GO(gtk_tree_view_convert_bin_window_to_tree_coords, vFpiipp)
GO(gtk_tree_view_convert_bin_window_to_widget_coords, vFpiipp)
GO(gtk_tree_view_convert_tree_to_bin_window_coords, vFpiipp)
GO(gtk_tree_view_convert_tree_to_widget_coords, vFpiipp)
GO(gtk_tree_view_convert_widget_to_bin_window_coords, vFpiipp)
GO(gtk_tree_view_convert_widget_to_tree_coords, vFpiipp)
GO(gtk_tree_view_create_row_drag_icon, pFpp)
GO(gtk_tree_view_drop_position_get_type, iFv)
GO(gtk_tree_view_enable_model_drag_dest, vFppiu)
GO(gtk_tree_view_enable_model_drag_source, vFpipiu)
GO(gtk_tree_view_expand_all, vFp)
GO(gtk_tree_view_expand_row, iFppi)
GO(gtk_tree_view_expand_to_path, vFpp)
GO(gtk_tree_view_get_background_area, vFpppp)
GO(gtk_tree_view_get_bin_window, pFp)
GO(gtk_tree_view_get_cell_area, vFpppp)
GO(gtk_tree_view_get_column, pFpi)
GO(gtk_tree_view_get_columns, pFp)
GO(gtk_tree_view_get_cursor, vFppp)
GO(gtk_tree_view_get_dest_row_at_pos, iFpiipp)
GO(gtk_tree_view_get_drag_dest_row, vFppp)
GO(gtk_tree_view_get_enable_search, iFp)
GO(gtk_tree_view_get_enable_tree_lines, iFp)
GO(gtk_tree_view_get_expander_column, pFp)
GO(gtk_tree_view_get_fixed_height_mode, iFp)
GO(gtk_tree_view_get_grid_lines, iFp)
GO(gtk_tree_view_get_hadjustment, pFp)
GO(gtk_tree_view_get_headers_clickable, iFp)
GO(gtk_tree_view_get_headers_visible, iFp)
GO(gtk_tree_view_get_hover_expand, iFp)
GO(gtk_tree_view_get_hover_selection, iFp)
GO(gtk_tree_view_get_level_indentation, iFp)
GO(gtk_tree_view_get_model, pFp)
GO(gtk_tree_view_get_path_at_pos, iFpiipppp)
GO(gtk_tree_view_get_reorderable, iFp)
//GOM(gtk_tree_view_get_row_separator_func, BFEp)
GO(gtk_tree_view_get_rubber_banding, iFp)
GO(gtk_tree_view_get_rules_hint, iFp)
GO(gtk_tree_view_get_search_column, iFp)
GO(gtk_tree_view_get_search_entry, pFp)
//GOM(gtk_tree_view_get_search_equal_func, BFEp)
//GOM(gtk_tree_view_get_search_position_func, BFEp)
GO(gtk_tree_view_get_selection, pFp)
GO(gtk_tree_view_get_show_expanders, iFp)
GO(gtk_tree_view_get_tooltip_column, iFp)
GO(gtk_tree_view_get_tooltip_context, iFpppippp)
GO(gtk_tree_view_get_type, iFv)
GO(gtk_tree_view_get_vadjustment, pFp)
GO(gtk_tree_view_get_visible_range, iFppp)
GO(gtk_tree_view_get_visible_rect, vFpp)
GO(gtk_tree_view_grid_lines_get_type, iFv)
GO(gtk_tree_view_insert_column, iFppi)
GO(gtk_tree_view_insert_column_with_attributes, iFpipppppppppppp) //vaarg
//GOM(gtk_tree_view_insert_column_with_data_func, iFpippBpB)
GO(gtk_tree_view_is_rubber_banding_active, iFp)
//GOM(gtk_tree_view_map_expanded_rows, vFEpBp)
GO(gtk_tree_view_mode_get_type, iFv)
GO(gtk_tree_view_move_column_after, vFppp)
GO(gtk_tree_view_new, pFv)
GO(gtk_tree_view_new_with_model, pFp)
GO(gtk_tree_view_remove_column, iFpp)
GO(gtk_tree_view_row_activated, vFp)
GO(gtk_tree_view_row_expanded, iFpp)
GO(gtk_tree_view_scroll_to_cell, vFpppiff)
GO(gtk_tree_view_scroll_to_point, vFpii)
//GOM(gtk_tree_view_set_column_drag_function, vFEpBpB)
GO(gtk_tree_view_set_cursor, vFpppi)
GO(gtk_tree_view_set_cursor_on_cell, vFppppi)
//GOM(gtk_tree_view_set_destroy_count_func, vFEpBpB)
GO(gtk_tree_view_set_drag_dest_row, vFppi)
GO(gtk_tree_view_set_enable_search, vFpi)
GO(gtk_tree_view_set_enable_tree_lines, vFpi)
GO(gtk_tree_view_set_expander_column, vFpp)
GO(gtk_tree_view_set_fixed_height_mode, vFpi)
GO(gtk_tree_view_set_grid_lines, vFpi)
GO(gtk_tree_view_set_hadjustment, vFpp)
GO(gtk_tree_view_set_headers_clickable, vFpi)
GO(gtk_tree_view_set_headers_visible, vFpi)
GO(gtk_tree_view_set_hover_expand, vFpi)
GO(gtk_tree_view_set_hover_selection, vFpi)
GO(gtk_tree_view_set_level_indentation, vFpi)
GO(gtk_tree_view_set_model, vFpp)
GO(gtk_tree_view_set_reorderable, vFpi)
//GOM(gtk_tree_view_set_row_separator_func, vFEpBpB)
GO(gtk_tree_view_set_rubber_banding, vFpi)
GO(gtk_tree_view_set_rules_hint, vFpi)
GO(gtk_tree_view_set_search_column, vFpi)
GO(gtk_tree_view_set_search_entry, vFpp)
GOM(gtk_tree_view_set_search_equal_func, vFEpppp)
//GOM(gtk_tree_view_set_search_position_func, vFEpBpB)
GO(gtk_tree_view_set_show_expanders, vFpi)
GO(gtk_tree_view_set_tooltip_cell, vFppppp)
GO(gtk_tree_view_set_tooltip_column, vFpi)
GO(gtk_tree_view_set_tooltip_row, vFppp)
GO(gtk_tree_view_set_vadjustment, vFpp)
GO(gtk_tree_view_tree_to_widget_coords, vFpiipp)
GO(gtk_tree_view_unset_rows_drag_dest, vFp)
GO(gtk_tree_view_unset_rows_drag_source, vFp)
GO(gtk_tree_view_widget_to_tree_coords, vFpiipp)
GO(gtk_true, iFv)
GOM(gtk_type_class, pFEi)
GO(gtk_type_enum_find_value, pFip)
GO(gtk_type_enum_get_values, pFi)
GO(gtk_type_flags_find_value, pFip)
GO(gtk_type_flags_get_values, pFi)
GO(gtk_type_init, vFi)
GO(gtk_type_new, pFi)
GOM(gtk_type_unique, iFEpp)
//GO(gtk_ui_manager_add_ui, 
//GO(gtk_ui_manager_add_ui_from_file, 
//GO(gtk_ui_manager_add_ui_from_string, 
//GO(gtk_ui_manager_ensure_update, 
//GO(gtk_ui_manager_get_accel_group, 
//GO(gtk_ui_manager_get_action, 
//GO(gtk_ui_manager_get_action_groups, 
//GO(gtk_ui_manager_get_add_tearoffs, 
//GO(gtk_ui_manager_get_toplevels, 
GO(gtk_ui_manager_get_type, iFv)
//GO(gtk_ui_manager_get_ui, 
//GO(gtk_ui_manager_get_widget, 
//GO(gtk_ui_manager_insert_action_group, 
GO(gtk_ui_manager_item_type_get_type, iFv)
//GO(gtk_ui_manager_new, 
//GO(gtk_ui_manager_new_merge_id, 
//GO(gtk_ui_manager_remove_action_group, 
//GO(gtk_ui_manager_remove_ui, 
//GO(gtk_ui_manager_set_add_tearoffs, 
GO(gtk_unit_get_type, iFv)
GO(gtk_update_type_get_type, iFv)
GO(gtk_vbox_get_type, iFv)
GO(gtk_vbox_new, pFii)
//GO(gtk_vbutton_box_get_layout_default, 
//GO(gtk_vbutton_box_get_spacing_default, 
GO(gtk_vbutton_box_get_type, iFv)
//GO(gtk_vbutton_box_new, 
//GO(gtk_vbutton_box_set_layout_default, 
//GO(gtk_vbutton_box_set_spacing_default, 
//GO(gtk_viewport_get_bin_window, 
//GO(gtk_viewport_get_hadjustment, 
//GO(gtk_viewport_get_shadow_type, 
GO(gtk_viewport_get_type, iFv)
//GO(gtk_viewport_get_vadjustment, 
//GO(gtk_viewport_get_view_window, 
//GO(gtk_viewport_new, 
//GO(gtk_viewport_set_hadjustment, 
//GO(gtk_viewport_set_shadow_type, 
//GO(gtk_viewport_set_vadjustment, 
GO(gtk_visibility_get_type, iFv)
GO(gtk_volume_button_get_type, iFv)
GO(gtk_volume_button_new, pFv)
GO(gtk_vpaned_get_type, iFv)
GO(gtk_vpaned_new, pFv)
GO(gtk_vruler_get_type, iFv)
GO(gtk_vruler_new, pFv)
GO(gtk_vscale_get_type, iFv)
GO(gtk_vscale_new, pFp)
GO(gtk_vscale_new_with_range, pFddd)
GO(gtk_vscrollbar_get_type, iFv)
GO(gtk_vscrollbar_new, pFp)
GO(gtk_vseparator_get_type, iFv)
GO(gtk_vseparator_new, pFv)
GO(gtk_widget_activate, iFp)
GO(gtk_widget_add_accelerator, vFpppuii)
GO(gtk_widget_add_events, vFpi)
GO(gtk_widget_add_mnemonic_label, vFpp)
GO(gtk_widget_can_activate_accel, iFpu)
GO(gtk_widget_child_focus, iFpi)
GO(gtk_widget_child_notify, vFp)
GO(gtk_widget_class_find_style_property, pFpp)
GO(gtk_widget_class_install_style_property, vFpp)
//GOM(gtk_widget_class_install_style_property_parser, vFEppB)
GO(gtk_widget_class_list_style_properties, pFpp)
GO(gtk_widget_class_path, vFpppp)
GO(gtk_widget_create_pango_context, pFp)
GO(gtk_widget_create_pango_layout, pFpp)
GO(gtk_widget_destroy, vFp)
GO(gtk_widget_destroyed, vFpp)
GO(gtk_widget_draw, vFpp)
GO(gtk_widget_ensure_style, vFp)
GO(gtk_widget_error_bell, vFp)
GO(gtk_widget_event, iFpp)
GO(gtk_widget_flags_get_type, iFv)
GO(gtk_widget_freeze_child_notify, vFp)
GO(gtk_widget_get_accessible, pFp)
GO(gtk_widget_get_action, pFp)
GO(gtk_widget_get_allocation, vFpp)
GO(gtk_widget_get_ancestor, pFpi)
GO(gtk_widget_get_app_paintable, iFp)
GO(gtk_widget_get_can_default, iFp)
GO(gtk_widget_get_can_focus, iFp)
GO(gtk_widget_get_child_requisition, vFpp)
GO(gtk_widget_get_child_visible, iFp)
GO(gtk_widget_get_clipboard, pFpp)
GO(gtk_widget_get_colormap, pFp)
GO(gtk_widget_get_composite_name, pFp)
GO(gtk_widget_get_default_colormap, pFv)
GO(gtk_widget_get_default_direction, iFv)
GO(gtk_widget_get_default_style, pFv)
GO(gtk_widget_get_default_visual, pFv)
GO(gtk_widget_get_direction, iFp)
GO(gtk_widget_get_display, pFp)
GO(gtk_widget_get_double_buffered, iFp)
GO(gtk_widget_get_events, iFp)
GO(gtk_widget_get_extension_events, iFp)
GO(gtk_widget_get_has_tooltip, iFp)
GO(gtk_widget_get_has_window, iFp)
GO(gtk_widget_get_mapped, iFp)
GO(gtk_widget_get_modifier_style, pFp)
GO(gtk_widget_get_name, pFp)
GO(gtk_widget_get_no_show_all, iFp)
GO(gtk_widget_get_pango_context, pFp)
GO(gtk_widget_get_parent, pFp)
GO(gtk_widget_get_parent_window, pFp)
GO(gtk_widget_get_pointer, vFppp)
GO(gtk_widget_get_realized, iFp)
GO(gtk_widget_get_receives_default, iFp)
GO(gtk_widget_get_requisition, vFpp)
GO(gtk_widget_get_root_window, pFp)
GO(gtk_widget_get_screen, pFp)
GO(gtk_widget_get_sensitive, iFp)
GO(gtk_widget_get_settings, pFp)
GO(gtk_widget_get_size_request, vFppp)
GO(gtk_widget_get_snapshot, pFpp)
GO(gtk_widget_get_state, iFp)
GO(gtk_widget_get_style, pFp)
GO(gtk_widget_get_tooltip_markup, pFp)
GO(gtk_widget_get_tooltip_text, pFp)
GO(gtk_widget_get_tooltip_window, pFp)
GO(gtk_widget_get_toplevel, pFp)
GO(gtk_widget_get_type, iFv)
GO(gtk_widget_get_visible, iFp)
GO(gtk_widget_get_visual, pFp)
GO(gtk_widget_get_window, pFp)
GO(gtk_widget_grab_default, vFp)
GO(gtk_widget_grab_focus, vFp)
GO(gtk_widget_has_default, iFp)
GO(gtk_widget_has_focus, iFp)
GO(gtk_widget_has_grab, iFp)
GO(gtk_widget_has_rc_style, iFp)
GO(gtk_widget_has_screen, iFp)
GO(gtk_widget_help_type_get_type, iFv)
GO(gtk_widget_hide, vFp)
GO(gtk_widget_hide_all, vFp)
GO(gtk_widget_hide_on_delete, iFp)
GO(gtk_widget_input_shape_combine_mask, vFppii)
GO(gtk_widget_intersect, iFppp)
GO(gtk_widget_is_ancestor, iFpp)
GO(gtk_widget_is_composited, iFp)
GO(gtk_widget_is_drawable, iFp)
GO(gtk_widget_is_focus, iFp)
GO(gtk_widget_is_sensitive, iFp)
GO(gtk_widget_is_toplevel, iFp)
GO(gtk_widget_keynav_failed, iFpi)
GO(gtk_widget_list_accel_closures, pFp)
GO(gtk_widget_list_mnemonic_labels, pFp)
GO(gtk_widget_map, vFp)
GO(gtk_widget_mnemonic_activate, iFpi)
GO(gtk_widget_modify_base, vFpip)
GO(gtk_widget_modify_bg, vFpip)
GO(gtk_widget_modify_cursor, vFppp)
GO(gtk_widget_modify_fg, vFpip)
GO(gtk_widget_modify_font, vFpp)
GO(gtk_widget_modify_style, vFpp)
GO(gtk_widget_modify_text, vFpip)
GO(gtk_widget_new, pFppppppppppppp) //vaarg
GO(gtk_widget_path, vFpppp)
GO(gtk_widget_pop_colormap, vFv)
GO(gtk_widget_pop_composite_child, vFv)
GO(gtk_widget_push_colormap, vFp)
GO(gtk_widget_push_composite_child, vFv)
GO(gtk_widget_queue_clear, vFp)
GO(gtk_widget_queue_clear_area, vFpiiii)
GO(gtk_widget_queue_draw, vFp)
GO(gtk_widget_queue_draw_area, vFpiiii)
GO(gtk_widget_queue_resize, vFp)
GO(gtk_widget_queue_resize_no_redraw, vFp)
GO(gtk_widget_realize, vFp)
GO(gtk_widget_ref, pFp)
GO(gtk_widget_region_intersect, pFpp)
GO(gtk_widget_remove_accelerator, iFppui)
GO(gtk_widget_remove_mnemonic_label, vFpp)
GO(gtk_widget_render_icon, pFppip)
GO(gtk_widget_reparent, vFpp)
GO(gtk_widget_reset_rc_styles, vFp)
GO(gtk_widget_reset_shapes, vFp)
GO(gtk_widget_send_expose, iFpp)
GO(gtk_widget_send_focus_change, iFpp)
GO(gtk_widget_set, vFppppppppppppppp) //vaarg
GO(gtk_widget_set_accel_path, vFppp)
GO(gtk_widget_set_allocation, vFpp)
GO(gtk_widget_set_app_paintable, vFpi)
GO(gtk_widget_set_can_default, vFpi)
GO(gtk_widget_set_can_focus, vFpi)
GO(gtk_widget_set_child_visible, vFpi)
GO(gtk_widget_set_colormap, vFpp)
GO(gtk_widget_set_composite_name, vFpp)
GO(gtk_widget_set_default_colormap, vFp)
GO(gtk_widget_set_default_direction, vFi)
GO(gtk_widget_set_direction, vFpi)
GO(gtk_widget_set_double_buffered, vFpi)
GO(gtk_widget_set_events, vFpi)
GO(gtk_widget_set_extension_events, vFpi)
GO(gtk_widget_set_has_tooltip, vFpi)
GO(gtk_widget_set_has_window, vFpi)
GO(gtk_widget_set_mapped, vFpi)
GO(gtk_widget_set_name, vFpp)
GO(gtk_widget_set_no_show_all, vFpi)
GO(gtk_widget_set_parent, vFpp)
GO(gtk_widget_set_parent_window, vFpp)
GO(gtk_widget_set_realized, vFpi)
GO(gtk_widget_set_receives_default, vFpi)
GO(gtk_widget_set_redraw_on_allocate, vFpi)
GO(gtk_widget_set_scroll_adjustments, iFppp)
GO(gtk_widget_set_sensitive, vFpi)
GO(gtk_widget_set_size_request, vFpii)
GO(gtk_widget_set_state, vFpi)
GO(gtk_widget_set_style, vFpp)
GO(gtk_widget_set_tooltip_markup, vFpp)
GO(gtk_widget_set_tooltip_text, vFpp)
GO(gtk_widget_set_tooltip_window, vFpp)
GO(gtk_widget_set_uposition, vFpii)
GO(gtk_widget_set_usize, vFpii)
GO(gtk_widget_set_visible, vFpi)
GO(gtk_widget_set_window, vFpp)
GO(gtk_widget_shape_combine_mask, vFppii)
GO(gtk_widget_show, vFp)
GO(gtk_widget_show_all, vFp)
GO(gtk_widget_show_now, vFp)
GO(gtk_widget_size_allocate, vFpppuii)
GO(gtk_widget_size_request, vFpp)
GO(gtk_widget_style_attach, vFp)
GO2(gtk_widget_style_get, vFppV, gtk_widget_style_get_valist)
GO(gtk_widget_style_get_property, vFppp)
GO(gtk_widget_style_get_valist, vFppp)
GO(gtk_widget_thaw_child_notify, vFp)
GO(gtk_widget_translate_coordinates, iFppiipp)
GO(gtk_widget_trigger_tooltip_query, vFp)
GO(gtk_widget_unmap, vFp)
GO(gtk_widget_unparent, vFp)
GO(gtk_widget_unrealize, vFp)
GO(gtk_widget_unref, vFp)
GO(gtk_window_activate_default, iFp)
GO(gtk_window_activate_focus, iFp)
GO(gtk_window_activate_key, iFpp)
GO(gtk_window_add_accel_group, vFpp)
GO(gtk_window_add_embedded_xid, vFpu)
GO(gtk_window_add_mnemonic, vFpup)
GO(gtk_window_begin_move_drag, vFpiiiu)
GO(gtk_window_begin_resize_drag, vFpuiiiu)
GO(gtk_window_deiconify, vFp)
GO(gtk_window_fullscreen, vFp)
GO(gtk_window_get_accept_focus, iFp)
GO(gtk_window_get_decorated, iFp)
GO(gtk_window_get_default_icon_list, pFv)
GO(gtk_window_get_default_icon_name, pFv)
GO(gtk_window_get_default_size, vFppp)
GO(gtk_window_get_default_widget, pFp)
GO(gtk_window_get_deletable, iFp)
GO(gtk_window_get_destroy_with_parent, iFp)
GO(gtk_window_get_focus, pFp)
GO(gtk_window_get_focus_on_map, iFp)
GO(gtk_window_get_frame_dimensions, vFppppp)
GO(gtk_window_get_gravity, iFp)
GO(gtk_window_get_group, pFp)
GO(gtk_window_get_has_frame, iFp)
GO(gtk_window_get_icon, pFp)
GO(gtk_window_get_icon_list, pFp)
GO(gtk_window_get_icon_name, pFp)
GO(gtk_window_get_mnemonic_modifier, iFp)
GO(gtk_window_get_mnemonics_visible, iFp)
GO(gtk_window_get_modal, iFp)
GO(gtk_window_get_opacity, dFp)
GO(gtk_window_get_position, vFppp)
GO(gtk_window_get_resizable, iFp)
GO(gtk_window_get_role, pFp)
GO(gtk_window_get_screen, pFp)
GO(gtk_window_get_size, vFppp)
GO(gtk_window_get_skip_pager_hint, iFp)
GO(gtk_window_get_skip_taskbar_hint, iFp)
GO(gtk_window_get_title, pFp)
GO(gtk_window_get_transient_for, pFp)
GO(gtk_window_get_type, iFv)
GO(gtk_window_get_type_hint, iFp)
GO(gtk_window_get_urgency_hint, iFp)
GO(gtk_window_get_window_type, uFp)
GO(gtk_window_group_add_window, vFpp)
GO(gtk_window_group_get_current_grab, pFp)
GO(gtk_window_group_get_type, iFv)
GO(gtk_window_group_list_windows, pFp)
GO(gtk_window_group_new, pFv)
GO(gtk_window_group_remove_window, vFpp)
GO(gtk_window_has_group, iFp)
GO(gtk_window_has_toplevel_focus, iFp)
GO(gtk_window_iconify, vFp)
GO(gtk_window_is_active, iFp)
GO(gtk_window_list_toplevels, pFv)
GO(gtk_window_maximize, vFp)
GO(gtk_window_mnemonic_activate, iFpui)
GO(gtk_window_move, vFpii)
GO(gtk_window_new, pFi)
GO(gtk_window_parse_geometry, iFpp)
GO(gtk_window_position_get_type, iFv)
GO(gtk_window_present, vFp)
GO(gtk_window_present_with_time, vFpu)
GO(gtk_window_propagate_key_event, iFpp)
GO(gtk_window_remove_accel_group, vFpp)
GO(gtk_window_remove_embedded_xid, vFpu)
GO(gtk_window_remove_mnemonic, vFpup)
GO(gtk_window_reshow_with_initial_size, vFp)
GO(gtk_window_resize, vFpii)
GO(gtk_window_set_accept_focus, vFpi)
GO(gtk_window_set_auto_startup_notification, vFi)
GO(gtk_window_set_decorated, vFpi)
GO(gtk_window_set_default, vFpp)
GO(gtk_window_set_default_icon, vFp)
GO(gtk_window_set_default_icon_from_file, iFpp)
GO(gtk_window_set_default_icon_list, vFp)
GO(gtk_window_set_default_icon_name, vFp)
GO(gtk_window_set_default_size, vFpii)
GO(gtk_window_set_deletable, vFpi)
GO(gtk_window_set_destroy_with_parent, vFpi)
GO(gtk_window_set_focus, vFpp)
GO(gtk_window_set_focus_on_map, vFpi)
GO(gtk_window_set_frame_dimensions, vFpiiii)
GO(gtk_window_set_geometry_hints, vFpppi)
GO(gtk_window_set_gravity, vFpi)
GO(gtk_window_set_has_frame, vFpi)
GO(gtk_window_set_icon, vFpp)
GO(gtk_window_set_icon_from_file, iFppp)
GO(gtk_window_set_icon_list, vFpp)
GO(gtk_window_set_icon_name, vFpp)
GO(gtk_window_set_keep_above, vFpi)
GO(gtk_window_set_keep_below, vFpi)
GO(gtk_window_set_mnemonic_modifier, vFpi)
GO(gtk_window_set_mnemonics_visible, vFpi)
GO(gtk_window_set_modal, vFpi)
GO(gtk_window_set_opacity, vFpd)
GO(gtk_window_set_policy, vFpiii)
GO(gtk_window_set_position, vFpi)
GO(gtk_window_set_resizable, vFpi)
GO(gtk_window_set_role, vFpp)
GO(gtk_window_set_screen, vFpp)
GO(gtk_window_set_skip_pager_hint, vFpi)
GO(gtk_window_set_skip_taskbar_hint, vFpi)
GO(gtk_window_set_startup_id, vFpp)
GO(gtk_window_set_title, vFpp)
GO(gtk_window_set_transient_for, vFpp)
GO(gtk_window_set_type_hint, vFpi)
GO(gtk_window_set_urgency_hint, vFpi)
GO(gtk_window_set_wmclass, vFppp)
GO(gtk_window_stick, vFp)
GO(gtk_window_type_get_type, iFv)
GO(gtk_window_unfullscreen, vFp)
GO(gtk_window_unmaximize, vFp)
GO(gtk_window_unstick, vFp)
GO(gtk_wrap_mode_get_type, iFv)

// from gtk-1.2
GOM(gtk_signal_connect, LFEpppp)
GO2(gtk_type_is_a, iFii, g_type_is_a)
GOM(gtk_type_check_object_cast, pFEpi)
GOM(gtk_spin_button_get_value_as_float, fFEp)