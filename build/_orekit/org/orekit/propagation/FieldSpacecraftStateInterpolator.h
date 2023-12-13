#ifndef org_orekit_propagation_FieldSpacecraftStateInterpolator_H
#define org_orekit_propagation_FieldSpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeInterpolator;
      class FieldTimeStamped;
      class TimeStampedField;
    }
    namespace attitudes {
      class FieldAttitude;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class FieldAbsolutePVCoordinates;
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class FieldSpacecraftStateInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_237ae1c2ddd68062,
          mid_init$_92e0516c51076c2f,
          mid_init$_9fa6786ed88e4116,
          mid_init$_9188826e4203adb2,
          mid_init$_4e698ca934323ab9,
          mid_init$_f14b078adca14f3b,
          mid_getAbsPVAInterpolator_9fe5189c8c3b230d,
          mid_getAdditionalStateInterpolator_9fe5189c8c3b230d,
          mid_getAttitudeInterpolator_9fe5189c8c3b230d,
          mid_getMassInterpolator_9fe5189c8c3b230d,
          mid_getNbInterpolationPoints_55546ef6a647f39b,
          mid_getOrbitInterpolator_9fe5189c8c3b230d,
          mid_getOutputFrame_2c51111cc6894ba1,
          mid_getSubInterpolators_e62d3bb06d56d7e3,
          mid_interpolate_c544f35060fb7c93,
          mid_interpolate_00b61fcbde9783bc,
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
