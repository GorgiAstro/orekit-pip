#ifndef org_orekit_forces_maneuvers_propulsion_PolynomialThrustSegment_H
#define org_orekit_forces_maneuvers_propulsion_PolynomialThrustSegment_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
    }
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class PolynomialThrustSegment : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e21e77cc42229f60,
              mid_getThrustVector_71c51b45829333ce,
              mid_getThrustVector_11a4be79061d1fe3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PolynomialThrustSegment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PolynomialThrustSegment(const PolynomialThrustSegment& obj) : ::java::lang::Object(obj) {}

            PolynomialThrustSegment(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::analysis::polynomials::PolynomialFunction &, const ::org::hipparchus::analysis::polynomials::PolynomialFunction &, const ::org::hipparchus::analysis::polynomials::PolynomialFunction &);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getThrustVector(const ::org::orekit::time::FieldAbsoluteDate &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          extern PyType_Def PY_TYPE_DEF(PolynomialThrustSegment);
          extern PyTypeObject *PY_TYPE(PolynomialThrustSegment);

          class t_PolynomialThrustSegment {
          public:
            PyObject_HEAD
            PolynomialThrustSegment object;
            static PyObject *wrap_Object(const PolynomialThrustSegment&);
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
