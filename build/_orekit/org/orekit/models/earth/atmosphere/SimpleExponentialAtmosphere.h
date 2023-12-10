#ifndef org_orekit_models_earth_atmosphere_SimpleExponentialAtmosphere_H
#define org_orekit_models_earth_atmosphere_SimpleExponentialAtmosphere_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
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
              mid_init$_d4e71ef1b50c73de,
              mid_getDensity_f7d7785230311c38,
              mid_getDensity_b79d75c1a8af7374,
              mid_getFrame_b86f9f61d97a7244,
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
