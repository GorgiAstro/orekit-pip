#ifndef org_orekit_propagation_analytical_gnss_SBASPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_SBASPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
              mid_init$_7bd6f9e81a7105f8,
              mid_init$_945420a0972f4b1f,
              mid_attitudeProvider_0952149c61182d46,
              mid_build_70869a450ee7c848,
              mid_ecef_2b14ec5f74b35e8d,
              mid_eci_2b14ec5f74b35e8d,
              mid_mass_d0414e7e79d1c862,
              mid_mu_d0414e7e79d1c862,
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
