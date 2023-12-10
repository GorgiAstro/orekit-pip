#ifndef org_orekit_files_ccsds_section_Data_H
#define org_orekit_files_ccsds_section_Data_H

#include "org/orekit/files/ccsds/section/Section.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          class Data : public ::org::orekit::files::ccsds::section::Section {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Data(jobject obj) : ::org::orekit::files::ccsds::section::Section(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Data(const Data& obj) : ::org::orekit::files::ccsds::section::Section(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(Data);
          extern PyTypeObject *PY_TYPE(Data);

          class t_Data {
          public:
            PyObject_HEAD
            Data object;
            static PyObject *wrap_Object(const Data&);
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
