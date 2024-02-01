#ifndef org_orekit_models_earth_atmosphere_SimpleExponentialAtmosphere_H
#define org_orekit_models_earth_atmosphere_SimpleExponentialAtmosphere_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class Atmosphere;
        }
      }
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
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
        namespace atmosphere {

          class SimpleExponentialAtmosphere : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c088c92448e957e8,
              mid_getDensity_65e73ef68b3713d0,
              mid_getDensity_0c5821935d445848,
              mid_getFrame_cb151471db4570f0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleExponentialAtmosphere(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleExponentialAtmosphere(const SimpleExponentialAtmosphere& obj) : ::java::lang::Object(obj) {}

            SimpleExponentialAtmosphere(const ::org::orekit::bodies::BodyShape &, jdouble, jdouble, jdouble);

            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::frames::Frame getFrame() const;
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
        namespace atmosphere {
          extern PyType_Def PY_TYPE_DEF(SimpleExponentialAtmosphere);
          extern PyTypeObject *PY_TYPE(SimpleExponentialAtmosphere);

          class t_SimpleExponentialAtmosphere {
          public:
            PyObject_HEAD
            SimpleExponentialAtmosphere object;
            static PyObject *wrap_Object(const SimpleExponentialAtmosphere&);
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
