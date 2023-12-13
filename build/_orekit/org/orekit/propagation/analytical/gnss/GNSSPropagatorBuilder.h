#ifndef org_orekit_propagation_analytical_gnss_GNSSPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GNSSPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frames;
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GNSSOrbitalElements;
          }
          class GNSSPropagatorBuilder;
          class GNSSPropagator;
        }
      }
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
              mid_init$_ceb2ea47ff26bdd1,
              mid_init$_859fd1cc240fae53,
              mid_attitudeProvider_b7f49a5813c61806,
              mid_build_8528f550d471e3fb,
              mid_ecef_4cd46368b47fb66d,
              mid_eci_4cd46368b47fb66d,
              mid_mass_bbe098d1d86d30b6,
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
