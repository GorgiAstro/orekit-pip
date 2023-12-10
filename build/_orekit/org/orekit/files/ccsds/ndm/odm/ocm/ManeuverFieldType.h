#ifndef org_orekit_files_ccsds_ndm_odm_ocm_ManeuverFieldType_H
#define org_orekit_files_ccsds_ndm_odm_ocm_ManeuverFieldType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ManeuverFieldType;
              class OrbitManeuver;
            }
          }
        }
        namespace utils {
          class ContextBinding;
        }
        namespace definitions {
          class TimeConverter;
        }
      }
    }
    namespace utils {
      namespace units {
        class Unit;
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
          namespace odm {
            namespace ocm {

              class ManeuverFieldType : public ::java::lang::Enum {
               public:
                enum {
                  mid_checkUnit_dcad81dd7d926924,
                  mid_getUnit_196b004fd4585106,
                  mid_isTime_e470b6d9e0d979db,
                  mid_outputField_aee2986e9e2d08c6,
                  mid_process_c69ffcd75e03c815,
                  mid_valueOf_b1ddf045105c6ed8,
                  mid_values_56f48c168f29dc17,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ManeuverFieldType(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ManeuverFieldType(const ManeuverFieldType& obj) : ::java::lang::Enum(obj) {}

                static ManeuverFieldType *ACC_DIR_SIGMA;
                static ManeuverFieldType *ACC_INTERP;
                static ManeuverFieldType *ACC_MAG_SIGMA;
                static ManeuverFieldType *ACC_X;
                static ManeuverFieldType *ACC_Y;
                static ManeuverFieldType *ACC_Z;
                static ManeuverFieldType *DELTA_MASS;
                static ManeuverFieldType *DEPLOY_DIR_SIGMA;
                static ManeuverFieldType *DEPLOY_DV_CDA;
                static ManeuverFieldType *DEPLOY_DV_RATIO;
                static ManeuverFieldType *DEPLOY_DV_SIGMA;
                static ManeuverFieldType *DEPLOY_DV_X;
                static ManeuverFieldType *DEPLOY_DV_Y;
                static ManeuverFieldType *DEPLOY_DV_Z;
                static ManeuverFieldType *DEPLOY_ID;
                static ManeuverFieldType *DEPLOY_MASS;
                static ManeuverFieldType *DV_DIR_SIGMA;
                static ManeuverFieldType *DV_MAG_SIGMA;
                static ManeuverFieldType *DV_X;
                static ManeuverFieldType *DV_Y;
                static ManeuverFieldType *DV_Z;
                static ManeuverFieldType *MAN_DURA;
                static ManeuverFieldType *THR_DIR_SIGMA;
                static ManeuverFieldType *THR_EFFIC;
                static ManeuverFieldType *THR_INTERP;
                static ManeuverFieldType *THR_ISP;
                static ManeuverFieldType *THR_MAG_SIGMA;
                static ManeuverFieldType *THR_X;
                static ManeuverFieldType *THR_Y;
                static ManeuverFieldType *THR_Z;
                static ManeuverFieldType *TIME_ABSOLUTE;
                static ManeuverFieldType *TIME_RELATIVE;

                void checkUnit(const ::org::orekit::utils::units::Unit &) const;
                ::org::orekit::utils::units::Unit getUnit() const;
                jboolean isTime() const;
                ::java::lang::String outputField(const ::org::orekit::files::ccsds::definitions::TimeConverter &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver &) const;
                void process(const ::java::lang::String &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver &, jint, const ::java::lang::String &) const;
                static ManeuverFieldType valueOf(const ::java::lang::String &);
                static JArray< ManeuverFieldType > values();
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(ManeuverFieldType);
              extern PyTypeObject *PY_TYPE(ManeuverFieldType);

              class t_ManeuverFieldType {
              public:
                PyObject_HEAD
                ManeuverFieldType object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ManeuverFieldType *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ManeuverFieldType&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ManeuverFieldType&, PyTypeObject *);
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
