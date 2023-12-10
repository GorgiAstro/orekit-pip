#ifndef org_orekit_forces_gravity_potential_SHMFormatReader_H
#define org_orekit_forces_gravity_potential_SHMFormatReader_H

#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"

namespace java {
  namespace text {
    class ParseException;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class RawSphericalHarmonicsProvider;
        }
      }
    }
    namespace errors {
      class OrekitException;
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

          class SHMFormatReader : public ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader {
           public:
            enum {
              mid_init$_d6df10f4e35ef1e8,
              mid_init$_b0bdaadf6311e767,
              mid_getProvider_fc0a96c558346426,
              mid_loadData_1815f85c118161ad,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SHMFormatReader(jobject obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SHMFormatReader(const SHMFormatReader& obj) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(obj) {}

            SHMFormatReader(const ::java::lang::String &, jboolean);
            SHMFormatReader(const ::java::lang::String &, jboolean, const ::org::orekit::time::TimeScale &);

            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider getProvider(jboolean, jint, jint) const;
            void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(SHMFormatReader);
          extern PyTypeObject *PY_TYPE(SHMFormatReader);

          class t_SHMFormatReader {
          public:
            PyObject_HEAD
            SHMFormatReader object;
            static PyObject *wrap_Object(const SHMFormatReader&);
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
