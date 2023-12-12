#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TabulatedProvider.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedProvider::class$ = NULL;
      jmethodID *TabulatedProvider::mids$ = NULL;
      bool TabulatedProvider::live$ = false;

      jclass TabulatedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d4ab58533b5cef5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_0f67a1b319521d8a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/attitudes/AttitudeBuilder;)V");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedProvider::TabulatedProvider(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d4ab58533b5cef5, a0.this$, a1.this$, a2, a3.this$)) {}

      TabulatedProvider::TabulatedProvider(const ::java::util::List & a0, jint a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::attitudes::AttitudeBuilder & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f67a1b319521d8a, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::attitudes::Attitude TabulatedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude TabulatedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args);
      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data);
      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data);
      static PyGetSetDef t_TabulatedProvider__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedProvider, maxDate),
        DECLARE_GET_FIELD(t_TabulatedProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedProvider__methods_[] = {
        DECLARE_METHOD(t_TabulatedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedProvider)[] = {
        { Py_tp_methods, t_TabulatedProvider__methods_ },
        { Py_tp_init, (void *) t_TabulatedProvider_init_ },
        { Py_tp_getset, t_TabulatedProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedProvider, t_TabulatedProvider, TabulatedProvider);

      void t_TabulatedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedProvider), &PY_TYPE_DEF(TabulatedProvider), module, "TabulatedProvider", 0);
      }

      void t_TabulatedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "class_", make_descriptor(TabulatedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "wrapfn_", make_descriptor(t_TabulatedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedProvider::initializeClass, 1)))
          return NULL;
        return t_TabulatedProvider::wrap_Object(TabulatedProvider(((t_TabulatedProvider *) arg)->object.this$));
      }
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::attitudes::AttitudeBuilder a5((jobject) NULL);
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "KIKkkk", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeBuilder::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *PowerTerm::class$ = NULL;
        jmethodID *PowerTerm::mids$ = NULL;
        bool PowerTerm::live$ = false;

        jclass PowerTerm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/PowerTerm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getBase_a1a7f0c25ade1939] = env->getMethodID(cls, "getBase", "()Ljava/lang/CharSequence;");
            mids$[mid_getExponent_78ed58163a805805] = env->getMethodID(cls, "getExponent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::CharSequence PowerTerm::getBase() const
        {
          return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_getBase_a1a7f0c25ade1939]));
        }

        ::org::hipparchus::fraction::Fraction PowerTerm::getExponent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getExponent_78ed58163a805805]));
        }

        jdouble PowerTerm::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self);
        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data);
        static PyGetSetDef t_PowerTerm__fields_[] = {
          DECLARE_GET_FIELD(t_PowerTerm, base),
          DECLARE_GET_FIELD(t_PowerTerm, exponent),
          DECLARE_GET_FIELD(t_PowerTerm, scale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PowerTerm__methods_[] = {
          DECLARE_METHOD(t_PowerTerm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, getBase, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getScale, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PowerTerm)[] = {
          { Py_tp_methods, t_PowerTerm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PowerTerm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PowerTerm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PowerTerm, t_PowerTerm, PowerTerm);

        void t_PowerTerm::install(PyObject *module)
        {
          installType(&PY_TYPE(PowerTerm), &PY_TYPE_DEF(PowerTerm), module, "PowerTerm", 0);
        }

        void t_PowerTerm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "class_", make_descriptor(PowerTerm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "wrapfn_", make_descriptor(t_PowerTerm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PowerTerm::initializeClass, 1)))
            return NULL;
          return t_PowerTerm::wrap_Object(PowerTerm(((t_PowerTerm *) arg)->object.this$));
        }
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PowerTerm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self)
        {
          ::java::lang::CharSequence result((jobject) NULL);
          OBJ_CALL(result = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data)
        {
          ::java::lang::CharSequence value((jobject) NULL);
          OBJ_CALL(value = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/OceanTides.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *OceanTides::class$ = NULL;
        jmethodID *OceanTides::mids$ = NULL;
        bool OceanTides::live$ = false;
        jint OceanTides::DEFAULT_POINTS = (jint) 0;
        jdouble OceanTides::DEFAULT_STEP = (jdouble) 0;

        jclass OceanTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/OceanTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1837be424f5e21da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_fce18387073bd04d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_0a43ed81d0ca6cd3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;Lorg/orekit/forces/gravity/potential/GravityFields;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jint a3, jint a4, const ::org::orekit::utils::IERSConventions & a5, const ::org::orekit::time::UT1Scale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1837be424f5e21da, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fce18387073bd04d, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9, const ::org::orekit::forces::gravity::potential::GravityFields & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a43ed81d0ca6cd3, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$, a10.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OceanTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        jboolean OceanTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::stream::Stream OceanTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
        }

        ::java::util::stream::Stream OceanTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
        }

        ::java::util::List OceanTides::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args);
        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self);
        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self);
        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg);
        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self);
        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data);
        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data);
        static PyGetSetDef t_OceanTides__fields_[] = {
          DECLARE_GET_FIELD(t_OceanTides, eventDetectors),
          DECLARE_GET_FIELD(t_OceanTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OceanTides__methods_[] = {
          DECLARE_METHOD(t_OceanTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_OceanTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_OceanTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OceanTides)[] = {
          { Py_tp_methods, t_OceanTides__methods_ },
          { Py_tp_init, (void *) t_OceanTides_init_ },
          { Py_tp_getset, t_OceanTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OceanTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OceanTides, t_OceanTides, OceanTides);

        void t_OceanTides::install(PyObject *module)
        {
          installType(&PY_TYPE(OceanTides), &PY_TYPE_DEF(OceanTides), module, "OceanTides", 0);
        }

        void t_OceanTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "class_", make_descriptor(OceanTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "wrapfn_", make_descriptor(t_OceanTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(OceanTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_POINTS", make_descriptor(OceanTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_STEP", make_descriptor(OceanTides::DEFAULT_STEP));
        }

        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OceanTides::initializeClass, 1)))
            return NULL;
          return t_OceanTides::wrap_Object(OceanTides(((t_OceanTides *) arg)->object.this$));
        }
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OceanTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::utils::IERSConventions a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::orekit::time::UT1Scale a6((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              ::org::orekit::forces::gravity::potential::GravityFields a10((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9, &a10))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "java/lang/Iterable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/String.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbStation::class$ = NULL;
        jmethodID *DcbStation::mids$ = NULL;
        bool DcbStation::live$ = false;

        jclass DcbStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addDcb_3534a70b26a70401] = env->getMethodID(cls, "addDcb", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/sinex/Dcb;)V");
            mids$[mid_getAvailableSatelliteSystems_6cac7769b34554a7] = env->getMethodID(cls, "getAvailableSatelliteSystems", "()Ljava/lang/Iterable;");
            mids$[mid_getDcbData_05271a9caf0ddfcd] = env->getMethodID(cls, "getDcbData", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_4d0641e2232580f1] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getSiteCode_3cffd47377eca18a] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_setDescription_c4e21d1fdc63a330] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbStation::DcbStation(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

        void DcbStation::addDcb(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::sinex::Dcb & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcb_3534a70b26a70401], a0.this$, a1.this$);
        }

        ::java::lang::Iterable DcbStation::getAvailableSatelliteSystems() const
        {
          return ::java::lang::Iterable(env->callObjectMethod(this$, mids$[mid_getAvailableSatelliteSystems_6cac7769b34554a7]));
        }

        ::org::orekit::files::sinex::Dcb DcbStation::getDcbData(const ::org::orekit::gnss::SatelliteSystem & a0) const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_05271a9caf0ddfcd], a0.this$));
        }

        ::org::orekit::files::sinex::DcbDescription DcbStation::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_4d0641e2232580f1]));
        }

        ::java::lang::String DcbStation::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_3cffd47377eca18a]));
        }

        void DcbStation::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_c4e21d1fdc63a330], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args);
        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self);
        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_getDescription(t_DcbStation *self);
        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self);
        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data);
        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data);
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data);
        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data);
        static PyGetSetDef t_DcbStation__fields_[] = {
          DECLARE_GET_FIELD(t_DcbStation, availableSatelliteSystems),
          DECLARE_GETSET_FIELD(t_DcbStation, description),
          DECLARE_GET_FIELD(t_DcbStation, siteCode),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbStation__methods_[] = {
          DECLARE_METHOD(t_DcbStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, addDcb, METH_VARARGS),
          DECLARE_METHOD(t_DcbStation, getAvailableSatelliteSystems, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getDcbData, METH_O),
          DECLARE_METHOD(t_DcbStation, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbStation)[] = {
          { Py_tp_methods, t_DcbStation__methods_ },
          { Py_tp_init, (void *) t_DcbStation_init_ },
          { Py_tp_getset, t_DcbStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbStation, t_DcbStation, DcbStation);

        void t_DcbStation::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbStation), &PY_TYPE_DEF(DcbStation), module, "DcbStation", 0);
        }

        void t_DcbStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "class_", make_descriptor(DcbStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "wrapfn_", make_descriptor(t_DcbStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbStation::initializeClass, 1)))
            return NULL;
          return t_DcbStation::wrap_Object(DcbStation(((t_DcbStation *) arg)->object.this$));
        }
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbStation object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbStation(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::sinex::Dcb::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(self->object.addDcb(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcb", args);
          return NULL;
        }

        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self)
        {
          ::java::lang::Iterable result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatelliteSystem));
        }

        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
          {
            OBJ_CALL(result = self->object.getDcbData(a0));
            return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbData", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_getDescription(t_DcbStation *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::DcbDescription a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setDescription(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDescription", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data)
        {
          ::java::lang::Iterable value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(value);
        }

        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &value))
            {
              INT_CALL(self->object.setDescription(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "description", arg);
          return -1;
        }

        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/HaloOrbit.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *HaloOrbit::class$ = NULL;
      jmethodID *HaloOrbit::mids$ = NULL;
      bool HaloOrbit::live$ = false;

      jclass HaloOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/HaloOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3b5ffcf52504e03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;DLorg/orekit/orbits/LibrationOrbitFamily;)V");
          mids$[mid_init$_cba003a7418c96ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_0f6106070ec4ffe8] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaloOrbit::HaloOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1, const ::org::orekit::orbits::LibrationOrbitFamily & a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_a3b5ffcf52504e03, a0.this$, a1, a2.this$)) {}

      HaloOrbit::HaloOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_cba003a7418c96ab, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_HaloOrbit__methods_[] = {
        DECLARE_METHOD(t_HaloOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaloOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaloOrbit)[] = {
        { Py_tp_methods, t_HaloOrbit__methods_ },
        { Py_tp_init, (void *) t_HaloOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaloOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(HaloOrbit, t_HaloOrbit, HaloOrbit);

      void t_HaloOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(HaloOrbit), &PY_TYPE_DEF(HaloOrbit), module, "HaloOrbit", 0);
      }

      void t_HaloOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "class_", make_descriptor(HaloOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "wrapfn_", make_descriptor(t_HaloOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaloOrbit::initializeClass, 1)))
          return NULL;
        return t_HaloOrbit::wrap_Object(HaloOrbit(((t_HaloOrbit *) arg)->object.this$));
      }
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaloOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::orbits::LibrationOrbitFamily a2((jobject) NULL);
            PyTypeObject **p2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::orbits::RichardsonExpansion::initializeClass, ::org::orekit::orbits::LibrationOrbitFamily::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_LibrationOrbitFamily::parameters_))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Double.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterObserver::class$ = NULL;
      jmethodID *ParameterObserver::mids$ = NULL;
      bool ParameterObserver::live$ = false;

      jclass ParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_estimationTypeChanged_8f4d5133d02f7ca0] = env->getMethodID(cls, "estimationTypeChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_maxValueChanged_07ecaf48302d52cc] = env->getMethodID(cls, "maxValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_minValueChanged_07ecaf48302d52cc] = env->getMethodID(cls, "minValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_nameChanged_405ca0362c7934ff] = env->getMethodID(cls, "nameChanged", "(Ljava/lang/String;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceDateChanged_75549c37e64bb564] = env->getMethodID(cls, "referenceDateChanged", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceValueChanged_07ecaf48302d52cc] = env->getMethodID(cls, "referenceValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_scaleChanged_07ecaf48302d52cc] = env->getMethodID(cls, "scaleChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_selectionChanged_8f4d5133d02f7ca0] = env->getMethodID(cls, "selectionChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_valueChanged_9eb625c4c5bd9f60] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_db2a83a9d010ab79] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ParameterObserver::estimationTypeChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_estimationTypeChanged_8f4d5133d02f7ca0], a0, a1.this$);
      }

      void ParameterObserver::maxValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_maxValueChanged_07ecaf48302d52cc], a0, a1.this$);
      }

      void ParameterObserver::minValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_minValueChanged_07ecaf48302d52cc], a0, a1.this$);
      }

      void ParameterObserver::nameChanged(const ::java::lang::String & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_nameChanged_405ca0362c7934ff], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceDateChanged(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceDateChanged_75549c37e64bb564], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceValueChanged_07ecaf48302d52cc], a0, a1.this$);
      }

      void ParameterObserver::scaleChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaleChanged_07ecaf48302d52cc], a0, a1.this$);
      }

      void ParameterObserver::selectionChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_selectionChanged_8f4d5133d02f7ca0], a0, a1.this$);
      }

      void ParameterObserver::valueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_valueChanged_9eb625c4c5bd9f60], a0, a1.this$, a2.this$);
      }

      void ParameterObserver::valueSpanMapChanged(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_valueSpanMapChanged_db2a83a9d010ab79], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args);

      static PyMethodDef t_ParameterObserver__methods_[] = {
        DECLARE_METHOD(t_ParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, estimationTypeChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, maxValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, minValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, nameChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceDateChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, scaleChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, selectionChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueSpanMapChanged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterObserver)[] = {
        { Py_tp_methods, t_ParameterObserver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterObserver, t_ParameterObserver, ParameterObserver);

      void t_ParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterObserver), &PY_TYPE_DEF(ParameterObserver), module, "ParameterObserver", 0);
      }

      void t_ParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "class_", make_descriptor(ParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "wrapfn_", make_descriptor(t_ParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterObserver::initializeClass, 1)))
          return NULL;
        return t_ParameterObserver::wrap_Object(ParameterObserver(((t_ParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.estimationTypeChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "estimationTypeChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.maxValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "maxValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.minValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "minValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.nameChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "nameChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceDateChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceDateChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaleChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaleChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.selectionChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "selectionChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.valueChanged(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1))
        {
          OBJ_CALL(self->object.valueSpanMapChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueSpanMapChanged", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteType::class$ = NULL;
        jmethodID *SatelliteType::mids$ = NULL;
        bool SatelliteType::live$ = false;
        SatelliteType *SatelliteType::BEIDOU_2G = NULL;
        SatelliteType *SatelliteType::BEIDOU_2I = NULL;
        SatelliteType *SatelliteType::BEIDOU_2M = NULL;
        SatelliteType *SatelliteType::BEIDOU_3G_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3I = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SM_CAST = NULL;
        SatelliteType *SatelliteType::BLOCK_I = NULL;
        SatelliteType *SatelliteType::BLOCK_II = NULL;
        SatelliteType *SatelliteType::BLOCK_IIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIF = NULL;
        SatelliteType *SatelliteType::BLOCK_IIIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_A = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_B = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_M = NULL;
        SatelliteType *SatelliteType::GALILEO_0A = NULL;
        SatelliteType *SatelliteType::GALILEO_0B = NULL;
        SatelliteType *SatelliteType::GALILEO_1 = NULL;
        SatelliteType *SatelliteType::GALILEO_2 = NULL;
        SatelliteType *SatelliteType::GLONASS = NULL;
        SatelliteType *SatelliteType::GLONASS_K1 = NULL;
        SatelliteType *SatelliteType::GLONASS_K2 = NULL;
        SatelliteType *SatelliteType::GLONASS_M = NULL;
        SatelliteType *SatelliteType::IRNSS_1GEO = NULL;
        SatelliteType *SatelliteType::IRNSS_1IGSO = NULL;
        SatelliteType *SatelliteType::QZSS = NULL;
        SatelliteType *SatelliteType::QZSS_2A = NULL;
        SatelliteType *SatelliteType::QZSS_2G = NULL;
        SatelliteType *SatelliteType::QZSS_2I = NULL;

        jclass SatelliteType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildAttitudeProvider_100eafc913713295] = env->getMethodID(cls, "buildAttitudeProvider", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;I)Lorg/orekit/gnss/attitude/GNSSAttitudeProvider;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_parseSatelliteType_d3855400a5de9c88] = env->getStaticMethodID(cls, "parseSatelliteType", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_valueOf_d3855400a5de9c88] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_values_a783438e9dd7dd05] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/antenna/SatelliteType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BEIDOU_2G = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2M = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3G_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3G_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SM_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SM_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_I = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_II = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_II", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIF = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIF", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_A = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_B = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_M = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0A = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0B = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_1 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_2 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS = new SatelliteType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K1 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K2 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_M = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1GEO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1GEO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1IGSO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1IGSO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS = new SatelliteType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2A = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2G = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2I = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::gnss::attitude::GNSSAttitudeProvider SatelliteType::buildAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3, jint a4) const
        {
          return ::org::orekit::gnss::attitude::GNSSAttitudeProvider(env->callObjectMethod(this$, mids$[mid_buildAttitudeProvider_100eafc913713295], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        ::java::lang::String SatelliteType::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        SatelliteType SatelliteType::parseSatelliteType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteType_d3855400a5de9c88], a0.this$));
        }

        SatelliteType SatelliteType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d3855400a5de9c88], a0.this$));
        }

        JArray< SatelliteType > SatelliteType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_a783438e9dd7dd05]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_getName(t_SatelliteType *self);
        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SatelliteType_values(PyTypeObject *type);
        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data);
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data);
        static PyGetSetDef t_SatelliteType__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteType, name),
          DECLARE_GET_FIELD(t_SatelliteType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteType__methods_[] = {
          DECLARE_METHOD(t_SatelliteType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, buildAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, getName, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteType, parseSatelliteType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteType)[] = {
          { Py_tp_methods, t_SatelliteType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SatelliteType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SatelliteType, t_SatelliteType, SatelliteType);
        PyObject *t_SatelliteType::wrap_Object(const SatelliteType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SatelliteType::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteType), &PY_TYPE_DEF(SatelliteType), module, "SatelliteType", 0);
        }

        void t_SatelliteType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "class_", make_descriptor(SatelliteType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "wrapfn_", make_descriptor(t_SatelliteType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SatelliteType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3G_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3G_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SM_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SM_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_II", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_II)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIF", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1GEO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1GEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1IGSO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1IGSO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2I)));
        }

        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteType::initializeClass, 1)))
            return NULL;
          return t_SatelliteType::wrap_Object(SatelliteType(((t_SatelliteType *) arg)->object.this$));
        }
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          jint a4;
          ::org::orekit::gnss::attitude::GNSSAttitudeProvider result((jobject) NULL);

          if (!parseArgs(args, "kkkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.buildAttitudeProvider(a0, a1, a2, a3, a4));
            return ::org::orekit::gnss::attitude::t_GNSSAttitudeProvider::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildAttitudeProvider", args);
          return NULL;
        }

        static PyObject *t_SatelliteType_getName(t_SatelliteType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::parseSatelliteType(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseSatelliteType", arg);
          return NULL;
        }

        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::valueOf(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SatelliteType_values(PyTypeObject *type)
        {
          JArray< SatelliteType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::values());
          return JArray<jobject>(result.this$).wrap(t_SatelliteType::wrap_jobject);
        }
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/GridCreation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *GridCreation::class$ = NULL;
        jmethodID *GridCreation::mids$ = NULL;
        bool GridCreation::live$ = false;

        jclass GridCreation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/GridCreation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createLinearGrid_3015f2a895207db3] = env->getStaticMethodID(cls, "createLinearGrid", "(DDI)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > GridCreation::createLinearGrid(jdouble a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_createLinearGrid_3015f2a895207db3], a0, a1, a2));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        static PyObject *t_GridCreation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridCreation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridCreation_createLinearGrid(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_GridCreation__methods_[] = {
          DECLARE_METHOD(t_GridCreation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridCreation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridCreation, createLinearGrid, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridCreation)[] = {
          { Py_tp_methods, t_GridCreation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridCreation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridCreation, t_GridCreation, GridCreation);

        void t_GridCreation::install(PyObject *module)
        {
          installType(&PY_TYPE(GridCreation), &PY_TYPE_DEF(GridCreation), module, "GridCreation", 0);
        }

        void t_GridCreation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "class_", make_descriptor(GridCreation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "wrapfn_", make_descriptor(t_GridCreation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridCreation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridCreation::initializeClass, 1)))
            return NULL;
          return t_GridCreation::wrap_Object(GridCreation(((t_GridCreation *) arg)->object.this$));
        }
        static PyObject *t_GridCreation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridCreation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GridCreation_createLinearGrid(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "DDI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::rugged::utils::GridCreation::createLinearGrid(a0, a1, a2));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "createLinearGrid", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAbstractDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAbstractDetector::class$ = NULL;
        jmethodID *PythonFieldAbstractDetector::mids$ = NULL;
        bool PythonFieldAbstractDetector::live$ = false;

        jclass PythonFieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_60ba095ed62a3683] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)V");
            mids$[mid_create_ac1c597f89a746d9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractDetector::PythonFieldAbstractDetector(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::orekit::propagation::events::handlers::FieldEventHandler & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_60ba095ed62a3683, a0.this$, a1.this$, a2, a3.this$)) {}

        void PythonFieldAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldAbstractDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args);
        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self);
        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data);
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractDetector)[] = {
          { Py_tp_methods, t_PythonFieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractDetector_init_ },
          { Py_tp_getset, t_PythonFieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractDetector, t_PythonFieldAbstractDetector, PythonFieldAbstractDetector);
        PyObject *t_PythonFieldAbstractDetector::wrap_Object(const PythonFieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_PythonFieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractDetector *self = (t_PythonFieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_PythonFieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractDetector), &PY_TYPE_DEF(PythonFieldAbstractDetector), module, "PythonFieldAbstractDetector", 1);
        }

        void t_PythonFieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "class_", make_descriptor(PythonFieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "wrapfn_", make_descriptor(t_PythonFieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonFieldAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractDetector::wrap_Object(PythonFieldAbstractDetector(((t_PythonFieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractDetector_of_(t_PythonFieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractDetector_init_(t_PythonFieldAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jint a2;
          ::org::orekit::propagation::events::handlers::FieldEventHandler a3((jobject) NULL);
          PyTypeObject **p3;
          PythonFieldAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "KKIK", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractDetector(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAbstractDetector_finalize(t_PythonFieldAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractDetector_pythonExtension(t_PythonFieldAbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(::org::orekit::propagation::events::FieldAdaptableInterval(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(::org::orekit::propagation::events::handlers::FieldEventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OOiO", o0, o1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
          {
            throwTypeError("create", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonFieldAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractDetector::mids$[PythonFieldAbstractDetector::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractDetector_get__self(t_PythonFieldAbstractDetector *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldAbstractDetector_get__parameters_(t_PythonFieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *FieldDSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool FieldDSSTJ2SquaredClosedFormContext::live$ = false;

            jclass FieldDSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cea5992e7ba31bc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_613c8f46c659f636] = env->getMethodID(cls, "getA4", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha4_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_613c8f46c659f636] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEta_613c8f46c659f636] = env->getMethodID(cls, "getEta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getS2_613c8f46c659f636] = env->getMethodID(cls, "getS2", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTJ2SquaredClosedFormContext::FieldDSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_cea5992e7ba31bc0, a0.this$, a1.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getA4() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA4_613c8f46c659f636]));
            }

            jdouble FieldDSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_557b8123390d8d0c]);
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getEta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEta_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTJ2SquaredClosedFormContext::getS2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getS2_613c8f46c659f636]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args);
            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_FieldDSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, s2),
              DECLARE_GET_FIELD(t_FieldDSSTJ2SquaredClosedFormContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_FieldDSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_FieldDSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTJ2SquaredClosedFormContext, t_FieldDSSTJ2SquaredClosedFormContext, FieldDSSTJ2SquaredClosedFormContext);
            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(const FieldDSSTJ2SquaredClosedFormContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTJ2SquaredClosedFormContext *self = (t_FieldDSSTJ2SquaredClosedFormContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(FieldDSSTJ2SquaredClosedFormContext), module, "FieldDSSTJ2SquaredClosedFormContext", 0);
            }

            void t_FieldDSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "class_", make_descriptor(FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_FieldDSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(FieldDSSTJ2SquaredClosedFormContext(((t_FieldDSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_of_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTJ2SquaredClosedFormContext_init_(t_FieldDSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldDSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1))
              {
                INT_CALL(object = FieldDSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getA4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA4());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getAlpha4(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getC(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getEta(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_getS2(t_FieldDSSTJ2SquaredClosedFormContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getS2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__parameters_(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__a4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA4());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__alpha4(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__c(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__eta(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTJ2SquaredClosedFormContext_get__s2(t_FieldDSSTJ2SquaredClosedFormContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getS2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *DividedDifferenceInterpolator::class$ = NULL;
        jmethodID *DividedDifferenceInterpolator::mids$ = NULL;
        bool DividedDifferenceInterpolator::live$ = false;

        jclass DividedDifferenceInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_4ac3594b9825ca1c] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm;");
            mids$[mid_computeDividedDifference_d2593442847fe350] = env->getStaticMethodID(cls, "computeDividedDifference", "([D[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DividedDifferenceInterpolator::DividedDifferenceInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm DividedDifferenceInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm(env->callObjectMethod(this$, mids$[mid_interpolate_4ac3594b9825ca1c], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args);

        static PyMethodDef t_DividedDifferenceInterpolator__methods_[] = {
          DECLARE_METHOD(t_DividedDifferenceInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DividedDifferenceInterpolator)[] = {
          { Py_tp_methods, t_DividedDifferenceInterpolator__methods_ },
          { Py_tp_init, (void *) t_DividedDifferenceInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DividedDifferenceInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DividedDifferenceInterpolator, t_DividedDifferenceInterpolator, DividedDifferenceInterpolator);

        void t_DividedDifferenceInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(DividedDifferenceInterpolator), &PY_TYPE_DEF(DividedDifferenceInterpolator), module, "DividedDifferenceInterpolator", 0);
        }

        void t_DividedDifferenceInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "class_", make_descriptor(DividedDifferenceInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "wrapfn_", make_descriptor(t_DividedDifferenceInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DividedDifferenceInterpolator::initializeClass, 1)))
            return NULL;
          return t_DividedDifferenceInterpolator::wrap_Object(DividedDifferenceInterpolator(((t_DividedDifferenceInterpolator *) arg)->object.this$));
        }
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DividedDifferenceInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds)
        {
          DividedDifferenceInterpolator object((jobject) NULL);

          INT_CALL(object = DividedDifferenceInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionNewtonForm::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/interval/BinomialProportion.h"
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *BinomialProportion::class$ = NULL;
        jmethodID *BinomialProportion::mids$ = NULL;
        bool BinomialProportion::live$ = false;

        jclass BinomialProportion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/BinomialProportion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAgrestiCoullInterval_e8a4da994388dd96] = env->getStaticMethodID(cls, "getAgrestiCoullInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getClopperPearsonInterval_e8a4da994388dd96] = env->getStaticMethodID(cls, "getClopperPearsonInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getNormalApproximationInterval_e8a4da994388dd96] = env->getStaticMethodID(cls, "getNormalApproximationInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getWilsonScoreInterval_e8a4da994388dd96] = env->getStaticMethodID(cls, "getWilsonScoreInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getAgrestiCoullInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getAgrestiCoullInterval_e8a4da994388dd96], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getClopperPearsonInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getClopperPearsonInterval_e8a4da994388dd96], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getNormalApproximationInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getNormalApproximationInterval_e8a4da994388dd96], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getWilsonScoreInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getWilsonScoreInterval_e8a4da994388dd96], a0, a1, a2));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {
        static PyObject *t_BinomialProportion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialProportion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialProportion_getAgrestiCoullInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getClopperPearsonInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getNormalApproximationInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getWilsonScoreInterval(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_BinomialProportion__methods_[] = {
          DECLARE_METHOD(t_BinomialProportion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getAgrestiCoullInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getClopperPearsonInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getNormalApproximationInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getWilsonScoreInterval, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialProportion)[] = {
          { Py_tp_methods, t_BinomialProportion__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialProportion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialProportion, t_BinomialProportion, BinomialProportion);

        void t_BinomialProportion::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialProportion), &PY_TYPE_DEF(BinomialProportion), module, "BinomialProportion", 0);
        }

        void t_BinomialProportion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "class_", make_descriptor(BinomialProportion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "wrapfn_", make_descriptor(t_BinomialProportion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialProportion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialProportion::initializeClass, 1)))
            return NULL;
          return t_BinomialProportion::wrap_Object(BinomialProportion(((t_BinomialProportion *) arg)->object.this$));
        }
        static PyObject *t_BinomialProportion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialProportion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BinomialProportion_getAgrestiCoullInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getAgrestiCoullInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getAgrestiCoullInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getClopperPearsonInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getClopperPearsonInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getClopperPearsonInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getNormalApproximationInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getNormalApproximationInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getNormalApproximationInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getWilsonScoreInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getWilsonScoreInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWilsonScoreInterval", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L2Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L2Frame::class$ = NULL;
      jmethodID *L2Frame::mids$ = NULL;
      bool L2Frame::live$ = false;

      jclass L2Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L2Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9a72c2af019e2130] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L2Frame::L2Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_9a72c2af019e2130, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L2Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L2Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L2Frame_init_(t_L2Frame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_L2Frame__methods_[] = {
        DECLARE_METHOD(t_L2Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L2Frame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L2Frame)[] = {
        { Py_tp_methods, t_L2Frame__methods_ },
        { Py_tp_init, (void *) t_L2Frame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L2Frame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(L2Frame, t_L2Frame, L2Frame);

      void t_L2Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(L2Frame), &PY_TYPE_DEF(L2Frame), module, "L2Frame", 0);
      }

      void t_L2Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "class_", make_descriptor(L2Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "wrapfn_", make_descriptor(t_L2Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L2Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L2Frame::initializeClass, 1)))
          return NULL;
        return t_L2Frame::wrap_Object(L2Frame(((t_L2Frame *) arg)->object.this$));
      }
      static PyObject *t_L2Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L2Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L2Frame_init_(t_L2Frame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L2Frame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L2Frame(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Exception.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Exception::class$ = NULL;
    jmethodID *Exception::mids$ = NULL;
    bool Exception::live$ = false;

    jclass Exception::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Exception");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Exception::Exception() : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    Exception::Exception(const ::java::lang::String & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Exception::Exception(const ::java::lang::Throwable & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    Exception::Exception(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_Exception__methods_[] = {
      DECLARE_METHOD(t_Exception, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Exception, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Exception)[] = {
      { Py_tp_methods, t_Exception__methods_ },
      { Py_tp_init, (void *) t_Exception_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Exception)[] = {
      &PY_TYPE_DEF(::java::lang::Throwable),
      NULL
    };

    DEFINE_TYPE(Exception, t_Exception, Exception);

    void t_Exception::install(PyObject *module)
    {
      installType(&PY_TYPE(Exception), &PY_TYPE_DEF(Exception), module, "Exception", 0);
    }

    void t_Exception::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "class_", make_descriptor(Exception::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "wrapfn_", make_descriptor(t_Exception::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Exception::initializeClass, 1)))
        return NULL;
      return t_Exception::wrap_Object(Exception(((t_Exception *) arg)->object.this$));
    }
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Exception::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Exception object((jobject) NULL);

          INT_CALL(object = Exception());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Exception(a0, a1));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParametersController::class$ = NULL;
      jmethodID *ParametersController::mids$ = NULL;
      bool ParametersController::live$ = false;

      jclass ParametersController::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParametersController");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParameter_071554b5f5a6b17b] = env->getMethodID(cls, "getParameter", "(Ljava/lang/String;)D");
          mids$[mid_setParameter_c6843ef8200b1ede] = env->getMethodID(cls, "setParameter", "(Ljava/lang/String;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParametersController::getParameter(const ::java::lang::String & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getParameter_071554b5f5a6b17b], a0.this$);
      }

      void ParametersController::setParameter(const ::java::lang::String & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setParameter_c6843ef8200b1ede], a0.this$, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg);
      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args);

      static PyMethodDef t_ParametersController__methods_[] = {
        DECLARE_METHOD(t_ParametersController, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, getParameter, METH_O),
        DECLARE_METHOD(t_ParametersController, setParameter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametersController)[] = {
        { Py_tp_methods, t_ParametersController__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametersController)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(ParametersController, t_ParametersController, ParametersController);

      void t_ParametersController::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametersController), &PY_TYPE_DEF(ParametersController), module, "ParametersController", 0);
      }

      void t_ParametersController::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "class_", make_descriptor(ParametersController::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "wrapfn_", make_descriptor(t_ParametersController::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametersController::initializeClass, 1)))
          return NULL;
        return t_ParametersController::wrap_Object(ParametersController(((t_ParametersController *) arg)->object.this$));
      }
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametersController::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameter(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameter", arg);
        return NULL;
      }

      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "sD", &a0, &a1))
        {
          OBJ_CALL(self->object.setParameter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setParameter", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/UTF8Control.h"
#include "java/io/IOException.h"
#include "java/lang/InstantiationException.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *UTF8Control::class$ = NULL;
      jmethodID *UTF8Control::mids$ = NULL;
      bool UTF8Control::live$ = false;

      jclass UTF8Control::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/UTF8Control");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_c5caa61954589488] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTF8Control::UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::java::util::ResourceBundle UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_c5caa61954589488], a0.this$, a1.this$, a2.this$, a3.this$, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTF8Control_init_(t_UTF8Control *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTF8Control_newBundle(t_UTF8Control *self, PyObject *args);

      static PyMethodDef t_UTF8Control__methods_[] = {
        DECLARE_METHOD(t_UTF8Control, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTF8Control, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTF8Control, newBundle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTF8Control)[] = {
        { Py_tp_methods, t_UTF8Control__methods_ },
        { Py_tp_init, (void *) t_UTF8Control_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTF8Control)[] = {
        &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
        NULL
      };

      DEFINE_TYPE(UTF8Control, t_UTF8Control, UTF8Control);

      void t_UTF8Control::install(PyObject *module)
      {
        installType(&PY_TYPE(UTF8Control), &PY_TYPE_DEF(UTF8Control), module, "UTF8Control", 0);
      }

      void t_UTF8Control::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "class_", make_descriptor(UTF8Control::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "wrapfn_", make_descriptor(t_UTF8Control::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTF8Control::initializeClass, 1)))
          return NULL;
        return t_UTF8Control::wrap_Object(UTF8Control(((t_UTF8Control *) arg)->object.this$));
      }
      static PyObject *t_UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTF8Control::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTF8Control_init_(t_UTF8Control *self, PyObject *args, PyObject *kwds)
      {
        UTF8Control object((jobject) NULL);

        INT_CALL(object = UTF8Control());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTF8Control_newBundle(t_UTF8Control *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::Locale a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::ClassLoader a3((jobject) NULL);
        jboolean a4;
        ::java::util::ResourceBundle result((jobject) NULL);

        if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
          return ::java::util::t_ResourceBundle::wrap_Object(result);
        }

        return callSuper(PY_TYPE(UTF8Control), (PyObject *) self, "newBundle", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedProcess::class$ = NULL;
          jmethodID *UnscentedProcess::mids$ = NULL;
          bool UnscentedProcess::live$ = false;

          jclass UnscentedProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_8e425e58bb2a83f0] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
              mids$[mid_getInnovation_6a4a5c74ef8d43ce] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getPredictedMeasurements_931364fe1c4f8ccf] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)[Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedProcess::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_8e425e58bb2a83f0], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector UnscentedProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_6a4a5c74ef8d43ce], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< ::org::hipparchus::linear::RealVector > UnscentedProcess::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::hipparchus::filtering::kalman::Measurement & a1) const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_931364fe1c4f8ccf], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedProcess_of_(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getEvolution(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getInnovation(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getPredictedMeasurements(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_get__parameters_(t_UnscentedProcess *self, void *data);
          static PyGetSetDef t_UnscentedProcess__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedProcess__methods_[] = {
            DECLARE_METHOD(t_UnscentedProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getInnovation, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getPredictedMeasurements, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedProcess)[] = {
            { Py_tp_methods, t_UnscentedProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_UnscentedProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedProcess, t_UnscentedProcess, UnscentedProcess);
          PyObject *t_UnscentedProcess::wrap_Object(const UnscentedProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedProcess *self = (t_UnscentedProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedProcess *self = (t_UnscentedProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedProcess), &PY_TYPE_DEF(UnscentedProcess), module, "UnscentedProcess", 0);
          }

          void t_UnscentedProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "class_", make_descriptor(UnscentedProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "wrapfn_", make_descriptor(t_UnscentedProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedProcess::initializeClass, 1)))
              return NULL;
            return t_UnscentedProcess::wrap_Object(UnscentedProcess(((t_UnscentedProcess *) arg)->object.this$));
          }
          static PyObject *t_UnscentedProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedProcess_of_(t_UnscentedProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_UnscentedProcess_getEvolution(t_UnscentedProcess *self, PyObject *args)
          {
            jdouble a0;
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

            if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_UnscentedProcess_getInnovation(t_UnscentedProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }

          static PyObject *t_UnscentedProcess_getPredictedMeasurements(t_UnscentedProcess *self, PyObject *args)
          {
            JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a1((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

            if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
            return NULL;
          }
          static PyObject *t_UnscentedProcess_get__parameters_(t_UnscentedProcess *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixel::class$ = NULL;
        jmethodID *SensorPixel::mids$ = NULL;
        bool SensorPixel::live$ = false;

        jclass SensorPixel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLineNumber_557b8123390d8d0c] = env->getMethodID(cls, "getLineNumber", "()D");
            mids$[mid_getPixelNumber_557b8123390d8d0c] = env->getMethodID(cls, "getPixelNumber", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixel::SensorPixel(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble SensorPixel::getLineNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLineNumber_557b8123390d8d0c]);
        }

        jdouble SensorPixel::getPixelNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPixelNumber_557b8123390d8d0c]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data);
        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data);
        static PyGetSetDef t_SensorPixel__fields_[] = {
          DECLARE_GET_FIELD(t_SensorPixel, lineNumber),
          DECLARE_GET_FIELD(t_SensorPixel, pixelNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorPixel__methods_[] = {
          DECLARE_METHOD(t_SensorPixel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, getLineNumber, METH_NOARGS),
          DECLARE_METHOD(t_SensorPixel, getPixelNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixel)[] = {
          { Py_tp_methods, t_SensorPixel__methods_ },
          { Py_tp_init, (void *) t_SensorPixel_init_ },
          { Py_tp_getset, t_SensorPixel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixel, t_SensorPixel, SensorPixel);

        void t_SensorPixel::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixel), &PY_TYPE_DEF(SensorPixel), module, "SensorPixel", 0);
        }

        void t_SensorPixel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "class_", make_descriptor(SensorPixel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "wrapfn_", make_descriptor(t_SensorPixel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixel::initializeClass, 1)))
            return NULL;
          return t_SensorPixel::wrap_Object(SensorPixel(((t_SensorPixel *) arg)->object.this$));
        }
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          SensorPixel object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = SensorPixel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLineNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLineNumber());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FixedFrameBuilder.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedFrameBuilder::class$ = NULL;
      jmethodID *FixedFrameBuilder::mids$ = NULL;
      bool FixedFrameBuilder::live$ = false;

      jclass FixedFrameBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedFrameBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_build_4329b81cdba13b7b] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_76e687ee866bdc48] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedFrameBuilder::FixedFrameBuilder(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      ::org::orekit::attitudes::FieldAttitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_4329b81cdba13b7b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_76e687ee866bdc48], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args);

      static PyMethodDef t_FixedFrameBuilder__methods_[] = {
        DECLARE_METHOD(t_FixedFrameBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedFrameBuilder)[] = {
        { Py_tp_methods, t_FixedFrameBuilder__methods_ },
        { Py_tp_init, (void *) t_FixedFrameBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedFrameBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedFrameBuilder, t_FixedFrameBuilder, FixedFrameBuilder);

      void t_FixedFrameBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedFrameBuilder), &PY_TYPE_DEF(FixedFrameBuilder), module, "FixedFrameBuilder", 0);
      }

      void t_FixedFrameBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "class_", make_descriptor(FixedFrameBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "wrapfn_", make_descriptor(t_FixedFrameBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedFrameBuilder::initializeClass, 1)))
          return NULL;
        return t_FixedFrameBuilder::wrap_Object(FixedFrameBuilder(((t_FixedFrameBuilder *) arg)->object.this$));
      }
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedFrameBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FixedFrameBuilder object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FixedFrameBuilder(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "build", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/propagation/PropagationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonAbstractIntegratedPropagator::live$ = false;

        jclass PythonAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f9a0f6f49e4bc2f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_31b084497c320ed2] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_4a2f137b7a0c1747] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractIntegratedPropagator::PythonAbstractIntegratedPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_f9a0f6f49e4bc2f0, a0.this$, a1.this$)) {}

        void PythonAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractIntegratedPropagator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractIntegratedPropagator_init_(t_PythonAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractIntegratedPropagator_finalize(t_PythonAbstractIntegratedPropagator *self);
        static PyObject *t_PythonAbstractIntegratedPropagator_pythonExtension(t_PythonAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractIntegratedPropagator_get__self(t_PythonAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractIntegratedPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractIntegratedPropagator, t_PythonAbstractIntegratedPropagator, PythonAbstractIntegratedPropagator);

        void t_PythonAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonAbstractIntegratedPropagator), module, "PythonAbstractIntegratedPropagator", 1);
        }

        void t_PythonAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "class_", make_descriptor(PythonAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;", (void *) t_PythonAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractIntegratedPropagator::wrap_Object(PythonAbstractIntegratedPropagator(((t_PythonAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractIntegratedPropagator_init_(t_PythonAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;
          PythonAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonAbstractIntegratedPropagator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_finalize(t_PythonAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_pythonExtension(t_PythonAbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::StateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OdOOOO", o0, (double) a1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::StateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(::org::hipparchus::ode::ODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_get__self(t_PythonAbstractIntegratedPropagator *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonFieldOfView.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonFieldOfView::class$ = NULL;
        jmethodID *PythonFieldOfView::mids$ = NULL;
        bool PythonFieldOfView::live$ = false;

        jclass PythonFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_37f5cab3ae6d781a] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_557b8123390d8d0c] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_d0bb3aecf00cc465] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_b48aa9aef740fa79] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOfView::PythonFieldOfView() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldOfView::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self);
        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data);
        static PyGetSetDef t_PythonFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOfView)[] = {
          { Py_tp_methods, t_PythonFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOfView_init_ },
          { Py_tp_getset, t_PythonFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOfView, t_PythonFieldOfView, PythonFieldOfView);

        void t_PythonFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOfView), &PY_TYPE_DEF(PythonFieldOfView), module, "PythonFieldOfView", 1);
        }

        void t_PythonFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "class_", make_descriptor(PythonFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "wrapfn_", make_descriptor(t_PythonFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonFieldOfView_getFootprint0 },
            { "getMargin", "()D", (void *) t_PythonFieldOfView_getMargin1 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonFieldOfView_offsetFromBoundary2 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonFieldOfView_projectToBoundary3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOfView_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOfView::wrap_Object(PythonFieldOfView(((t_PythonFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOfView object((jobject) NULL);

          INT_CALL(object = PythonFieldOfView());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMargin", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMargin", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *MonotoneChain::class$ = NULL;
            jmethodID *MonotoneChain::mids$ = NULL;
            bool MonotoneChain::live$ = false;

            jclass MonotoneChain::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_init$_de678bc36ddd2b6a] = env->getMethodID(cls, "<init>", "(ZD)V");
                mids$[mid_findHullVertices_6472a4633751d554] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MonotoneChain::MonotoneChain() : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            MonotoneChain::MonotoneChain(jboolean a0) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

            MonotoneChain::MonotoneChain(jboolean a0, jdouble a1) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_de678bc36ddd2b6a, a0, a1)) {}

            ::java::util::Collection MonotoneChain::findHullVertices(const ::java::util::Collection & a0) const
            {
              return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_findHullVertices_6472a4633751d554], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_MonotoneChain_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MonotoneChain_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MonotoneChain_init_(t_MonotoneChain *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MonotoneChain_findHullVertices(t_MonotoneChain *self, PyObject *arg);

            static PyMethodDef t_MonotoneChain__methods_[] = {
              DECLARE_METHOD(t_MonotoneChain, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MonotoneChain, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MonotoneChain, findHullVertices, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MonotoneChain)[] = {
              { Py_tp_methods, t_MonotoneChain__methods_ },
              { Py_tp_init, (void *) t_MonotoneChain_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MonotoneChain)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D),
              NULL
            };

            DEFINE_TYPE(MonotoneChain, t_MonotoneChain, MonotoneChain);

            void t_MonotoneChain::install(PyObject *module)
            {
              installType(&PY_TYPE(MonotoneChain), &PY_TYPE_DEF(MonotoneChain), module, "MonotoneChain", 0);
            }

            void t_MonotoneChain::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "class_", make_descriptor(MonotoneChain::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "wrapfn_", make_descriptor(t_MonotoneChain::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MonotoneChain_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MonotoneChain::initializeClass, 1)))
                return NULL;
              return t_MonotoneChain::wrap_Object(MonotoneChain(((t_MonotoneChain *) arg)->object.this$));
            }
            static PyObject *t_MonotoneChain_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MonotoneChain::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MonotoneChain_init_(t_MonotoneChain *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  MonotoneChain object((jobject) NULL);

                  INT_CALL(object = MonotoneChain());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jboolean a0;
                  MonotoneChain object((jobject) NULL);

                  if (!parseArgs(args, "Z", &a0))
                  {
                    INT_CALL(object = MonotoneChain(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jboolean a0;
                  jdouble a1;
                  MonotoneChain object((jobject) NULL);

                  if (!parseArgs(args, "ZD", &a0, &a1))
                  {
                    INT_CALL(object = MonotoneChain(a0, a1));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MonotoneChain_findHullVertices(t_MonotoneChain *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Collection result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.findHullVertices(a0));
                return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
              }

              PyErr_SetArgsError((PyObject *) self, "findHullVertices", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cos::class$ = NULL;
        jmethodID *Cos::mids$ = NULL;
        bool Cos::live$ = false;

        jclass Cos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cos::Cos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Cos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cos_value(t_Cos *self, PyObject *args);

        static PyMethodDef t_Cos__methods_[] = {
          DECLARE_METHOD(t_Cos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cos)[] = {
          { Py_tp_methods, t_Cos__methods_ },
          { Py_tp_init, (void *) t_Cos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cos, t_Cos, Cos);

        void t_Cos::install(PyObject *module)
        {
          installType(&PY_TYPE(Cos), &PY_TYPE_DEF(Cos), module, "Cos", 0);
        }

        void t_Cos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "class_", make_descriptor(Cos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "wrapfn_", make_descriptor(t_Cos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cos::initializeClass, 1)))
            return NULL;
          return t_Cos::wrap_Object(Cos(((t_Cos *) arg)->object.this$));
        }
        static PyObject *t_Cos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cos_init_(t_Cos *self, PyObject *args, PyObject *kwds)
        {
          Cos object((jobject) NULL);

          INT_CALL(object = Cos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cos_value(t_Cos *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagator::class$ = NULL;
          jmethodID *GNSSPropagator::mids$ = NULL;
          bool GNSSPropagator::live$ = false;

          jclass GNSSPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_6c9bc0a928c56d4e] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_557b8123390d8d0c] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getOrbitalElements_ade926af4f9fd05d] = env->getMethodID(cls, "getOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;");
              mids$[mid_propagateInEcef_f00f0e7ea285c370] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_6c9bc0a928c56d4e]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_6c9bc0a928c56d4e]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          jdouble GNSSPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_557b8123390d8d0c]);
          }

          ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements GNSSPropagator::getOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getOrbitalElements_ade926af4f9fd05d]));
          }

          ::org::orekit::utils::PVCoordinates GNSSPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_f00f0e7ea285c370], a0.this$));
          }

          void GNSSPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg);
          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data);
          static PyGetSetDef t_GNSSPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GNSSPropagator, eCEF),
            DECLARE_GET_FIELD(t_GNSSPropagator, eCI),
            DECLARE_GET_FIELD(t_GNSSPropagator, frame),
            DECLARE_GET_FIELD(t_GNSSPropagator, mU),
            DECLARE_GET_FIELD(t_GNSSPropagator, orbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GNSSPropagator__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GNSSPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GNSSPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagator)[] = {
            { Py_tp_methods, t_GNSSPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GNSSPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GNSSPropagator, t_GNSSPropagator, GNSSPropagator);

          void t_GNSSPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagator), &PY_TYPE_DEF(GNSSPropagator), module, "GNSSPropagator", 0);
          }

          void t_GNSSPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "class_", make_descriptor(GNSSPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "wrapfn_", make_descriptor(t_GNSSPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagator::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagator::wrap_Object(GNSSPropagator(((t_GNSSPropagator *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/LutherIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherIntegrator::class$ = NULL;
        jmethodID *LutherIntegrator::mids$ = NULL;
        bool LutherIntegrator::live$ = false;

        jclass LutherIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_9b7d6ac762efc6e5] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegrator::LutherIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        JArray< JArray< jdouble > > LutherIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > LutherIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > LutherIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args);
        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data);
        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data);
        static PyGetSetDef t_LutherIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherIntegrator, a),
          DECLARE_GET_FIELD(t_LutherIntegrator, b),
          DECLARE_GET_FIELD(t_LutherIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegrator)[] = {
          { Py_tp_methods, t_LutherIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherIntegrator_init_ },
          { Py_tp_getset, t_LutherIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherIntegrator, t_LutherIntegrator, LutherIntegrator);

        void t_LutherIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegrator), &PY_TYPE_DEF(LutherIntegrator), module, "LutherIntegrator", 0);
        }

        void t_LutherIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "class_", make_descriptor(LutherIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "wrapfn_", make_descriptor(t_LutherIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherIntegrator::wrap_Object(LutherIntegrator(((t_LutherIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegrator_init_(t_LutherIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegrator_getA(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherIntegrator_getB(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherIntegrator_getC(t_LutherIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(LutherIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_LutherIntegrator_get__a(t_LutherIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherIntegrator_get__b(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_LutherIntegrator_get__c(t_LutherIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonSwitchHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonSwitchHandler::class$ = NULL;
      jmethodID *PythonSwitchHandler::mids$ = NULL;
      bool PythonSwitchHandler::live$ = false;

      jclass PythonSwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonSwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_switchOccurred_990f4edc83670459] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSwitchHandler::PythonSwitchHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonSwitchHandler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonSwitchHandler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonSwitchHandler::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self);
      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args);
      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data);
      static PyGetSetDef t_PythonSwitchHandler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSwitchHandler, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSwitchHandler__methods_[] = {
        DECLARE_METHOD(t_PythonSwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSwitchHandler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSwitchHandler)[] = {
        { Py_tp_methods, t_PythonSwitchHandler__methods_ },
        { Py_tp_init, (void *) t_PythonSwitchHandler_init_ },
        { Py_tp_getset, t_PythonSwitchHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSwitchHandler, t_PythonSwitchHandler, PythonSwitchHandler);

      void t_PythonSwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSwitchHandler), &PY_TYPE_DEF(PythonSwitchHandler), module, "PythonSwitchHandler", 1);
      }

      void t_PythonSwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "class_", make_descriptor(PythonSwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "wrapfn_", make_descriptor(t_PythonSwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSwitchHandler::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonSwitchHandler_pythonDecRef0 },
          { "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSwitchHandler_switchOccurred1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSwitchHandler::initializeClass, 1)))
          return NULL;
        return t_PythonSwitchHandler::wrap_Object(PythonSwitchHandler(((t_PythonSwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds)
      {
        PythonSwitchHandler object((jobject) NULL);

        INT_CALL(object = PythonSwitchHandler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *o1 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a1));
        PyObject *o2 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a2));
        PyObject *result = PyObject_CallMethod(obj, "switchOccurred", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldAuxiliaryElements::class$ = NULL;
            jmethodID *FieldAuxiliaryElements::mids$ = NULL;
            bool FieldAuxiliaryElements::live$ = false;

            jclass FieldAuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_252b7dc99f1400c7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;I)V");
                mids$[mid_getAlpha_613c8f46c659f636] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getB_613c8f46c659f636] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_613c8f46c659f636] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getC_613c8f46c659f636] = env->getMethodID(cls, "getC", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
                mids$[mid_getEcc_613c8f46c659f636] = env->getMethodID(cls, "getEcc", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_613c8f46c659f636] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getH_613c8f46c659f636] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK_613c8f46c659f636] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKeplerianPeriod_613c8f46c659f636] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLM_613c8f46c659f636] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLe_613c8f46c659f636] = env->getMethodID(cls, "getLe", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLv_613c8f46c659f636] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_613c8f46c659f636] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbit_507d8b7ad2a799b5] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
                mids$[mid_getP_613c8f46c659f636] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getQ_613c8f46c659f636] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRetrogradeFactor_412668abc8d889e9] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_613c8f46c659f636] = env->getMethodID(cls, "getSma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getVectorF_2d64addf4c3391d9] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorG_2d64addf4c3391d9] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_getVectorW_2d64addf4c3391d9] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
                mids$[mid_toAuxiliaryElements_53e9e25baae02d2b] = env->getMethodID(cls, "toAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldAuxiliaryElements::FieldAuxiliaryElements(const ::org::orekit::orbits::FieldOrbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_252b7dc99f1400c7, a0.this$, a1)) {}

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getC() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getC_613c8f46c659f636]));
            }

            ::org::orekit::time::FieldAbsoluteDate FieldAuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getEcc() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEcc_613c8f46c659f636]));
            }

            ::org::orekit::frames::Frame FieldAuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getH() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getH_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getKeplerianPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLe() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLe_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getLv() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_613c8f46c659f636]));
            }

            ::org::orekit::orbits::FieldOrbit FieldAuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_507d8b7ad2a799b5]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getP() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getP_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getQ() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_613c8f46c659f636]));
            }

            jint FieldAuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_412668abc8d889e9]);
            }

            ::org::hipparchus::CalculusFieldElement FieldAuxiliaryElements::getSma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSma_613c8f46c659f636]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_2d64addf4c3391d9]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_2d64addf4c3391d9]));
            }

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_2d64addf4c3391d9]));
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements FieldAuxiliaryElements::toAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_toAuxiliaryElements_53e9e25baae02d2b]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_FieldAuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAuxiliaryElements_of_(t_FieldAuxiliaryElements *self, PyObject *args);
            static int t_FieldAuxiliaryElements_init_(t_FieldAuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldAuxiliaryElements_getAlpha(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getB(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getBeta(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getC(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getDate(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getEcc(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getFrame(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getGamma(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getH(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getK(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getKeplerianPeriod(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLM(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLe(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getLv(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getMeanMotion(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getOrbit(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getP(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getQ(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getRetrogradeFactor(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getSma(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorF(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorG(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_getVectorW(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_toAuxiliaryElements(t_FieldAuxiliaryElements *self);
            static PyObject *t_FieldAuxiliaryElements_get__alpha(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__b(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__beta(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__c(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__date(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__ecc(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__frame(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__gamma(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__h(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__k(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__keplerianPeriod(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__lM(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__le(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__lv(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__meanMotion(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__orbit(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__p(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__q(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__retrogradeFactor(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__sma(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorF(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorG(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__vectorW(t_FieldAuxiliaryElements *self, void *data);
            static PyObject *t_FieldAuxiliaryElements_get__parameters_(t_FieldAuxiliaryElements *self, void *data);
            static PyGetSetDef t_FieldAuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, b),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, c),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, date),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, h),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, k),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, le),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, p),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, q),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, vectorW),
              DECLARE_GET_FIELD(t_FieldAuxiliaryElements, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_FieldAuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLe, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, getVectorW, METH_NOARGS),
              DECLARE_METHOD(t_FieldAuxiliaryElements, toAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAuxiliaryElements)[] = {
              { Py_tp_methods, t_FieldAuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_FieldAuxiliaryElements_init_ },
              { Py_tp_getset, t_FieldAuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldAuxiliaryElements, t_FieldAuxiliaryElements, FieldAuxiliaryElements);
            PyObject *t_FieldAuxiliaryElements::wrap_Object(const FieldAuxiliaryElements& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAuxiliaryElements::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAuxiliaryElements *self = (t_FieldAuxiliaryElements *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAuxiliaryElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAuxiliaryElements::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAuxiliaryElements *self = (t_FieldAuxiliaryElements *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAuxiliaryElements), &PY_TYPE_DEF(FieldAuxiliaryElements), module, "FieldAuxiliaryElements", 0);
            }

            void t_FieldAuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "class_", make_descriptor(FieldAuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "wrapfn_", make_descriptor(t_FieldAuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_FieldAuxiliaryElements::wrap_Object(FieldAuxiliaryElements(((t_FieldAuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_FieldAuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAuxiliaryElements_of_(t_FieldAuxiliaryElements *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldAuxiliaryElements_init_(t_FieldAuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              FieldAuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldAuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldAuxiliaryElements_getAlpha(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getB(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getBeta(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getC(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getC());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getDate(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getEcc(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getEcc());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getFrame(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getGamma(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getH(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getH());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getK(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getKeplerianPeriod(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLM(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLe(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLe());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getLv(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getLv());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getMeanMotion(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getOrbit(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getP(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getP());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getQ(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getQ());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getRetrogradeFactor(t_FieldAuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_FieldAuxiliaryElements_getSma(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getSma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorF(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorG(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_getVectorW(t_FieldAuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_FieldAuxiliaryElements_toAuxiliaryElements(t_FieldAuxiliaryElements *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.toAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(result);
            }
            static PyObject *t_FieldAuxiliaryElements_get__parameters_(t_FieldAuxiliaryElements *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAuxiliaryElements_get__alpha(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__b(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__beta(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__c(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getC());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__date(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__ecc(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getEcc());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__frame(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__gamma(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__h(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getH());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__k(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__keplerianPeriod(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__lM(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLM());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__le(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLe());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__lv(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getLv());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__meanMotion(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__orbit(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__p(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getP());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__q(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getQ());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__retrogradeFactor(t_FieldAuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__sma(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getSma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorF(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorG(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }

            static PyObject *t_FieldAuxiliaryElements_get__vectorW(t_FieldAuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadataKey::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadataKey::mids$ = NULL;
              bool TrajectoryStateHistoryMetadataKey::live$ = false;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::CENTER_NAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::COMMENT = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_AVERAGING = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::PROPAGATOR = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_TYPE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_UNITS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass TrajectoryStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e4f3211c25f686c8] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_ca5aa833406c3b61] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");
                  mids$[mid_values_9208e883581135e9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CENTER_NAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  COMMENT = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION_DEGREE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_AVERAGING = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_AVERAGING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  PROPAGATOR = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "PROPAGATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_FRAME_EPOCH = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_NEXT_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_PREV_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_REF_FRAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_TYPE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_UNITS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_START_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_STOP_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean TrajectoryStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e4f3211c25f686c8], a0.this$, a1.this$, a2.this$);
              }

              TrajectoryStateHistoryMetadataKey TrajectoryStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return TrajectoryStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ca5aa833406c3b61], a0.this$));
              }

              JArray< TrajectoryStateHistoryMetadataKey > TrajectoryStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< TrajectoryStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_9208e883581135e9]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadataKey, t_TrajectoryStateHistoryMetadataKey, TrajectoryStateHistoryMetadataKey);
              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_Object(const TrajectoryStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_TrajectoryStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadataKey), &PY_TYPE_DEF(TrajectoryStateHistoryMetadataKey), module, "TrajectoryStateHistoryMetadataKey", 0);
              }

              void t_TrajectoryStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "class_", make_descriptor(TrajectoryStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "CENTER_NAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::CENTER_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "COMMENT", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_AVERAGING", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_AVERAGING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "PROPAGATOR", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::PROPAGATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_FRAME_EPOCH", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_NEXT_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_PREV_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_REF_FRAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_TYPE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_UNITS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_UNITS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_START_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadataKey::wrap_Object(TrajectoryStateHistoryMetadataKey(((t_TrajectoryStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                TrajectoryStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::valueOf(a0));
                  return t_TrajectoryStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< TrajectoryStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_TrajectoryStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/YawSteering.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawSteering::class$ = NULL;
      jmethodID *YawSteering::mids$ = NULL;
      bool YawSteering::live$ = false;

      jclass YawSteering::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawSteering");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_512099bd19ade067] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_77e3383de01f3e48] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_1306ac39e1d2de3f] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getTargetPV_ee00ab612436435b] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_9e0119a6fef31431] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawSteering::YawSteering(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_512099bd19ade067, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::FieldAttitude YawSteering::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawSteering::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawSteering::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawSteering::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ee00ab612436435b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_9e0119a6fef31431], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawSteering::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self);
      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data);
      static PyGetSetDef t_YawSteering__fields_[] = {
        DECLARE_GET_FIELD(t_YawSteering, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawSteering__methods_[] = {
        DECLARE_METHOD(t_YawSteering, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawSteering)[] = {
        { Py_tp_methods, t_YawSteering__methods_ },
        { Py_tp_init, (void *) t_YawSteering_init_ },
        { Py_tp_getset, t_YawSteering__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawSteering)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawSteering, t_YawSteering, YawSteering);

      void t_YawSteering::install(PyObject *module)
      {
        installType(&PY_TYPE(YawSteering), &PY_TYPE_DEF(YawSteering), module, "YawSteering", 0);
      }

      void t_YawSteering::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "class_", make_descriptor(YawSteering::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "wrapfn_", make_descriptor(t_YawSteering::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawSteering::initializeClass, 1)))
          return NULL;
        return t_YawSteering::wrap_Object(YawSteering(((t_YawSteering *) arg)->object.this$));
      }
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawSteering::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        YawSteering object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = YawSteering(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(YawSteering), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldAbstractPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAbstractPropagator::class$ = NULL;
      jmethodID *PythonFieldAbstractPropagator::mids$ = NULL;
      bool PythonFieldAbstractPropagator::live$ = false;

      jclass PythonFieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_addEventDetector_2ffeff0ffaf1deef] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_07866493eb3b3f17] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_78f4b3ee8066e6b6] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAbstractPropagator::PythonFieldAbstractPropagator(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::FieldAbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

      void PythonFieldAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldAbstractPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self);
      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data);
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonFieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonFieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonFieldAbstractPropagator, t_PythonFieldAbstractPropagator, PythonFieldAbstractPropagator);
      PyObject *t_PythonFieldAbstractPropagator::wrap_Object(const PythonFieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAbstractPropagator), &PY_TYPE_DEF(PythonFieldAbstractPropagator), module, "PythonFieldAbstractPropagator", 1);
      }

      void t_PythonFieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "class_", make_descriptor(PythonFieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAbstractPropagator::wrap_Object(PythonFieldAbstractPropagator(((t_PythonFieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        PythonFieldAbstractPropagator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = PythonFieldAbstractPropagator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Euclidean3D::class$ = NULL;
          jmethodID *Euclidean3D::mids$ = NULL;
          bool Euclidean3D::live$ = false;

          jclass Euclidean3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Euclidean3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_d2a0479b294c0f72] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/threed/Euclidean3D;");
              mids$[mid_getSubSpace_60c21a86e2a4669d] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean3D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
          }

          Euclidean3D Euclidean3D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean3D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_d2a0479b294c0f72]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Euclidean2D Euclidean3D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Euclidean2D(env->callObjectMethod(this$, mids$[mid_getSubSpace_60c21a86e2a4669d]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data);
          static PyGetSetDef t_Euclidean3D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean3D, dimension),
            DECLARE_GET_FIELD(t_Euclidean3D, instance),
            DECLARE_GET_FIELD(t_Euclidean3D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean3D__methods_[] = {
            DECLARE_METHOD(t_Euclidean3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean3D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean3D)[] = {
            { Py_tp_methods, t_Euclidean3D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean3D, t_Euclidean3D, Euclidean3D);

          void t_Euclidean3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean3D), &PY_TYPE_DEF(Euclidean3D), module, "Euclidean3D", 0);
          }

          void t_Euclidean3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "class_", make_descriptor(Euclidean3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "wrapfn_", make_descriptor(t_Euclidean3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean3D::initializeClass, 1)))
              return NULL;
            return t_Euclidean3D::wrap_Object(Euclidean3D(((t_Euclidean3D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type)
          {
            Euclidean3D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Euclidean3D::getInstance());
            return t_Euclidean3D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data)
          {
            Euclidean3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean3D::wrap_Object(value);
          }

          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialNutation::class$ = NULL;
      jmethodID *PolynomialNutation::mids$ = NULL;
      bool PolynomialNutation::live$ = false;

      jclass PolynomialNutation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialNutation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_derivative_7e960cd6eee376d8] = env->getMethodID(cls, "derivative", "(D)D");
          mids$[mid_derivative_6672ad854985cb64] = env->getMethodID(cls, "derivative", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialNutation::PolynomialNutation(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      jdouble PolynomialNutation::derivative(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_derivative_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::derivative(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_derivative_6672ad854985cb64], a0.this$));
      }

      jdouble PolynomialNutation::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args);
      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args);

      static PyMethodDef t_PolynomialNutation__methods_[] = {
        DECLARE_METHOD(t_PolynomialNutation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialNutation, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialNutation)[] = {
        { Py_tp_methods, t_PolynomialNutation__methods_ },
        { Py_tp_init, (void *) t_PolynomialNutation_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialNutation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialNutation, t_PolynomialNutation, PolynomialNutation);

      void t_PolynomialNutation::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialNutation), &PY_TYPE_DEF(PolynomialNutation), module, "PolynomialNutation", 0);
      }

      void t_PolynomialNutation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "class_", make_descriptor(PolynomialNutation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "wrapfn_", make_descriptor(t_PolynomialNutation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialNutation::initializeClass, 1)))
          return NULL;
        return t_PolynomialNutation::wrap_Object(PolynomialNutation(((t_PolynomialNutation *) arg)->object.this$));
      }
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialNutation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialNutation object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = PolynomialNutation(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
