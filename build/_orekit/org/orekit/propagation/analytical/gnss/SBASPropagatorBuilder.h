#ifndef org_orekit_propagation_analytical_gnss_SBASPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_SBASPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class SBASOrbitalElements;
          }
          class SBASPropagator;
          class SBASPropagatorBuilder;
        }
      }
    }
    namespace frames {
      class Frame;
      class Frames;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          class SBASPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7d9236b5f915634d,
              mid_init$_ecd9971eb173b1e6,
              mid_attitudeProvider_ceb94e6a435ccfe4,
              mid_build_9dcd848e51dbc12c,
              mid_ecef_4281a789e39824cd,
              mid_eci_4281a789e39824cd,
              mid_mass_3d6615b27cea640d,
              mid_mu_3d6615b27cea640d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SBASPropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SBASPropagatorBuilder(const SBASPropagatorBuilder& obj) : ::java::lang::Object(obj) {}

            SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements &);
            SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements &, const ::org::orekit::frames::Frames &);

            SBASPropagatorBuilder attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
            ::org::orekit::propagation::analytical::gnss::SBASPropagator build() const;
            SBASPropagatorBuilder ecef(const ::org::orekit::frames::Frame &) const;
            SBASPropagatorBuilder eci(const ::org::orekit::frames::Frame &) const;
            SBASPropagatorBuilder mass(jdouble) const;
            SBASPropagatorBuilder mu(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(SBASPropagatorBuilder);
          extern PyTypeObject *PY_TYPE(SBASPropagatorBuilder);

          class t_SBASPropagatorBuilder {
          public:
            PyObject_HEAD
            SBASPropagatorBuilder object;
            static PyObject *wrap_Object(const SBASPropagatorBuilder&);
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
