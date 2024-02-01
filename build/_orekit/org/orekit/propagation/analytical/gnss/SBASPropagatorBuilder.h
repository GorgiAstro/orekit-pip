#ifndef org_orekit_propagation_analytical_gnss_SBASPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_SBASPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class SBASPropagatorBuilder;
          class SBASPropagator;
          namespace data {
            class SBASOrbitalElements;
          }
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

          class SBASPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b926db973ee83706,
              mid_init$_9ae1a3b0462fbfca,
              mid_attitudeProvider_4e00e841ad2fae9c,
              mid_build_570e6e91a72444e8,
              mid_ecef_11eb0910bc606357,
              mid_eci_11eb0910bc606357,
              mid_mass_5a4d5575dd4e698b,
              mid_mu_5a4d5575dd4e698b,
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
