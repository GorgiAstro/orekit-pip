#ifndef org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GLONASSAnalyticalPropagatorBuilder;
          class GLONASSAnalyticalPropagator;
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
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

          class GLONASSAnalyticalPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b15ec496e48d0936,
              mid_init$_5f7a1029b2026edb,
              mid_attitudeProvider_5161c4867b6c9b7a,
              mid_build_169032d2e880ec70,
              mid_dataContext_719680c7bc93c412,
              mid_ecef_1923bef8f3c0f59d,
              mid_eci_1923bef8f3c0f59d,
              mid_mass_72536a18f7ecd06d,
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
