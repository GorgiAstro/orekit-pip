#ifndef org_orekit_files_rinex_observation_PhaseShiftCorrection_H
#define org_orekit_files_rinex_observation_PhaseShiftCorrection_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatInSystem;
      class SatelliteSystem;
      class ObservationType;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          class PhaseShiftCorrection : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2c72c6e9e0881d7c,
              mid_getCorrection_dff5885c2c873297,
              mid_getSatelliteSystem_01acae5c1a253b8e,
              mid_getSatsCorrected_2afa36052df4765d,
              mid_getTypeObs_1d725002fa550800,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseShiftCorrection(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseShiftCorrection(const PhaseShiftCorrection& obj) : ::java::lang::Object(obj) {}

            PhaseShiftCorrection(const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::ObservationType &, jdouble, const ::java::util::List &);

            jdouble getCorrection() const;
            ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
            ::java::util::List getSatsCorrected() const;
            ::org::orekit::gnss::ObservationType getTypeObs() const;
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
      namespace rinex {
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(PhaseShiftCorrection);
          extern PyTypeObject *PY_TYPE(PhaseShiftCorrection);

          class t_PhaseShiftCorrection {
          public:
            PyObject_HEAD
            PhaseShiftCorrection object;
            static PyObject *wrap_Object(const PhaseShiftCorrection&);
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
