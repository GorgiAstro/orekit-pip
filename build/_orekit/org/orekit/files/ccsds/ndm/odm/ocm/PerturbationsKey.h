#ifndef org_orekit_files_ccsds_ndm_odm_ocm_PerturbationsKey_H
#define org_orekit_files_ccsds_ndm_odm_ocm_PerturbationsKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class Perturbations;
              class PerturbationsKey;
            }
          }
        }
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
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
          namespace odm {
            namespace ocm {

              class PerturbationsKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_e65141ab119b8814,
                  mid_valueOf_c28be20ab826a1c8,
                  mid_values_87072604c96b475c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PerturbationsKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PerturbationsKey(const PerturbationsKey& obj) : ::java::lang::Enum(obj) {}

                static PerturbationsKey *ALBEDO_GRID_SIZE;
                static PerturbationsKey *ALBEDO_MODEL;
                static PerturbationsKey *ATMOSPHERIC_MODEL;
                static PerturbationsKey *CENTRAL_BODY_ROTATION;
                static PerturbationsKey *COMMENT;
                static PerturbationsKey *EQUATORIAL_RADIUS;
                static PerturbationsKey *FIXED_F10P7;
                static PerturbationsKey *FIXED_F10P7_MEAN;
                static PerturbationsKey *FIXED_GEOMAG_AP;
                static PerturbationsKey *FIXED_GEOMAG_DST;
                static PerturbationsKey *FIXED_GEOMAG_KP;
                static PerturbationsKey *FIXED_M10P7;
                static PerturbationsKey *FIXED_M10P7_MEAN;
                static PerturbationsKey *FIXED_S10P7;
                static PerturbationsKey *FIXED_S10P7_MEAN;
                static PerturbationsKey *FIXED_Y10P7;
                static PerturbationsKey *FIXED_Y10P7_MEAN;
                static PerturbationsKey *GM;
                static PerturbationsKey *GRAVITY_MODEL;
                static PerturbationsKey *N_BODY_PERTURBATIONS;
                static PerturbationsKey *OBLATE_FLATTENING;
                static PerturbationsKey *OCEAN_TIDES_MODEL;
                static PerturbationsKey *REDUCTION_THEORY;
                static PerturbationsKey *SHADOW_BODIES;
                static PerturbationsKey *SHADOW_MODEL;
                static PerturbationsKey *SOLID_TIDES_MODEL;
                static PerturbationsKey *SRP_MODEL;
                static PerturbationsKey *SW_DATA_EPOCH;
                static PerturbationsKey *SW_DATA_SOURCE;
                static PerturbationsKey *SW_INTERP_METHOD;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations &) const;
                static PerturbationsKey valueOf(const ::java::lang::String &);
                static JArray< PerturbationsKey > values();
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
              extern PyType_Def PY_TYPE_DEF(PerturbationsKey);
              extern PyTypeObject *PY_TYPE(PerturbationsKey);

              class t_PerturbationsKey {
              public:
                PyObject_HEAD
                PerturbationsKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_PerturbationsKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const PerturbationsKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const PerturbationsKey&, PyTypeObject *);
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
