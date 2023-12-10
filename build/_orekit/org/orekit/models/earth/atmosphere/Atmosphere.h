#ifndef org_orekit_models_earth_atmosphere_Atmosphere_H
#define org_orekit_models_earth_atmosphere_Atmosphere_H

#include "java/io/Serializable.h"

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
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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

          class Atmosphere : public ::java::io::Serializable {
           public:
            enum {
              mid_getDensity_b79d75c1a8af7374,
              mid_getDensity_f7d7785230311c38,
              mid_getFrame_b86f9f61d97a7244,
              mid_getVelocity_417ea3d5e6de26e5,
              mid_getVelocity_b4b015cfdb3a2ead,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Atmosphere(jobject obj) : ::java::io::Serializable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Atmosphere(const Atmosphere& obj) : ::java::io::Serializable(obj) {}

            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::frames::Frame getFrame() const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getVelocity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getVelocity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
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
          extern PyType_Def PY_TYPE_DEF(Atmosphere);
          extern PyTypeObject *PY_TYPE(Atmosphere);

          class t_Atmosphere {
          public:
            PyObject_HEAD
            Atmosphere object;
            static PyObject *wrap_Object(const Atmosphere&);
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
