#ifndef org_orekit_files_ccsds_section_Header_H
#define org_orekit_files_ccsds_section_Header_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
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
              mid_init$_1d715fa3b7b756e1,
              mid_getClassification_0090f7797e403f43,
              mid_getCreationDate_aaa854c403487cf3,
              mid_getFormatVersion_456d9a2f64d6b28d,
              mid_getMessageId_0090f7797e403f43,
              mid_getOriginator_0090f7797e403f43,
              mid_setClassification_e939c6558ae8d313,
              mid_setCreationDate_e82d68cd9f886886,
              mid_setFormatVersion_77e0f9a1f260e2e5,
              mid_setMessageId_e939c6558ae8d313,
              mid_setOriginator_e939c6558ae8d313,
              mid_validate_77e0f9a1f260e2e5,
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
