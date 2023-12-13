#ifndef org_orekit_files_rinex_observation_PhaseShiftCorrection_H
#define org_orekit_files_rinex_observation_PhaseShiftCorrection_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      class ObservationType;
      class SatInSystem;
    }
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
              mid_init$_125d8c5f455d179a,
              mid_getCorrection_b74f83833fdad017,
              mid_getSatelliteSystem_21bd759cc4a81606,
              mid_getSatsCorrected_e62d3bb06d56d7e3,
              mid_getTypeObs_eeb5027d2516140e,
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
