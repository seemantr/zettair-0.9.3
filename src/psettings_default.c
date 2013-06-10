/* code generated by psettings_write_code() to produce a psettings object with 
 * default settings */

#include "firstinclude.h"
#include <assert.h>
#include <stdlib.h>

#include "psettings.h"

struct psettings *psettings_new_default(enum psettings_attr def) {
    struct psettings *pset = psettings_new(def);
    enum psettings_ret ret;

    if (pset) {
        if ((ret = psettings_type_default(pset, 0, 1))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/a", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/acronym", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/address", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/b", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/bdo", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/big", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/cite", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/code", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/del", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/dfn", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/em", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/font", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/i", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/javascript", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/kbd", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/link", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/meta", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/q", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/s", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/samp", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/script", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/sgmlcomment", 144))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/small", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/span", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/strike", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/strong", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/style", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/sub", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/sup", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/tt", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/u", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/var", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "/vbscript", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "a", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "acronym", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "address", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "b", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "bdo", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "big", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "cite", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "code", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "del", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "dfn", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "dochdr", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "em", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "font", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "i", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "javascript", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "kbd", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "link", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "meta", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "profile", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "q", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "s", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "samp", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "script", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "sgmlcomment", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "small", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "span", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "strike", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "strong", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "style", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "sub", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "sup", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "title", 256))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "tt", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "u", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "var", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 0, "vbscript", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_type_default(pset, 2, 1))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "/article", 2))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "/javascript", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "/script", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "/sgmlcomment", 144))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "/style", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "/vbscript", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "dirpath", 4))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "dochdr", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "javascript", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "profile", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "script", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "sgmlcomment", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "style", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "title", 256))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 2, "vbscript", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_type_default(pset, 3, 1))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/a", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/acronym", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/address", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/b", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/bdo", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/big", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/cite", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/code", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/del", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/dfn", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/doc", 2))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/dochdr", 8))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/em", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/font", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/i", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/javascript", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/kbd", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/link", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/meta", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/q", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/s", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/samp", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/script", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/sgmlcomment", 144))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/small", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/span", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/strike", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/strong", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/style", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/sub", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/sup", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/tt", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/u", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/var", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "/vbscript", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "a", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "acronym", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "address", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "au", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "b", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "bdo", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "big", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "byline", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "cite", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "code", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "dateline", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "del", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "dfn", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "dochdr", 64))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "docid", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "docno", 4))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "docoldno", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "em", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "fileid", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "first", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "font", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "ht", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "i", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "javascript", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "kbd", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "link", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "meta", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "parent", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "profile", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "q", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "s", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "samp", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "script", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "second", 0))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "sgmlcomment", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "small", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "span", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "strike", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "strong", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "style", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "sub", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "sup", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "title", 256))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "tt", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "u", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "var", 129))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
        if ((ret = psettings_set(pset, 3, "vbscript", 128))
          != PSETTINGS_OK) {
            psettings_delete(pset);
            return NULL;
        }
    }

    return pset;
}

#ifdef PSETTINGS_DEFAULT_TEST

int main() {
    struct psettings *pset = psettings_new_default(PSETTINGS_ATTR_INDEX);

    psettings_write_code(pset, stdout);

    psettings_delete(pset);
    return EXIT_SUCCESS;

}

#endif

