#ifndef org_orekit_forces_gravity_potential_PythonPotentialCoefficientsReader_H
#define org_orekit_forces_gravity_potential_PythonPotentialCoefficientsReader_H

#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
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
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
        }
      }
    }
    namespace time {
      class TimeScale;
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
              mid_init$_76cf8b957ccb7ae1,
              mid_init$_f201530b2ce67e89,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_getProvider_752316a4c911183b,
              mid_loadData_360461e719fb564c,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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
