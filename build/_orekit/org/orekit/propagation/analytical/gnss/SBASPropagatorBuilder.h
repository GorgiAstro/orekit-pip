#ifndef org_orekit_propagation_analytical_gnss_SBASPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_SBASPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frames;
      class Frame;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class SBASPropagatorBuilder;
          namespace data {
            class SBASOrbitalElements;
          }
          class SBASPropagator;
        }
      }
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
              mid_init$_87df8357a61486e2,
              mid_init$_4c7e21fae59e307a,
              mid_attitudeProvider_9a3d3b897b0e774d,
              mid_build_21e9d28a362393d1,
              mid_ecef_241de516bb56d0cf,
              mid_eci_241de516bb56d0cf,
              mid_mass_ed67a0d366e1e069,
              mid_mu_ed67a0d366e1e069,
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
