#ifndef org_orekit_files_ccsds_section_Header_H
#define org_orekit_files_ccsds_section_Header_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          class Header : public ::org::orekit::files::ccsds::section::CommentsContainer {
           public:
            enum {
              mid_init$_8f2e782d5278b131,
              mid_getClassification_11b109bd155ca898,
              mid_getCreationDate_85703d13e302437e,
              mid_getFormatVersion_dff5885c2c873297,
              mid_getMessageId_11b109bd155ca898,
              mid_getOriginator_11b109bd155ca898,
              mid_setClassification_d0bc48d5b00dc40c,
              mid_setCreationDate_600a2a61652bc473,
              mid_setFormatVersion_17db3a65980d3441,
              mid_setMessageId_d0bc48d5b00dc40c,
              mid_setOriginator_d0bc48d5b00dc40c,
              mid_validate_17db3a65980d3441,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Header(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Header(const Header& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

            Header(jdouble, jdouble);

            ::java::lang::String getClassification() const;
            ::org::orekit::time::AbsoluteDate getCreationDate() const;
            jdouble getFormatVersion() const;
            ::java::lang::String getMessageId() const;
            ::java::lang::String getOriginator() const;
            void setClassification(const ::java::lang::String &) const;
            void setCreationDate(const ::org::orekit::time::AbsoluteDate &) const;
            void setFormatVersion(jdouble) const;
            void setMessageId(const ::java::lang::String &) const;
            void setOriginator(const ::java::lang::String &) const;
            void validate(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          extern PyType_Def PY_TYPE_DEF(Header);
          extern PyTypeObject *PY_TYPE(Header);

          class t_Header {
          public:
            PyObject_HEAD
            Header object;
            static PyObject *wrap_Object(const Header&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
