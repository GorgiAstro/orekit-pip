#ifndef org_orekit_propagation_analytical_gnss_GNSSPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GNSSPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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

          class GNSSPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_95c068f7789f9f41,
              mid_init$_37da3277b080f0fa,
              mid_attitudeProvider_6eb1a8219a109e62,
              mid_build_6d7baa04e9d5997e,
              mid_ecef_ed557929d63f77b1,
              mid_eci_ed557929d63f77b1,
              mid_mass_6ac915d03a72089c,
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
