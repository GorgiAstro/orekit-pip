#ifndef org_orekit_models_earth_atmosphere_JB2008_H
#define org_orekit_models_earth_atmosphere_JB2008_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class JB2008InputParameters;
          class Atmosphere;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
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

          class JB2008 : public ::java::lang::Object {
           public:
            enum {
              mid_init$_484c8e9da5fa8d7b,
              mid_init$_5bd6ec19bbd33cac,
              mid_getDensity_65e73ef68b3713d0,
              mid_getDensity_0c5821935d445848,
              mid_getDensity_5e992d22425b7e63,
              mid_getDensity_87efe855fe9ad812,
              mid_getFrame_cb151471db4570f0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JB2008(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JB2008(const JB2008& obj) : ::java::lang::Object(obj) {}

            JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::BodyShape &);
            JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::bodies::BodyShape &, const ::org::orekit::time::TimeScale &);

            jdouble getDensity(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &) const;
            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &) const;
            jdouble getDensity(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
            ::org::hipparchus::CalculusFieldElement getDensity(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(JB2008);
          extern PyTypeObject *PY_TYPE(JB2008);

          class t_JB2008 {
          public:
            PyObject_HEAD
            JB2008 object;
            static PyObject *wrap_Object(const JB2008&);
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
