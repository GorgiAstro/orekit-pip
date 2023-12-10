#ifndef org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace data {
      class DataContext;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GLONASSAnalyticalPropagator;
          namespace data {
            class GLONASSOrbitalElements;
          }
          class GLONASSAnalyticalPropagatorBuilder;
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

          class GLONASSAnalyticalPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_183861cbf0d9945f,
              mid_init$_56293db501ad92f7,
              mid_attitudeProvider_184750cdd45119eb,
              mid_build_5d976fca9b951997,
              mid_dataContext_c0d5aa11f06abeb8,
              mid_ecef_2646c6f81a724dc0,
              mid_eci_2646c6f81a724dc0,
              mid_mass_0c73a5bd5a537990,
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
