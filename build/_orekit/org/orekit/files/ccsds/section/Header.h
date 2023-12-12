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
              mid_init$_ab23f4ae0fb33968,
              mid_getClassification_3cffd47377eca18a,
              mid_getCreationDate_7a97f7e149e79afb,
              mid_getFormatVersion_557b8123390d8d0c,
              mid_getMessageId_3cffd47377eca18a,
              mid_getOriginator_3cffd47377eca18a,
              mid_setClassification_f5ffdf29129ef90a,
              mid_setCreationDate_20affcbd28542333,
              mid_setFormatVersion_10f281d777284cea,
              mid_setMessageId_f5ffdf29129ef90a,
              mid_setOriginator_f5ffdf29129ef90a,
              mid_validate_10f281d777284cea,
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
