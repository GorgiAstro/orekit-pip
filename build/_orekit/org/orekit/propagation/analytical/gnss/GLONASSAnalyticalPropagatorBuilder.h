#ifndef org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GLONASSAnalyticalPropagator;
          class GLONASSAnalyticalPropagatorBuilder;
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
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

          class GLONASSAnalyticalPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_752f6b4fdbdecce8,
              mid_init$_43713a1d84688c13,
              mid_attitudeProvider_5eb5916d3a1c42f6,
              mid_build_a20cc0364c67b639,
              mid_dataContext_c1ccd2f08417a7d9,
              mid_ecef_83c60995750138bf,
              mid_eci_83c60995750138bf,
              mid_mass_377a6df559a9f937,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GLONASSAnalyticalPropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GLONASSAnalyticalPropagatorBuilder(const GLONASSAnalyticalPropagatorBuilder& obj) : ::java::lang::Object(obj) {}

            GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements &);
            GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements &, const ::org::orekit::data::DataContext &);

            GLONASSAnalyticalPropagatorBuilder attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator build() const;
            GLONASSAnalyticalPropagatorBuilder dataContext(const ::org::orekit::data::DataContext &) const;
            GLONASSAnalyticalPropagatorBuilder ecef(const ::org::orekit::frames::Frame &) const;
            GLONASSAnalyticalPropagatorBuilder eci(const ::org::orekit::frames::Frame &) const;
            GLONASSAnalyticalPropagatorBuilder mass(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GLONASSAnalyticalPropagatorBuilder);
          extern PyTypeObject *PY_TYPE(GLONASSAnalyticalPropagatorBuilder);

          class t_GLONASSAnalyticalPropagatorBuilder {
          public:
            PyObject_HEAD
            GLONASSAnalyticalPropagatorBuilder object;
            static PyObject *wrap_Object(const GLONASSAnalyticalPropagatorBuilder&);
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
