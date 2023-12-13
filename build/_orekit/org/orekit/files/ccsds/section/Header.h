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
              mid_init$_369b4c97255d5afa,
              mid_getClassification_1c1fa1e935d6cdcf,
              mid_getCreationDate_c325492395d89b24,
              mid_getFormatVersion_b74f83833fdad017,
              mid_getMessageId_1c1fa1e935d6cdcf,
              mid_getOriginator_1c1fa1e935d6cdcf,
              mid_setClassification_734b91ac30d5f9b4,
              mid_setCreationDate_02135a6ef25adb4b,
              mid_setFormatVersion_8ba9fe7a847cecad,
              mid_setMessageId_734b91ac30d5f9b4,
              mid_setOriginator_734b91ac30d5f9b4,
              mid_validate_8ba9fe7a847cecad,
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
