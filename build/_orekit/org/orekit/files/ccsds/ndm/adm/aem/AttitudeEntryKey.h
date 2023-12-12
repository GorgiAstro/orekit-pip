#ifndef org_orekit_files_ccsds_ndm_adm_aem_AttitudeEntryKey_H
#define org_orekit_files_ccsds_ndm_adm_aem_AttitudeEntryKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
        namespace ndm {
          namespace adm {
            namespace aem {
              class AttitudeEntryKey;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              class AttitudeEntryKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_valueOf_20d56872ce77efdf,
                  mid_values_270f0a9e5644cd9d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeEntryKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeEntryKey(const AttitudeEntryKey& obj) : ::java::lang::Enum(obj) {}

                static AttitudeEntryKey *ANGLE_1;
                static AttitudeEntryKey *ANGLE_1_DOT;
                static AttitudeEntryKey *ANGLE_2;
                static AttitudeEntryKey *ANGLE_2_DOT;
                static AttitudeEntryKey *ANGLE_3;
                static AttitudeEntryKey *ANGLE_3_DOT;
                static AttitudeEntryKey *ANGVEL_X;
                static AttitudeEntryKey *ANGVEL_Y;
                static AttitudeEntryKey *ANGVEL_Z;
                static AttitudeEntryKey *EPOCH;
                static AttitudeEntryKey *MOMENTUM_ALPHA;
                static AttitudeEntryKey *MOMENTUM_DELTA;
                static AttitudeEntryKey *NUTATION;
                static AttitudeEntryKey *NUTATION_PER;
                static AttitudeEntryKey *NUTATION_PHASE;
                static AttitudeEntryKey *NUTATION_VEL;
                static AttitudeEntryKey *Q1;
                static AttitudeEntryKey *Q1_DOT;
                static AttitudeEntryKey *Q2;
                static AttitudeEntryKey *Q2_DOT;
                static AttitudeEntryKey *Q3;
                static AttitudeEntryKey *Q3_DOT;
                static AttitudeEntryKey *QC;
                static AttitudeEntryKey *QC_DOT;
                static AttitudeEntryKey *SPIN_ALPHA;
                static AttitudeEntryKey *SPIN_ANGLE;
                static AttitudeEntryKey *SPIN_ANGLE_VEL;
                static AttitudeEntryKey *SPIN_DELTA;
                static AttitudeEntryKey *X_ANGLE;
                static AttitudeEntryKey *X_RATE;
                static AttitudeEntryKey *Y_ANGLE;
                static AttitudeEntryKey *Y_RATE;
                static AttitudeEntryKey *Z_ANGLE;
                static AttitudeEntryKey *Z_RATE;
                static AttitudeEntryKey *angVel;
                static AttitudeEntryKey *eulerAngle;
                static AttitudeEntryKey *eulerAngleAngVel;
                static AttitudeEntryKey *eulerAngleDerivative;
                static AttitudeEntryKey *eulerAngleRate;
                static AttitudeEntryKey *quaternion;
                static AttitudeEntryKey *quaternionAngVel;
                static AttitudeEntryKey *quaternionDerivative;
                static AttitudeEntryKey *quaternionDot;
                static AttitudeEntryKey *quaternionEphemeris;
                static AttitudeEntryKey *quaternionEulerRate;
                static AttitudeEntryKey *quaternionRate;
                static AttitudeEntryKey *quaternionState;
                static AttitudeEntryKey *rotationAngles;
                static AttitudeEntryKey *rotationRates;
                static AttitudeEntryKey *spin;
                static AttitudeEntryKey *spinNutation;
                static AttitudeEntryKey *spinNutationMom;

                static AttitudeEntryKey valueOf(const ::java::lang::String &);
                static JArray< AttitudeEntryKey > values();
              };
            }
          }
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
        namespace ndm {
          namespace adm {
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AttitudeEntryKey);
              extern PyTypeObject *PY_TYPE(AttitudeEntryKey);

              class t_AttitudeEntryKey {
              public:
                PyObject_HEAD
                AttitudeEntryKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudeEntryKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudeEntryKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudeEntryKey&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
