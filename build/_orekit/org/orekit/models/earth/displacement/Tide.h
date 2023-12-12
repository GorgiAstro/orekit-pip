#ifndef org_orekit_models_earth_displacement_Tide_H
#define org_orekit_models_earth_displacement_Tide_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class BodiesElements;
    }
    namespace models {
      namespace earth {
        namespace displacement {
          class Tide;
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
    namespace models {
      namespace earth {
        namespace displacement {

          class Tide : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a3da1a935cb37f7b,
              mid_init$_b02282271d2e33e3,
              mid_equals_221e8e85cb385209,
              mid_getDelaunayMultipliers_1b41cf9ebf653611,
              mid_getDoodsonMultipliers_1b41cf9ebf653611,
              mid_getDoodsonNumber_412668abc8d889e9,
              mid_getPhase_645226ccf45fca25,
              mid_getRate_645226ccf45fca25,
              mid_getTauMultiplier_412668abc8d889e9,
              mid_hashCode_412668abc8d889e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Tide(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Tide(const Tide& obj) : ::java::lang::Object(obj) {}

            static Tide *K1;
            static Tide *K2;
            static Tide *M2;
            static Tide *MF;
            static Tide *MM;
            static Tide *N2;
            static Tide *O1;
            static Tide *P1;
            static Tide *Q1;
            static Tide *S2;
            static Tide *SSA;

            Tide(jint);
            Tide(jint, jint, jint, jint, jint, jint);

            jboolean equals(const ::java::lang::Object &) const;
            JArray< jint > getDelaunayMultipliers() const;
            JArray< jint > getDoodsonMultipliers() const;
            jint getDoodsonNumber() const;
            jdouble getPhase(const ::org::orekit::data::BodiesElements &) const;
            jdouble getRate(const ::org::orekit::data::BodiesElements &) const;
            jint getTauMultiplier() const;
            jint hashCode() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {
          extern PyType_Def PY_TYPE_DEF(Tide);
          extern PyTypeObject *PY_TYPE(Tide);

          class t_Tide {
          public:
            PyObject_HEAD
            Tide object;
            static PyObject *wrap_Object(const Tide&);
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
