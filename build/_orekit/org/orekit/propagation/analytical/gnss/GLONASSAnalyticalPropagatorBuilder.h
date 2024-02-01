#ifndef org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GLONASSAnalyticalPropagatorBuilder;
          namespace data {
            class GLONASSOrbitalElements;
          }
          class GLONASSAnalyticalPropagator;
        }
      }
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
              mid_init$_8cfe861a120d83e2,
              mid_init$_881c34b49df9a181,
              mid_attitudeProvider_65c004b941089ba2,
              mid_build_395024687c74c4c6,
              mid_dataContext_091acec42a6d0ecf,
              mid_ecef_c748be95531a2fb3,
              mid_eci_c748be95531a2fb3,
              mid_mass_7b189fc5d473ede6,
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
