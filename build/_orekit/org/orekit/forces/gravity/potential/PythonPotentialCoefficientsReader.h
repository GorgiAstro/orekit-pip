#ifndef org_orekit_forces_gravity_potential_PythonPotentialCoefficientsReader_H
#define org_orekit_forces_gravity_potential_PythonPotentialCoefficientsReader_H

#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
  namespace text {
    class ParseException;
  }
}
namespace org {
  namespace orekit {
    namespace errors {
      class OrekitException;
    }
    namespace time {
      class TimeScale;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonPotentialCoefficientsReader : public ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader {
           public:
            enum {
              mid_init$_d1dd1bdcf55f8f80,
              mid_init$_ead6ed0365e2cf97,
              mid_finalize_7ae3461a92a43152,
              mid_getProvider_086897fc27688c23,
              mid_loadData_ec60cb5f4b3de555,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonPotentialCoefficientsReader(jobject obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonPotentialCoefficientsReader(const PythonPotentialCoefficientsReader& obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {}

            PythonPotentialCoefficientsReader(const ::java::lang::String &, jboolean);
            PythonPotentialCoefficientsReader(const ::java::lang::String &, jboolean, const ::org::orekit::time::TimeScale &);

            void finalize() const;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider getProvider(jboolean, jint, jint) const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          extern PyType_Def PY_TYPE_DEF(PythonPotentialCoefficientsReader);
          extern PyTypeObject *PY_TYPE(PythonPotentialCoefficientsReader);

          class t_PythonPotentialCoefficientsReader {
          public:
            PyObject_HEAD
            PythonPotentialCoefficientsReader object;
            static PyObject *wrap_Object(const PythonPotentialCoefficientsReader&);
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
