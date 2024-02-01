#ifndef org_orekit_propagation_analytical_gnss_GNSSPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GNSSPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GNSSPropagatorBuilder;
          namespace data {
            class GNSSOrbitalElements;
          }
          class GNSSPropagator;
        }
      }
    }
    namespace frames {
      class Frames;
      class Frame;
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

          class GNSSPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e486afe640c27b3f,
              mid_init$_d621175428643f32,
              mid_attitudeProvider_c9da922fc0601232,
              mid_build_75cb4356e458488d,
              mid_ecef_61ac2d2d8a5b0c9c,
              mid_eci_61ac2d2d8a5b0c9c,
              mid_mass_34f40b3c62a1649f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GNSSPropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GNSSPropagatorBuilder(const GNSSPropagatorBuilder& obj) : ::java::lang::Object(obj) {}

            GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements &);
            GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements &, const ::org::orekit::frames::Frames &);

            GNSSPropagatorBuilder attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
            ::org::orekit::propagation::analytical::gnss::GNSSPropagator build() const;
            GNSSPropagatorBuilder ecef(const ::org::orekit::frames::Frame &) const;
            GNSSPropagatorBuilder eci(const ::org::orekit::frames::Frame &) const;
            GNSSPropagatorBuilder mass(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GNSSPropagatorBuilder);
          extern PyTypeObject *PY_TYPE(GNSSPropagatorBuilder);

          class t_GNSSPropagatorBuilder {
          public:
            PyObject_HEAD
            GNSSPropagatorBuilder object;
            static PyObject *wrap_Object(const GNSSPropagatorBuilder&);
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
