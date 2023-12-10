#ifndef org_orekit_files_ccsds_section_PythonSection_H
#define org_orekit_files_ccsds_section_PythonSection_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Section;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          class PythonSection : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_finalize_7ae3461a92a43152,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              mid_validate_77e0f9a1f260e2e5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSection(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonSection(const PythonSection& obj) : ::java::lang::Object(obj) {}

            PythonSection();

            void finalize() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonSection);
          extern PyTypeObject *PY_TYPE(PythonSection);

          class t_PythonSection {
          public:
            PyObject_HEAD
            PythonSection object;
            static PyObject *wrap_Object(const PythonSection&);
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
