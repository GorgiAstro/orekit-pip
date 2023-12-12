#ifndef org_orekit_propagation_FieldSpacecraftStateInterpolator_H
#define org_orekit_propagation_FieldSpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldAbsolutePVCoordinates;
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeInterpolator;
      class TimeStampedField;
      class FieldTimeStamped;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class FieldAttitude;
    }
    namespace orbits {
      class FieldOrbit;
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
    class Optional;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class FieldSpacecraftStateInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_535d1f91a93c8b4d,
          mid_init$_03d00ffd0ee81fe0,
          mid_init$_e69fe3991d4122f6,
          mid_init$_3eb98fb434e9f71a,
          mid_init$_93057eaba5c5145b,
          mid_init$_08bab9dd5568148d,
          mid_getAbsPVAInterpolator_d0ccac9b4c6bdd55,
          mid_getAdditionalStateInterpolator_d0ccac9b4c6bdd55,
          mid_getAttitudeInterpolator_d0ccac9b4c6bdd55,
          mid_getMassInterpolator_d0ccac9b4c6bdd55,
          mid_getNbInterpolationPoints_412668abc8d889e9,
          mid_getOrbitInterpolator_d0ccac9b4c6bdd55,
          mid_getOutputFrame_6c9bc0a928c56d4e,
          mid_getSubInterpolators_0d9551367f7ecdef,
          mid_interpolate_8216054f5ace4033,
          mid_interpolate_d78defbfa7b71041,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldSpacecraftStateInterpolator(jobject obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldSpacecraftStateInterpolator(const FieldSpacecraftStateInterpolator& obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {}

        FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame &);
        FieldSpacecraftStateInterpolator(jint, const ::org::orekit::frames::Frame &);
        FieldSpacecraftStateInterpolator(jint, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);
        FieldSpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);
        FieldSpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &);
        FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldTimeInterpolator &, const ::org::orekit::time::FieldTimeInterpolator &, const ::org::orekit::time::FieldTimeInterpolator &, const ::org::orekit::time::FieldTimeInterpolator &, const ::org::orekit::time::FieldTimeInterpolator &);

        ::java::util::Optional getAbsPVAInterpolator() const;
        ::java::util::Optional getAdditionalStateInterpolator() const;
        ::java::util::Optional getAttitudeInterpolator() const;
        ::java::util::Optional getMassInterpolator() const;
        jint getNbInterpolationPoints() const;
        ::java::util::Optional getOrbitInterpolator() const;
        ::org::orekit::frames::Frame getOutputFrame() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::propagation::FieldSpacecraftState interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Collection &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldSpacecraftStateInterpolator);
      extern PyTypeObject *PY_TYPE(FieldSpacecraftStateInterpolator);

      class t_FieldSpacecraftStateInterpolator {
      public:
        PyObject_HEAD
        FieldSpacecraftStateInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldSpacecraftStateInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldSpacecraftStateInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldSpacecraftStateInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
