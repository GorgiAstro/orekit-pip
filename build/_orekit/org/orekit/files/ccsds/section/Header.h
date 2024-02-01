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
              mid_init$_13edac039e8cc967,
              mid_getClassification_d2c8eb4129821f0e,
              mid_getCreationDate_80e11148db499dda,
              mid_getFormatVersion_9981f74b2d109da6,
              mid_getMessageId_d2c8eb4129821f0e,
              mid_getOriginator_d2c8eb4129821f0e,
              mid_setClassification_105e1eadb709d9ac,
              mid_setCreationDate_8497861b879c83f7,
              mid_setFormatVersion_1ad26e8c8c0cd65b,
              mid_setMessageId_105e1eadb709d9ac,
              mid_setOriginator_105e1eadb709d9ac,
              mid_validate_1ad26e8c8c0cd65b,
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
