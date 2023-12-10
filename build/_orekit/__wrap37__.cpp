#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AggregateBoundedAttitudeProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AggregateBoundedAttitudeProvider::class$ = NULL;
      jmethodID *AggregateBoundedAttitudeProvider::mids$ = NULL;
      bool AggregateBoundedAttitudeProvider::live$ = false;

      jclass AggregateBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AggregateBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_29422c22de775b74] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_53a81d4d17b13463] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregateBoundedAttitudeProvider::AggregateBoundedAttitudeProvider(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

      ::org::orekit::attitudes::FieldAttitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_29422c22de775b74], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_53a81d4d17b13463], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
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
      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_AggregateBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregateBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_AggregateBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_AggregateBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_AggregateBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregateBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregateBoundedAttitudeProvider, t_AggregateBoundedAttitudeProvider, AggregateBoundedAttitudeProvider);

      void t_AggregateBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregateBoundedAttitudeProvider), &PY_TYPE_DEF(AggregateBoundedAttitudeProvider), module, "AggregateBoundedAttitudeProvider", 0);
      }

      void t_AggregateBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "class_", make_descriptor(AggregateBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_AggregateBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AggregateBoundedAttitudeProvider::wrap_Object(AggregateBoundedAttitudeProvider(((t_AggregateBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        AggregateBoundedAttitudeProvider object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = AggregateBoundedAttitudeProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data)
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
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool AbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass AbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_cb44069ef445f941] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > AbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_cb44069ef445f941], a0.this$));
        }

        void AbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);

        static PyMethodDef t_AbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator$MainStateEquations, t_AbstractIntegratedPropagator$MainStateEquations, AbstractIntegratedPropagator$MainStateEquations);

        void t_AbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations), module, "AbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_AbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator$MainStateEquations::wrap_Object(AbstractIntegratedPropagator$MainStateEquations(((t_AbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldGradient::class$ = NULL;
        jmethodID *FieldGradient::mids$ = NULL;
        bool FieldGradient::live$ = false;

        jclass FieldGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d5bbe5a55e94255] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_bee5c8ff86f4e777] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_fd13058f823056bf] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acos_fd13058f823056bf] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acosh_fd13058f823056bf] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_8fe41ca8e34b8113] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_b5dabf06dd9a6e83] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_5324aa8c1d1b6d23] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asin_fd13058f823056bf] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asinh_fd13058f823056bf] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan_fd13058f823056bf] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan2_8fe41ca8e34b8113] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atanh_fd13058f823056bf] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cbrt_fd13058f823056bf] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ceil_fd13058f823056bf] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_compose_9cb868d668f0417f] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_constant_3bfe183eb218c3ad] = env->getStaticMethodID(cls, "constant", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_8fe41ca8e34b8113] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_b5dabf06dd9a6e83] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_5324aa8c1d1b6d23] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cos_fd13058f823056bf] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cosh_fd13058f823056bf] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_8fe41ca8e34b8113] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_b5dabf06dd9a6e83] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_5324aa8c1d1b6d23] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_fd13058f823056bf] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_expm1_fd13058f823056bf] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_floor_fd13058f823056bf] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_a06c5f20c120de2c] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_226a0b2040b1d2e1] = env->getMethodID(cls, "getGradient", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_46366c1e17d1d442] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPartialDerivative_93058f0552012043] = env->getMethodID(cls, "getPartialDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_fd13058f823056bf] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_eba8e72a22c984ac] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_5b28be2d3632a5dc] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_8fe41ca8e34b8113] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_e65dc81b09a51dd6] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_d765d5922e72c382] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_27bab0afb38a8d50] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldGradient;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_1d3b08d98275116a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_1450d933d40b0ee0] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_c48ce86819fe6e40] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_d1f192a4882a57fe] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_4df3c905a137cccd] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_a46269bee0c35d91] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_c4f28882b63531ba] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log_fd13058f823056bf] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log10_fd13058f823056bf] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log1p_fd13058f823056bf] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_8fe41ca8e34b8113] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_b5dabf06dd9a6e83] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_634d89a739ceb553] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_5324aa8c1d1b6d23] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_negate_fd13058f823056bf] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_b5dabf06dd9a6e83] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_5324aa8c1d1b6d23] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_8fe41ca8e34b8113] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_b5dabf06dd9a6e83] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_634d89a739ceb553] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_2bf151f38f73ee71] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_reciprocal_fd13058f823056bf] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_8fe41ca8e34b8113] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_b5dabf06dd9a6e83] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_5324aa8c1d1b6d23] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rint_fd13058f823056bf] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rootN_634d89a739ceb553] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_scalb_634d89a739ceb553] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sign_fd13058f823056bf] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sin_fd13058f823056bf] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_fd13058f823056bf] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_fd13058f823056bf] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_8fe41ca8e34b8113] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_b5dabf06dd9a6e83] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_5324aa8c1d1b6d23] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tan_fd13058f823056bf] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tanh_fd13058f823056bf] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_taylor_48885a3a6ec88a01] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_f2dc4f0d2f87d390] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_fd13058f823056bf] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_toDerivativeStructure_aa5c3ca19ecbe240] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_fd13058f823056bf] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ulp_fd13058f823056bf] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_variable_7d214e8ac8500390] = env->getStaticMethodID(cls, "variable", "(IILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldGradient::FieldGradient(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d5bbe5a55e94255, a0.this$)) {}

        FieldGradient::FieldGradient(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bee5c8ff86f4e777, a0.this$, a1.this$)) {}

        FieldGradient FieldGradient::abs() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_abs_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::acos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acos_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::acosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acosh_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::add(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::add(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_b5dabf06dd9a6e83], a0));
        }

        FieldGradient FieldGradient::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_5324aa8c1d1b6d23], a0.this$));
        }

        FieldGradient FieldGradient::asin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asin_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::asinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asinh_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::atan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::atan2(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan2_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::atanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atanh_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::cbrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cbrt_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::ceil() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ceil_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_compose_9cb868d668f0417f], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::constant(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_constant_3bfe183eb218c3ad], a0, a1.this$));
        }

        FieldGradient FieldGradient::copySign(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::copySign(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_b5dabf06dd9a6e83], a0));
        }

        FieldGradient FieldGradient::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_5324aa8c1d1b6d23], a0.this$));
        }

        FieldGradient FieldGradient::cos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cos_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::cosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cosh_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::divide(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::divide(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_b5dabf06dd9a6e83], a0));
        }

        FieldGradient FieldGradient::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_5324aa8c1d1b6d23], a0.this$));
        }

        jboolean FieldGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        FieldGradient FieldGradient::exp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_exp_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::expm1() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_expm1_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::floor() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_floor_fd13058f823056bf]));
        }

        jint FieldGradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::differentiation::FieldGradientField FieldGradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradientField(env->callObjectMethod(this$, mids$[mid_getField_a06c5f20c120de2c]));
        }

        jint FieldGradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldGradient::getGradient() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGradient_226a0b2040b1d2e1]));
        }

        jint FieldGradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_46366c1e17d1d442], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_93058f0552012043], a0));
        }

        FieldGradient FieldGradient::getPi() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_getPi_fd13058f823056bf]));
        }

        jdouble FieldGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_eba8e72a22c984ac]));
        }

        ::org::hipparchus::Field FieldGradient::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_5b28be2d3632a5dc]));
        }

        jint FieldGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        FieldGradient FieldGradient::hypot(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_hypot_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< jdouble > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e65dc81b09a51dd6], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d765d5922e72c382], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< FieldGradient > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_27bab0afb38a8d50], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_1d3b08d98275116a], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_1450d933d40b0ee0], a0, a1.this$, a2, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_c48ce86819fe6e40], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d1f192a4882a57fe], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldGradient & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldGradient & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_4df3c905a137cccd], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5, const FieldGradient & a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_a46269bee0c35d91], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5, jdouble a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_c4f28882b63531ba], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldGradient FieldGradient::log() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::log10() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log10_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::log1p() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log1p_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::multiply(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::multiply(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_b5dabf06dd9a6e83], a0));
        }

        FieldGradient FieldGradient::multiply(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_634d89a739ceb553], a0));
        }

        FieldGradient FieldGradient::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_5324aa8c1d1b6d23], a0.this$));
        }

        FieldGradient FieldGradient::negate() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_negate_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::newInstance(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_b5dabf06dd9a6e83], a0));
        }

        FieldGradient FieldGradient::newInstance(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_5324aa8c1d1b6d23], a0.this$));
        }

        FieldGradient FieldGradient::pow(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::pow(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_b5dabf06dd9a6e83], a0));
        }

        FieldGradient FieldGradient::pow(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_634d89a739ceb553], a0));
        }

        FieldGradient FieldGradient::pow(jdouble a0, const FieldGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_2bf151f38f73ee71], a0, a1.this$));
        }

        FieldGradient FieldGradient::reciprocal() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::remainder(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::remainder(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_b5dabf06dd9a6e83], a0));
        }

        FieldGradient FieldGradient::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_5324aa8c1d1b6d23], a0.this$));
        }

        FieldGradient FieldGradient::rint() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rint_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::rootN(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rootN_634d89a739ceb553], a0));
        }

        FieldGradient FieldGradient::scalb(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_scalb_634d89a739ceb553], a0));
        }

        FieldGradient FieldGradient::sign() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sign_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::sin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sin_fd13058f823056bf]));
        }

        ::org::hipparchus::util::FieldSinCos FieldGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        FieldGradient FieldGradient::sinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sinh_fd13058f823056bf]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        FieldGradient FieldGradient::sqrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sqrt_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::subtract(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_8fe41ca8e34b8113], a0.this$));
        }

        FieldGradient FieldGradient::subtract(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_b5dabf06dd9a6e83], a0));
        }

        FieldGradient FieldGradient::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_5324aa8c1d1b6d23], a0.this$));
        }

        FieldGradient FieldGradient::tan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tan_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::tanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tanh_fd13058f823056bf]));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_48885a3a6ec88a01], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_f2dc4f0d2f87d390], a0.this$));
        }

        FieldGradient FieldGradient::toDegrees() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_fd13058f823056bf]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldGradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_aa5c3ca19ecbe240]));
        }

        FieldGradient FieldGradient::toRadians() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toRadians_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::ulp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ulp_fd13058f823056bf]));
        }

        FieldGradient FieldGradient::variable(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_variable_7d214e8ac8500390], a0, a1, a2.this$));
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
      namespace differentiation {
        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args);
        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldGradient_abs(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_asin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self);
        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_cos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_exp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self);
        static PyObject *t_FieldGradient_floor(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_log(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log10(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self);
        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_negate(t_FieldGradient *self);
        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_rint(t_FieldGradient *self);
        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_sign(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_tan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data);
        static PyGetSetDef t_FieldGradient__fields_[] = {
          DECLARE_GET_FIELD(t_FieldGradient, exponent),
          DECLARE_GET_FIELD(t_FieldGradient, field),
          DECLARE_GET_FIELD(t_FieldGradient, freeParameters),
          DECLARE_GET_FIELD(t_FieldGradient, gradient),
          DECLARE_GET_FIELD(t_FieldGradient, order),
          DECLARE_GET_FIELD(t_FieldGradient, pi),
          DECLARE_GET_FIELD(t_FieldGradient, real),
          DECLARE_GET_FIELD(t_FieldGradient, value),
          DECLARE_GET_FIELD(t_FieldGradient, valueField),
          DECLARE_GET_FIELD(t_FieldGradient, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldGradient__methods_[] = {
          DECLARE_METHOD(t_FieldGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan2, METH_O),
          DECLARE_METHOD(t_FieldGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, hypot, METH_O),
          DECLARE_METHOD(t_FieldGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, rootN, METH_O),
          DECLARE_METHOD(t_FieldGradient, scalb, METH_O),
          DECLARE_METHOD(t_FieldGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldGradient)[] = {
          { Py_tp_methods, t_FieldGradient__methods_ },
          { Py_tp_init, (void *) t_FieldGradient_init_ },
          { Py_tp_getset, t_FieldGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldGradient, t_FieldGradient, FieldGradient);
        PyObject *t_FieldGradient::wrap_Object(const FieldGradient& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldGradient::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldGradient), &PY_TYPE_DEF(FieldGradient), module, "FieldGradient", 0);
        }

        void t_FieldGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "class_", make_descriptor(FieldGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "wrapfn_", make_descriptor(t_FieldGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldGradient::initializeClass, 1)))
            return NULL;
          return t_FieldGradient::wrap_Object(FieldGradient(((t_FieldGradient *) arg)->object.this$));
        }
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldGradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGradient(a0, a1));
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

        static PyObject *t_FieldGradient_abs(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_asin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::constant(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_cos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldGradient_exp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_floor(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getField(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldGradient > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient a6((jobject) NULL);
              PyTypeObject **p6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_, &a6, &p6, t_FieldGradient::parameters_, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_, &a6, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_log(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log10(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_negate(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldGradient a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::pow(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_rint(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_sign(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_tan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::variable(a0, a1, a2));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data)
        {
          FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldGradient::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *Orbit::class$ = NULL;
      jmethodID *Orbit::mids$ = NULL;
      bool Orbit::live$ = false;

      jclass Orbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/Orbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_f2365c7dd61a1cda] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_dff5885c2c873297] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_dff5885c2c873297] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_dff5885c2c873297] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_dff5885c2c873297] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_dff5885c2c873297] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_dff5885c2c873297] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getJacobianWrtCartesian_4ee3ef4c050fbae6] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getJacobianWrtParameters_4ee3ef4c050fbae6] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getKeplerianMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_dff5885c2c873297] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_dff5885c2c873297] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_dff5885c2c873297] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_dff5885c2c873297] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_dff5885c2c873297] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_dff5885c2c873297] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_dff5885c2c873297] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomalyDotWrtA_dff5885c2c873297] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()D");
          mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_d9ebf50b8aebcbf9] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_d52645e0d4c07563] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_e91e859b879f3586] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_b108b35ef48e27bd] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_b108b35ef48e27bd] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_3f8b433edd9f6aeb] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");
          mids$[mid_initPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_d52645e0d4c07563] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_hasNonKeplerianAcceleration_65cc08e55108dce0] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/PVCoordinates;D)Z");
          mids$[mid_fillHalfRow_876fc2f43c8a6523] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_7142bc4bf2c1376b] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_3d4e72ea841b766f] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_6580aea554067a3c] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_ff93f8d593f356b2] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_f22e655171dbba8e] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Orbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_f2365c7dd61a1cda], a0.this$, a1, a2.this$);
      }

      jdouble Orbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
      }

      jdouble Orbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_dff5885c2c873297]);
      }

      ::org::orekit::time::AbsoluteDate Orbit::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jdouble Orbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
      }

      jdouble Orbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_dff5885c2c873297]);
      }

      jdouble Orbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_dff5885c2c873297]);
      }

      jdouble Orbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_dff5885c2c873297]);
      }

      jdouble Orbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_dff5885c2c873297]);
      }

      jdouble Orbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_dff5885c2c873297]);
      }

      ::org::orekit::frames::Frame Orbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      jdouble Orbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_dff5885c2c873297]);
      }

      jdouble Orbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_dff5885c2c873297]);
      }

      jdouble Orbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_dff5885c2c873297]);
      }

      jdouble Orbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_dff5885c2c873297]);
      }

      jdouble Orbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
      }

      jdouble Orbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
      }

      void Orbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_4ee3ef4c050fbae6], a0.this$, a1.this$);
      }

      void Orbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_4ee3ef4c050fbae6], a0.this$, a1.this$);
      }

      jdouble Orbit::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_dff5885c2c873297]);
      }

      jdouble Orbit::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_dff5885c2c873297]);
      }

      jdouble Orbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_dff5885c2c873297]);
      }

      jdouble Orbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_dff5885c2c873297]);
      }

      jdouble Orbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_dff5885c2c873297]);
      }

      jdouble Orbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_dff5885c2c873297]);
      }

      jdouble Orbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_dff5885c2c873297]);
      }

      jdouble Orbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_dff5885c2c873297]);
      }

      jdouble Orbit::getMeanAnomalyDotWrtA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_dff5885c2c873297]);
      }

      jdouble Orbit::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_c204436deca11d94]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_d9ebf50b8aebcbf9], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_e91e859b879f3586], a0.this$));
      }

      ::org::orekit::orbits::OrbitType Orbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean Orbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_b108b35ef48e27bd]);
      }

      jboolean Orbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_b108b35ef48e27bd]);
      }

      Orbit Orbit::shiftedBy(jdouble a0) const
      {
        return Orbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_3f8b433edd9f6aeb], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getA(t_Orbit *self);
      static PyObject *t_Orbit_getADot(t_Orbit *self);
      static PyObject *t_Orbit_getDate(t_Orbit *self);
      static PyObject *t_Orbit_getE(t_Orbit *self);
      static PyObject *t_Orbit_getEDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self);
      static PyObject *t_Orbit_getFrame(t_Orbit *self);
      static PyObject *t_Orbit_getHx(t_Orbit *self);
      static PyObject *t_Orbit_getHxDot(t_Orbit *self);
      static PyObject *t_Orbit_getHy(t_Orbit *self);
      static PyObject *t_Orbit_getHyDot(t_Orbit *self);
      static PyObject *t_Orbit_getI(t_Orbit *self);
      static PyObject *t_Orbit_getIDot(t_Orbit *self);
      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self);
      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self);
      static PyObject *t_Orbit_getLE(t_Orbit *self);
      static PyObject *t_Orbit_getLEDot(t_Orbit *self);
      static PyObject *t_Orbit_getLM(t_Orbit *self);
      static PyObject *t_Orbit_getLMDot(t_Orbit *self);
      static PyObject *t_Orbit_getLv(t_Orbit *self);
      static PyObject *t_Orbit_getLvDot(t_Orbit *self);
      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self);
      static PyObject *t_Orbit_getMu(t_Orbit *self);
      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getType(t_Orbit *self);
      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self);
      static PyObject *t_Orbit_isElliptical(t_Orbit *self);
      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg);
      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data);
      static PyGetSetDef t_Orbit__fields_[] = {
        DECLARE_GET_FIELD(t_Orbit, a),
        DECLARE_GET_FIELD(t_Orbit, aDot),
        DECLARE_GET_FIELD(t_Orbit, date),
        DECLARE_GET_FIELD(t_Orbit, e),
        DECLARE_GET_FIELD(t_Orbit, eDot),
        DECLARE_GET_FIELD(t_Orbit, elliptical),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEx),
        DECLARE_GET_FIELD(t_Orbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEy),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_Orbit, frame),
        DECLARE_GET_FIELD(t_Orbit, hx),
        DECLARE_GET_FIELD(t_Orbit, hxDot),
        DECLARE_GET_FIELD(t_Orbit, hy),
        DECLARE_GET_FIELD(t_Orbit, hyDot),
        DECLARE_GET_FIELD(t_Orbit, i),
        DECLARE_GET_FIELD(t_Orbit, iDot),
        DECLARE_GET_FIELD(t_Orbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_Orbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_Orbit, lE),
        DECLARE_GET_FIELD(t_Orbit, lEDot),
        DECLARE_GET_FIELD(t_Orbit, lM),
        DECLARE_GET_FIELD(t_Orbit, lMDot),
        DECLARE_GET_FIELD(t_Orbit, lv),
        DECLARE_GET_FIELD(t_Orbit, lvDot),
        DECLARE_GET_FIELD(t_Orbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_Orbit, mu),
        DECLARE_GET_FIELD(t_Orbit, pVCoordinates),
        DECLARE_GET_FIELD(t_Orbit, position),
        DECLARE_GET_FIELD(t_Orbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Orbit__methods_[] = {
        DECLARE_METHOD(t_Orbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Orbit)[] = {
        { Py_tp_methods, t_Orbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Orbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Orbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Orbit, t_Orbit, Orbit);

      void t_Orbit::install(PyObject *module)
      {
        installType(&PY_TYPE(Orbit), &PY_TYPE_DEF(Orbit), module, "Orbit", 0);
      }

      void t_Orbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "class_", make_descriptor(Orbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "wrapfn_", make_descriptor(t_Orbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Orbit::initializeClass, 1)))
          return NULL;
        return t_Orbit::wrap_Object(Orbit(((t_Orbit *) arg)->object.this$));
      }
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Orbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_Orbit_getA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getADot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getADot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getDate(t_Orbit *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Orbit_getE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getFrame(t_Orbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Orbit_getHx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHxDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHxDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getI(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getIDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getIDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLM(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLMDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLv(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLvDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLvDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMu(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_Orbit_getType(t_Orbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_isElliptical(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg)
      {
        jdouble a0;
        Orbit result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Orbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonMatricesHarvester.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonMatricesHarvester::class$ = NULL;
      jmethodID *PythonMatricesHarvester::mids$ = NULL;
      bool PythonMatricesHarvester::live$ = false;

      jclass PythonMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_9483b2ac438718ce] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_setReferenceState_0ee5c56004643a2e] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMatricesHarvester::PythonMatricesHarvester() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonMatricesHarvester::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self);
      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args);
      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMatricesHarvester, t_PythonMatricesHarvester, PythonMatricesHarvester);

      void t_PythonMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMatricesHarvester), &PY_TYPE_DEF(PythonMatricesHarvester), module, "PythonMatricesHarvester", 1);
      }

      void t_PythonMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "class_", make_descriptor(PythonMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "wrapfn_", make_descriptor(t_PythonMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonMatricesHarvester_getJacobiansColumnsNames0 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonMatricesHarvester_getOrbitType1 },
          { "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getParametersJacobian2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonMatricesHarvester_getPositionAngleType3 },
          { "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getStateTransitionMatrix4 },
          { "pythonDecRef", "()V", (void *) t_PythonMatricesHarvester_pythonDecRef5 },
          { "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMatricesHarvester_setReferenceState6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonMatricesHarvester::wrap_Object(PythonMatricesHarvester(((t_PythonMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        PythonMatricesHarvester object((jobject) NULL);

        INT_CALL(object = PythonMatricesHarvester());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args)
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

      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJacobiansColumnsNames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getJacobiansColumnsNames", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getOrbitType", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParametersJacobian", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getParametersJacobian", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
        {
          throwTypeError("getPositionAngleType", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStateTransitionMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getStateTransitionMatrix", result);
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

      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "setReferenceState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Calibration::class$ = NULL;
        jmethodID *CRD$Calibration::mids$ = NULL;
        bool CRD$Calibration::live$ = false;

        jclass CRD$Calibration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Calibration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8911ec2fe4f4cc28] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDelayShift_dff5885c2c873297] = env->getMethodID(cls, "getDelayShift", "()D");
            mids$[mid_getDetectorChannel_570ce0828f81a2c1] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getKurtosis_dff5885c2c873297] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getNumberOfPointsRecorded_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfPointsRecorded", "()I");
            mids$[mid_getNumberOfPointsUsed_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfPointsUsed", "()I");
            mids$[mid_getOneWayDistance_dff5885c2c873297] = env->getMethodID(cls, "getOneWayDistance", "()D");
            mids$[mid_getPeakMinusMean_dff5885c2c873297] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getReturnRate_dff5885c2c873297] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getRms_dff5885c2c873297] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getShiftTypeIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getShiftTypeIndicator", "()I");
            mids$[mid_getSkew_dff5885c2c873297] = env->getMethodID(cls, "getSkew", "()D");
            mids$[mid_getSpan_570ce0828f81a2c1] = env->getMethodID(cls, "getSpan", "()I");
            mids$[mid_getSystemConfigurationId_11b109bd155ca898] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getSystemDelay_dff5885c2c873297] = env->getMethodID(cls, "getSystemDelay", "()D");
            mids$[mid_getTypeIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getTypeIndicator", "()I");
            mids$[mid_getTypeOfData_570ce0828f81a2c1] = env->getMethodID(cls, "getTypeOfData", "()I");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Calibration::CRD$Calibration(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8911ec2fe4f4cc28, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::org::orekit::time::AbsoluteDate CRD$Calibration::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        jdouble CRD$Calibration::getDelayShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDelayShift_dff5885c2c873297]);
        }

        jint CRD$Calibration::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_570ce0828f81a2c1]);
        }

        jdouble CRD$Calibration::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_dff5885c2c873297]);
        }

        jint CRD$Calibration::getNumberOfPointsRecorded() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsRecorded_570ce0828f81a2c1]);
        }

        jint CRD$Calibration::getNumberOfPointsUsed() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsUsed_570ce0828f81a2c1]);
        }

        jdouble CRD$Calibration::getOneWayDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOneWayDistance_dff5885c2c873297]);
        }

        jdouble CRD$Calibration::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_dff5885c2c873297]);
        }

        jdouble CRD$Calibration::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_dff5885c2c873297]);
        }

        jdouble CRD$Calibration::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_dff5885c2c873297]);
        }

        jint CRD$Calibration::getShiftTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getShiftTypeIndicator_570ce0828f81a2c1]);
        }

        jdouble CRD$Calibration::getSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkew_dff5885c2c873297]);
        }

        jint CRD$Calibration::getSpan() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpan_570ce0828f81a2c1]);
        }

        ::java::lang::String CRD$Calibration::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_11b109bd155ca898]));
        }

        jdouble CRD$Calibration::getSystemDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSystemDelay_dff5885c2c873297]);
        }

        jint CRD$Calibration::getTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeIndicator_570ce0828f81a2c1]);
        }

        jint CRD$Calibration::getTypeOfData() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeOfData_570ce0828f81a2c1]);
        }

        ::java::lang::String CRD$Calibration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRD$Calibration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      namespace ilrs {
        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args);
        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data);
        static PyGetSetDef t_CRD$Calibration__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Calibration, date),
          DECLARE_GET_FIELD(t_CRD$Calibration, delayShift),
          DECLARE_GET_FIELD(t_CRD$Calibration, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$Calibration, kurtosis),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsRecorded),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsUsed),
          DECLARE_GET_FIELD(t_CRD$Calibration, oneWayDistance),
          DECLARE_GET_FIELD(t_CRD$Calibration, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$Calibration, returnRate),
          DECLARE_GET_FIELD(t_CRD$Calibration, rms),
          DECLARE_GET_FIELD(t_CRD$Calibration, shiftTypeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, skew),
          DECLARE_GET_FIELD(t_CRD$Calibration, span),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemDelay),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeOfData),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Calibration__methods_[] = {
          DECLARE_METHOD(t_CRD$Calibration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDelayShift, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsRecorded, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsUsed, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getOneWayDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getShiftTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSpan, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemDelay, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeOfData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Calibration)[] = {
          { Py_tp_methods, t_CRD$Calibration__methods_ },
          { Py_tp_init, (void *) t_CRD$Calibration_init_ },
          { Py_tp_getset, t_CRD$Calibration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Calibration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Calibration, t_CRD$Calibration, CRD$Calibration);

        void t_CRD$Calibration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Calibration), &PY_TYPE_DEF(CRD$Calibration), module, "CRD$Calibration", 0);
        }

        void t_CRD$Calibration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "class_", make_descriptor(CRD$Calibration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "wrapfn_", make_descriptor(t_CRD$Calibration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Calibration::initializeClass, 1)))
            return NULL;
          return t_CRD$Calibration::wrap_Object(CRD$Calibration(((t_CRD$Calibration *) arg)->object.this$));
        }
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Calibration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jint a1;
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jdouble a9;
          jdouble a10;
          jdouble a11;
          jint a12;
          jint a13;
          jint a14;
          jint a15;
          jdouble a16;
          CRD$Calibration object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$Calibration(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDelayShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpan());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeOfData());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$Calibration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDelayShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpan());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeOfData());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044::class$ = NULL;
              jmethodID *Rtcm1044::mids$ = NULL;
              bool Rtcm1044::live$ = false;

              jclass Rtcm1044::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_11478f246aa58442] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044::Rtcm1044(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_11478f246aa58442, a0, a1.this$)) {}
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args);
              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data);
              static PyGetSetDef t_Rtcm1044__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1044, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044)[] = {
                { Py_tp_methods, t_Rtcm1044__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044_init_ },
                { Py_tp_getset, t_Rtcm1044__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1044, t_Rtcm1044, Rtcm1044);
              PyObject *t_Rtcm1044::wrap_Object(const Rtcm1044& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1044::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1044::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044), &PY_TYPE_DEF(Rtcm1044), module, "Rtcm1044", 0);
              }

              void t_Rtcm1044::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "class_", make_descriptor(Rtcm1044::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "wrapfn_", make_descriptor(t_Rtcm1044::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044::wrap_Object(Rtcm1044(((t_Rtcm1044 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data a1((jobject) NULL);
                Rtcm1044 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1044(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1044Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalProcess::class$ = NULL;
        jmethodID *SemiAnalyticalProcess::mids$ = NULL;
        bool SemiAnalyticalProcess::live$ = false;

        jclass SemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_da0919b7ae9816a3] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_0fa09c18fee449d5] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_fc89aee73878aefd] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_0ee5c56004643a2e] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateNominalSpacecraftState_0ee5c56004643a2e] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_0ee5c56004643a2e] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalProcess::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_da0919b7ae9816a3], a0.this$, a1.this$);
        }

        void SemiAnalyticalProcess::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_0fa09c18fee449d5]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalProcess::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_fc89aee73878aefd]));
        }

        void SemiAnalyticalProcess::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_0ee5c56004643a2e], a0.this$);
        }

        void SemiAnalyticalProcess::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_0ee5c56004643a2e], a0.this$);
        }

        void SemiAnalyticalProcess::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_0ee5c56004643a2e], a0.this$);
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args);
        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_SemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalProcess, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_SemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalProcess, t_SemiAnalyticalProcess, SemiAnalyticalProcess);

        void t_SemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalProcess), &PY_TYPE_DEF(SemiAnalyticalProcess), module, "SemiAnalyticalProcess", 0);
        }

        void t_SemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "class_", make_descriptor(SemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "wrapfn_", make_descriptor(t_SemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalProcess::wrap_Object(SemiAnalyticalProcess(((t_SemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeIonosphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeIonosphericDelayModifier::live$ = false;

          jclass TurnAroundRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_88af61602f29e4c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeIonosphericDelayModifier::TurnAroundRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88af61602f29e4c4, a0.this$, a1)) {}

          ::java::util::List TurnAroundRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void TurnAroundRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void TurnAroundRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeIonosphericDelayModifier, t_TurnAroundRangeIonosphericDelayModifier, TurnAroundRangeIonosphericDelayModifier);

          void t_TurnAroundRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeIonosphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeIonosphericDelayModifier), module, "TurnAroundRangeIonosphericDelayModifier", 0);
          }

          void t_TurnAroundRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "class_", make_descriptor(TurnAroundRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeIonosphericDelayModifier::wrap_Object(TurnAroundRangeIonosphericDelayModifier(((t_TurnAroundRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TurnAroundRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TurnAroundRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbSatellite::class$ = NULL;
        jmethodID *DcbSatellite::mids$ = NULL;
        bool DcbSatellite::live$ = false;

        jclass DcbSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_getDcbData_9b5127ddb8c8d319] = env->getMethodID(cls, "getDcbData", "()Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_b66783625d13e607] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getPRN_11b109bd155ca898] = env->getMethodID(cls, "getPRN", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSytem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSytem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_setDescription_c7a638e3ab0f92d6] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbSatellite::DcbSatellite(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

        ::org::orekit::files::sinex::Dcb DcbSatellite::getDcbData() const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_9b5127ddb8c8d319]));
        }

        ::org::orekit::files::sinex::DcbDescription DcbSatellite::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_b66783625d13e607]));
        }

        ::java::lang::String DcbSatellite::getPRN() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPRN_11b109bd155ca898]));
        }

        ::org::orekit::gnss::SatelliteSystem DcbSatellite::getSatelliteSytem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSytem_01acae5c1a253b8e]));
        }

        void DcbSatellite::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_c7a638e3ab0f92d6], a0.this$);
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
        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg);
        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data);
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data);
        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data);
        static PyGetSetDef t_DcbSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_DcbSatellite, dcbData),
          DECLARE_GETSET_FIELD(t_DcbSatellite, description),
          DECLARE_GET_FIELD(t_DcbSatellite, pRN),
          DECLARE_GET_FIELD(t_DcbSatellite, satelliteSytem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbSatellite__methods_[] = {
          DECLARE_METHOD(t_DcbSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, getDcbData, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getPRN, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getSatelliteSytem, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbSatellite)[] = {
          { Py_tp_methods, t_DcbSatellite__methods_ },
          { Py_tp_init, (void *) t_DcbSatellite_init_ },
          { Py_tp_getset, t_DcbSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbSatellite, t_DcbSatellite, DcbSatellite);

        void t_DcbSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbSatellite), &PY_TYPE_DEF(DcbSatellite), module, "DcbSatellite", 0);
        }

        void t_DcbSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "class_", make_descriptor(DcbSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "wrapfn_", make_descriptor(t_DcbSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbSatellite::initializeClass, 1)))
            return NULL;
          return t_DcbSatellite::wrap_Object(DcbSatellite(((t_DcbSatellite *) arg)->object.this$));
        }
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbSatellite object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);
          OBJ_CALL(result = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPRN());
          return j2p(result);
        }

        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg)
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

        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::Dcb value((jobject) NULL);
          OBJ_CALL(value = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(value);
        }

        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data)
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

        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPRN());
          return j2p(value);
        }

        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/TriangularDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TriangularDistribution::class$ = NULL;
        jmethodID *TriangularDistribution::mids$ = NULL;
        bool TriangularDistribution::live$ = false;

        jclass TriangularDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TriangularDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMode_dff5885c2c873297] = env->getMethodID(cls, "getMode", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TriangularDistribution::TriangularDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble TriangularDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble TriangularDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble TriangularDistribution::getMode() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMode_dff5885c2c873297]);
        }

        jdouble TriangularDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble TriangularDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble TriangularDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble TriangularDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble TriangularDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean TriangularDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self);
        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args);
        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data);
        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data);
        static PyGetSetDef t_TriangularDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TriangularDistribution, mode),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TriangularDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TriangularDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TriangularDistribution__methods_[] = {
          DECLARE_METHOD(t_TriangularDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TriangularDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getMode, METH_NOARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TriangularDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TriangularDistribution)[] = {
          { Py_tp_methods, t_TriangularDistribution__methods_ },
          { Py_tp_init, (void *) t_TriangularDistribution_init_ },
          { Py_tp_getset, t_TriangularDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TriangularDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TriangularDistribution, t_TriangularDistribution, TriangularDistribution);

        void t_TriangularDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TriangularDistribution), &PY_TYPE_DEF(TriangularDistribution), module, "TriangularDistribution", 0);
        }

        void t_TriangularDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "class_", make_descriptor(TriangularDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "wrapfn_", make_descriptor(t_TriangularDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TriangularDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TriangularDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TriangularDistribution::initializeClass, 1)))
            return NULL;
          return t_TriangularDistribution::wrap_Object(TriangularDistribution(((t_TriangularDistribution *) arg)->object.this$));
        }
        static PyObject *t_TriangularDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TriangularDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TriangularDistribution_init_(t_TriangularDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          TriangularDistribution object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = TriangularDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TriangularDistribution_cumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_density(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TriangularDistribution_getMode(t_TriangularDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMode());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TriangularDistribution_getNumericalMean(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TriangularDistribution_getNumericalVariance(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportLowerBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_getSupportUpperBound(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TriangularDistribution_inverseCumulativeProbability(t_TriangularDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_TriangularDistribution_isSupportConnected(t_TriangularDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TriangularDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TriangularDistribution_get__mode(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMode());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalMean(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__numericalVariance(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportConnected(t_TriangularDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TriangularDistribution_get__supportLowerBound(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TriangularDistribution_get__supportUpperBound(t_TriangularDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader$LineParameters::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader$LineParameters::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader$LineParameters::live$ = false;

            jclass CssiSpaceWeatherDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_579f999607b35cc8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;[DD[DDDIDDDDD)V");
                mids$[mid_compareTo_b2c45b61abaea01a] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getApAvg_dff5885c2c873297] = env->getMethodID(cls, "getApAvg", "()D");
                mids$[mid_getCtr81Adj_dff5885c2c873297] = env->getMethodID(cls, "getCtr81Adj", "()D");
                mids$[mid_getCtr81Obs_dff5885c2c873297] = env->getMethodID(cls, "getCtr81Obs", "()D");
                mids$[mid_getF107Adj_dff5885c2c873297] = env->getMethodID(cls, "getF107Adj", "()D");
                mids$[mid_getF107Obs_dff5885c2c873297] = env->getMethodID(cls, "getF107Obs", "()D");
                mids$[mid_getFluxQualifier_570ce0828f81a2c1] = env->getMethodID(cls, "getFluxQualifier", "()I");
                mids$[mid_getKpSum_dff5885c2c873297] = env->getMethodID(cls, "getKpSum", "()D");
                mids$[mid_getLst81Adj_dff5885c2c873297] = env->getMethodID(cls, "getLst81Adj", "()D");
                mids$[mid_getLst81Obs_dff5885c2c873297] = env->getMethodID(cls, "getLst81Obs", "()D");
                mids$[mid_getThreeHourlyAp_60c7040667a7dc5c] = env->getMethodID(cls, "getThreeHourlyAp", "()[D");
                mids$[mid_getThreeHourlyAp_46f85b53d9aedd96] = env->getMethodID(cls, "getThreeHourlyAp", "(I)D");
                mids$[mid_getThreeHourlyKp_60c7040667a7dc5c] = env->getMethodID(cls, "getThreeHourlyKp", "()[D");
                mids$[mid_getThreeHourlyKp_46f85b53d9aedd96] = env->getMethodID(cls, "getThreeHourlyKp", "(I)D");
                mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader$LineParameters::CssiSpaceWeatherDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, jdouble a2, const JArray< jdouble > & a3, jdouble a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(env->newObject(initializeClass, &mids$, mid_init$_579f999607b35cc8, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            jint CssiSpaceWeatherDataLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_b2c45b61abaea01a], a0.this$);
            }

            jboolean CssiSpaceWeatherDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getApAvg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApAvg_dff5885c2c873297]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Adj_dff5885c2c873297]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Obs_dff5885c2c873297]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Adj_dff5885c2c873297]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Obs_dff5885c2c873297]);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::getFluxQualifier() const
            {
              return env->callIntMethod(this$, mids$[mid_getFluxQualifier_570ce0828f81a2c1]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getKpSum() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKpSum_dff5885c2c873297]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Adj_dff5885c2c873297]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Obs_dff5885c2c873297]);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyAp_60c7040667a7dc5c]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyAp_46f85b53d9aedd96], a0);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyKp_60c7040667a7dc5c]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKp_46f85b53d9aedd96], a0);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_of_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader$LineParameters_init_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_compareTo(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_equals(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getApAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getFluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getKpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_hashCode(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__apAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__fluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__kpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, apAvg),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, ctr81Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, ctr81Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, f107Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, f107Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, fluxQualifier),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, kpSum),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, lst81Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, lst81Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, threeHourlyAp),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, threeHourlyKp),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, compareTo, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getApAvg, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getCtr81Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getCtr81Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getF107Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getF107Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getFluxQualifier, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getKpSum, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getLst81Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getLst81Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getThreeHourlyAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getThreeHourlyKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader$LineParameters, t_CssiSpaceWeatherDataLoader$LineParameters, CssiSpaceWeatherDataLoader$LineParameters);
            PyObject *t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(const CssiSpaceWeatherDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader$LineParameters *self = (t_CssiSpaceWeatherDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader$LineParameters *self = (t_CssiSpaceWeatherDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters), module, "CssiSpaceWeatherDataLoader$LineParameters", 0);
            }

            void t_CssiSpaceWeatherDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "class_", make_descriptor(CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(CssiSpaceWeatherDataLoader$LineParameters(((t_CssiSpaceWeatherDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_of_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader$LineParameters_init_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              CssiSpaceWeatherDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "k[DD[DDDIDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_compareTo(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "compareTo", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_equals(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getApAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApAvg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr81Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr81Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getFluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFluxQualifier());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getKpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKpSum());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLst81Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLst81Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  JArray< jdouble > result((jobject) NULL);
                  OBJ_CALL(result = self->object.getThreeHourlyAp());
                  return result.wrap();
                }
                break;
               case 1:
                {
                  jint a0;
                  jdouble result;

                  if (!parseArgs(args, "I", &a0))
                  {
                    OBJ_CALL(result = self->object.getThreeHourlyAp(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getThreeHourlyAp", args);
              return NULL;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  JArray< jdouble > result((jobject) NULL);
                  OBJ_CALL(result = self->object.getThreeHourlyKp());
                  return result.wrap();
                }
                break;
               case 1:
                {
                  jint a0;
                  jdouble result;

                  if (!parseArgs(args, "I", &a0))
                  {
                    OBJ_CALL(result = self->object.getThreeHourlyKp(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKp", args);
              return NULL;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_hashCode(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__apAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApAvg());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr81Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr81Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__fluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFluxQualifier());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__kpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKpSum());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLst81Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLst81Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getThreeHourlyAp());
              return value.wrap();
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getThreeHourlyKp());
              return value.wrap();
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TrackingMode::class$ = NULL;
            jmethodID *TrackingMode::mids$ = NULL;
            bool TrackingMode::live$ = false;
            TrackingMode *TrackingMode::SEQUENTIAL = NULL;
            TrackingMode *TrackingMode::SINGLE_DIFF = NULL;

            jclass TrackingMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TrackingMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_a92e85cc7e37f990] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_values_13759770a5cdb28d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SEQUENTIAL = new TrackingMode(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                SINGLE_DIFF = new TrackingMode(env->getStaticObjectField(cls, "SINGLE_DIFF", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TrackingMode TrackingMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TrackingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a92e85cc7e37f990], a0.this$));
            }

            JArray< TrackingMode > TrackingMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TrackingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_13759770a5cdb28d]));
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
          namespace tdm {
            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args);
            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TrackingMode_values(PyTypeObject *type);
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data);
            static PyGetSetDef t_TrackingMode__fields_[] = {
              DECLARE_GET_FIELD(t_TrackingMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TrackingMode__methods_[] = {
              DECLARE_METHOD(t_TrackingMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_TrackingMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TrackingMode)[] = {
              { Py_tp_methods, t_TrackingMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TrackingMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TrackingMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TrackingMode, t_TrackingMode, TrackingMode);
            PyObject *t_TrackingMode::wrap_Object(const TrackingMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TrackingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TrackingMode::install(PyObject *module)
            {
              installType(&PY_TYPE(TrackingMode), &PY_TYPE_DEF(TrackingMode), module, "TrackingMode", 0);
            }

            void t_TrackingMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "class_", make_descriptor(TrackingMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "wrapfn_", make_descriptor(t_TrackingMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(TrackingMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SEQUENTIAL", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SEQUENTIAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SINGLE_DIFF", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SINGLE_DIFF)));
            }

            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TrackingMode::initializeClass, 1)))
                return NULL;
              return t_TrackingMode::wrap_Object(TrackingMode(((t_TrackingMode *) arg)->object.this$));
            }
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TrackingMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TrackingMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::valueOf(a0));
                return t_TrackingMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TrackingMode_values(PyTypeObject *type)
            {
              JArray< TrackingMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::values());
              return JArray<jobject>(result.this$).wrap(t_TrackingMode::wrap_jobject);
            }
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonPVCoordinatesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonPVCoordinatesProvider::mids$ = NULL;
      bool PythonPVCoordinatesProvider::live$ = false;

      jclass PythonPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPVCoordinatesProvider::PythonPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonPVCoordinatesProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonPVCoordinatesProvider_init_(t_PythonPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonPVCoordinatesProvider_finalize(t_PythonPVCoordinatesProvider *self);
      static PyObject *t_PythonPVCoordinatesProvider_pythonExtension(t_PythonPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonPVCoordinatesProvider_get__self(t_PythonPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonPVCoordinatesProvider, t_PythonPVCoordinatesProvider, PythonPVCoordinatesProvider);

      void t_PythonPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonPVCoordinatesProvider), &PY_TYPE_DEF(PythonPVCoordinatesProvider), module, "PythonPVCoordinatesProvider", 1);
      }

      void t_PythonPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "class_", make_descriptor(PythonPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonPVCoordinatesProvider_getPVCoordinates0 },
          { "pythonDecRef", "()V", (void *) t_PythonPVCoordinatesProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonPVCoordinatesProvider::wrap_Object(PythonPVCoordinatesProvider(((t_PythonPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonPVCoordinatesProvider_init_(t_PythonPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonPVCoordinatesProvider_finalize(t_PythonPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonPVCoordinatesProvider_pythonExtension(t_PythonPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static void JNICALL t_PythonPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonPVCoordinatesProvider_get__self(t_PythonPVCoordinatesProvider *self, void *data)
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
#include "org/orekit/models/earth/troposphere/PythonMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonMappingFunction::class$ = NULL;
          jmethodID *PythonMappingFunction::mids$ = NULL;
          bool PythonMappingFunction::live$ = false;

          jclass PythonMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactors_7ef12dc9276409e6] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6f55c0ac27817ed2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMappingFunction::PythonMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonMappingFunction::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self);
          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data);
          static PyGetSetDef t_PythonMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMappingFunction)[] = {
            { Py_tp_methods, t_PythonMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonMappingFunction_init_ },
            { Py_tp_getset, t_PythonMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMappingFunction, t_PythonMappingFunction, PythonMappingFunction);

          void t_PythonMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMappingFunction), &PY_TYPE_DEF(PythonMappingFunction), module, "PythonMappingFunction", 1);
          }

          void t_PythonMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "class_", make_descriptor(PythonMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "wrapfn_", make_descriptor(t_PythonMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonMappingFunction_mappingFactors0 },
              { "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonMappingFunction_mappingFactors1 },
              { "pythonDecRef", "()V", (void *) t_PythonMappingFunction_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonMappingFunction::wrap_Object(PythonMappingFunction(((t_PythonMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args)
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "dOO", (double) a0, o1, o2);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("mappingFactors", result);
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactors", result);
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

          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeader::class$ = NULL;
            jmethodID *CdmHeader::mids$ = NULL;
            bool CdmHeader::live$ = false;

            jclass CdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getMessageFor_11b109bd155ca898] = env->getMethodID(cls, "getMessageFor", "()Ljava/lang/String;");
                mids$[mid_setMessageFor_d0bc48d5b00dc40c] = env->getMethodID(cls, "setMessageFor", "(Ljava/lang/String;)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeader::CdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::java::lang::String CdmHeader::getMessageFor() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageFor_11b109bd155ca898]));
            }

            void CdmHeader::setMessageFor(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMessageFor_d0bc48d5b00dc40c], a0.this$);
            }

            void CdmHeader::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
          namespace cdm {
            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self);
            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg);
            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args);
            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data);
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmHeader, messageFor),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeader__methods_[] = {
              DECLARE_METHOD(t_CdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, getMessageFor, METH_NOARGS),
              DECLARE_METHOD(t_CdmHeader, setMessageFor, METH_O),
              DECLARE_METHOD(t_CdmHeader, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeader)[] = {
              { Py_tp_methods, t_CdmHeader__methods_ },
              { Py_tp_init, (void *) t_CdmHeader_init_ },
              { Py_tp_getset, t_CdmHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(CdmHeader, t_CdmHeader, CdmHeader);

            void t_CdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeader), &PY_TYPE_DEF(CdmHeader), module, "CdmHeader", 0);
            }

            void t_CdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "class_", make_descriptor(CdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "wrapfn_", make_descriptor(t_CdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeader::initializeClass, 1)))
                return NULL;
              return t_CdmHeader::wrap_Object(CdmHeader(((t_CdmHeader *) arg)->object.this$));
            }
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds)
            {
              CdmHeader object((jobject) NULL);

              INT_CALL(object = CdmHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessageFor());
              return j2p(result);
            }

            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setMessageFor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMessageFor", arg);
              return NULL;
            }

            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmHeader), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getMessageFor());
              return j2p(value);
            }
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setMessageFor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "messageFor", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUp::class$ = NULL;
          jmethodID *WindUp::mids$ = NULL;
          bool WindUp::live$ = false;

          jclass WindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_emitterToInert_e7f87679ee42d076] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_e7f87679ee42d076] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args);
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data);
          static PyGetSetDef t_WindUp__fields_[] = {
            DECLARE_GET_FIELD(t_WindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WindUp__methods_[] = {
            DECLARE_METHOD(t_WindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUp)[] = {
            { Py_tp_methods, t_WindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_WindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(WindUp, t_WindUp, WindUp);
          PyObject *t_WindUp::wrap_Object(const WindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUp), &PY_TYPE_DEF(WindUp), module, "WindUp", 0);
          }

          void t_WindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "class_", make_descriptor(WindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "wrapfn_", make_descriptor(t_WindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUp::initializeClass, 1)))
              return NULL;
            return t_WindUp::wrap_Object(WindUp(((t_WindUp *) arg)->object.this$));
          }
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data)
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
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventOccurrence::class$ = NULL;
        jmethodID *EventOccurrence::mids$ = NULL;
        bool EventOccurrence::live$ = false;

        jclass EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d715ab096cbe3d3a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_getAction_4aa421fecbe7eed3] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_a50ac4c184b2434f] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/ODEState;");
            mids$[mid_getStopTime_dff5885c2c873297] = env->getMethodID(cls, "getStopTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventOccurrence::EventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d715ab096cbe3d3a, a0.this$, a1.this$, a2)) {}

        ::org::hipparchus::ode::events::Action EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_4aa421fecbe7eed3]));
        }

        ::org::hipparchus::ode::ODEState EventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_getNewState_a50ac4c184b2434f]));
        }

        jdouble EventOccurrence::getStopTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStopTime_dff5885c2c873297]);
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
      namespace events {
        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data);
        static PyGetSetDef t_EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventOccurrence, stopTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventOccurrence)[] = {
          { Py_tp_methods, t_EventOccurrence__methods_ },
          { Py_tp_init, (void *) t_EventOccurrence_init_ },
          { Py_tp_getset, t_EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventOccurrence, t_EventOccurrence, EventOccurrence);

        void t_EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventOccurrence), &PY_TYPE_DEF(EventOccurrence), module, "EventOccurrence", 0);
        }

        void t_EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "class_", make_descriptor(EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "wrapfn_", make_descriptor(t_EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventOccurrence::wrap_Object(EventOccurrence(((t_EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          EventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KkD", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &a2))
          {
            INT_CALL(object = EventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::ODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStopTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStopTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader::mids$ = NULL;
            bool AbstractSolarActivityDataLoader::live$ = false;

            jclass AbstractSolarActivityDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDataSet_917725130bbb61f1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getUTC_c39031284193adbe] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_setMaxDate_600a2a61652bc473] = env->getMethodID(cls, "setMaxDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setMinDate_600a2a61652bc473] = env->getMethodID(cls, "setMinDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::SortedSet AbstractSolarActivityDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_917725130bbb61f1]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityDataLoader::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_c39031284193adbe]));
            }

            void AbstractSolarActivityDataLoader::setMaxDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxDate_600a2a61652bc473], a0.this$);
            }

            void AbstractSolarActivityDataLoader::setMinDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMinDate_600a2a61652bc473], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, dataSet),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, maxDate),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getUTC, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMaxDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMinDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader, t_AbstractSolarActivityDataLoader, AbstractSolarActivityDataLoader);
            PyObject *t_AbstractSolarActivityDataLoader::wrap_Object(const AbstractSolarActivityDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader), &PY_TYPE_DEF(AbstractSolarActivityDataLoader), module, "AbstractSolarActivityDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters)));
            }

            void t_AbstractSolarActivityDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "class_", make_descriptor(AbstractSolarActivityDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader::wrap_Object(AbstractSolarActivityDataLoader(((t_AbstractSolarActivityDataLoader *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMinDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMinDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMinDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "minDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              OBJ_CALL(value = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStampedPair.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStampedPair::class$ = NULL;
      jmethodID *FieldTimeStampedPair::mids$ = NULL;
      bool FieldTimeStampedPair::live$ = false;
      jdouble FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass FieldTimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ad927ae988773bc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)V");
          mids$[mid_init$_c36016fb2ef54a90] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;D)V");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFirst_f8d8d28f6791aa76] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getSecond_f8d8d28f6791aa76] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ad927ae988773bc, a0.this$, a1.this$)) {}

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c36016fb2ef54a90, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStampedPair::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_f8d8d28f6791aa76]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_f8d8d28f6791aa76]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args);
      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data);
      static PyGetSetDef t_FieldTimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, date),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, first),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, second),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedPair)[] = {
        { Py_tp_methods, t_FieldTimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_FieldTimeStampedPair_init_ },
        { Py_tp_getset, t_FieldTimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedPair, t_FieldTimeStampedPair, FieldTimeStampedPair);
      PyObject *t_FieldTimeStampedPair::wrap_Object(const FieldTimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      void t_FieldTimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedPair), &PY_TYPE_DEF(FieldTimeStampedPair), module, "FieldTimeStampedPair", 0);
      }

      void t_FieldTimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "class_", make_descriptor(FieldTimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "wrapfn_", make_descriptor(t_FieldTimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldTimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedPair::wrap_Object(FieldTimeStampedPair(((t_FieldTimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 3, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a2))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1, a2));
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

      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[2]);
      }

      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateModifierUtil::class$ = NULL;
          jmethodID *RangeRateModifierUtil::mids$ = NULL;
          bool RangeRateModifierUtil::live$ = false;

          jclass RangeRateModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeRateModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeRateModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateModifierUtil)[] = {
            { Py_tp_methods, t_RangeRateModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeRateModifierUtil, t_RangeRateModifierUtil, RangeRateModifierUtil);

          void t_RangeRateModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateModifierUtil), &PY_TYPE_DEF(RangeRateModifierUtil), module, "RangeRateModifierUtil", 0);
          }

          void t_RangeRateModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "class_", make_descriptor(RangeRateModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "wrapfn_", make_descriptor(t_RangeRateModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeRateModifierUtil::wrap_Object(RangeRateModifierUtil(((t_RangeRateModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateModifierUtil::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Collection.h"
#include "java/util/Iterator.h"
#include "java/util/stream/Stream.h"
#include "java/util/Collection.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collection::class$ = NULL;
    jmethodID *Collection::mids$ = NULL;
    bool Collection::live$ = false;

    jclass Collection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_17e918edc999b3c7] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_17e918edc999b3c7] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_parallelStream_20f6d2b462aaef4b] = env->getMethodID(cls, "parallelStream", "()Ljava/util/stream/Stream;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_17e918edc999b3c7] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_17e918edc999b3c7] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_stream_20f6d2b462aaef4b] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toArray_b93c730013ce64c6] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_72bb572e6638b43f] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    jboolean Collection::addAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17e918edc999b3c7], a0.this$);
    }

    void Collection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    jboolean Collection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    jboolean Collection::containsAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_17e918edc999b3c7], a0.this$);
    }

    jboolean Collection::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jint Collection::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean Collection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Iterator Collection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    ::java::util::stream::Stream Collection::parallelStream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_parallelStream_20f6d2b462aaef4b]));
    }

    jboolean Collection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    jboolean Collection::removeAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_17e918edc999b3c7], a0.this$);
    }

    jboolean Collection::retainAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_17e918edc999b3c7], a0.this$);
    }

    jint Collection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::util::Spliterator Collection::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
    }

    ::java::util::stream::Stream Collection::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_20f6d2b462aaef4b]));
    }

    JArray< ::java::lang::Object > Collection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_b93c730013ce64c6]));
    }

    JArray< ::java::lang::Object > Collection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_72bb572e6638b43f], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_clear(t_Collection *self);
    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_hashCode(t_Collection *self);
    static PyObject *t_Collection_isEmpty(t_Collection *self);
    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_parallelStream(t_Collection *self);
    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_size(t_Collection *self);
    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_stream(t_Collection *self);
    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_get__empty(t_Collection *self, void *data);
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data);
    static PyGetSetDef t_Collection__fields_[] = {
      DECLARE_GET_FIELD(t_Collection, empty),
      DECLARE_GET_FIELD(t_Collection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Collection__methods_[] = {
      DECLARE_METHOD(t_Collection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, of_, METH_VARARGS),
      DECLARE_METHOD(t_Collection, add, METH_O),
      DECLARE_METHOD(t_Collection, addAll, METH_O),
      DECLARE_METHOD(t_Collection, clear, METH_NOARGS),
      DECLARE_METHOD(t_Collection, contains, METH_O),
      DECLARE_METHOD(t_Collection, containsAll, METH_O),
      DECLARE_METHOD(t_Collection, equals, METH_O),
      DECLARE_METHOD(t_Collection, hashCode, METH_NOARGS),
      DECLARE_METHOD(t_Collection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Collection, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, parallelStream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, remove, METH_O),
      DECLARE_METHOD(t_Collection, removeAll, METH_O),
      DECLARE_METHOD(t_Collection, retainAll, METH_O),
      DECLARE_METHOD(t_Collection, size, METH_NOARGS),
      DECLARE_METHOD(t_Collection, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, stream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collection)[] = {
      { Py_tp_methods, t_Collection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Collection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Collection *)) get_generic_iterator< t_Collection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collection)[] = {
      &PY_TYPE_DEF(::java::lang::Iterable),
      NULL
    };

    DEFINE_TYPE(Collection, t_Collection, Collection);
    PyObject *t_Collection::wrap_Object(const Collection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Collection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Collection::install(PyObject *module)
    {
      installType(&PY_TYPE(Collection), &PY_TYPE_DEF(Collection), module, "Collection", 0);
    }

    void t_Collection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "class_", make_descriptor(Collection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "wrapfn_", make_descriptor(t_Collection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collection::initializeClass, 1)))
        return NULL;
      return t_Collection::wrap_Object(Collection(((t_Collection *) arg)->object.this$));
    }
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_clear(t_Collection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equals", arg);
      return NULL;
    }

    static PyObject *t_Collection_hashCode(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.hashCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_isEmpty(t_Collection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Collection_parallelStream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.parallelStream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_size(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Collection_stream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.stream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toArray", args);
      return NULL;
    }
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Collection_get__empty(t_Collection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitude::class$ = NULL;
      jmethodID *FieldAttitude::mids$ = NULL;
      bool FieldAttitude::live$ = false;

      jclass FieldAttitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_df4a5ea802673084] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)V");
          mids$[mid_init$_a3f9433b549639d7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_df9d60e253dca407] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_b7dfe93e78e2f3c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_00f2dbe02c1f4a6b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/Field;)V");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getOrientation_d8696322b912d5fd] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_1d339a2ee3a3323a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_716f50c86ffc8da7] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSpin_716f50c86ffc8da7] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_309635d047969067] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_shiftedBy_482ffc39eb1c8a04] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_toAttitude_bd12f6f74bd44dca] = env->getMethodID(cls, "toAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_f3d56c354e112e1b] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitude::FieldAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df4a5ea802673084, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3f9433b549639d7, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::FieldAngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df9d60e253dca407, a0.this$, a1.this$, a2.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b7dfe93e78e2f3c9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_00f2dbe02c1f4a6b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldAttitude::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      ::org::orekit::utils::TimeStampedFieldAngularCoordinates FieldAttitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_d8696322b912d5fd]));
      }

      ::org::orekit::frames::Frame FieldAttitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAttitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_1d339a2ee3a3323a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSpin_716f50c86ffc8da7]));
      }

      FieldAttitude FieldAttitude::shiftedBy(jdouble a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_309635d047969067], a0));
      }

      FieldAttitude FieldAttitude::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_482ffc39eb1c8a04], a0.this$));
      }

      ::org::orekit::attitudes::Attitude FieldAttitude::toAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_toAttitude_bd12f6f74bd44dca]));
      }

      FieldAttitude FieldAttitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_f3d56c354e112e1b], a0.this$));
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
      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args);
      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args);
      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg);
      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data);
      static PyGetSetDef t_FieldAttitude__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitude, date),
        DECLARE_GET_FIELD(t_FieldAttitude, orientation),
        DECLARE_GET_FIELD(t_FieldAttitude, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitude, rotation),
        DECLARE_GET_FIELD(t_FieldAttitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAttitude, spin),
        DECLARE_GET_FIELD(t_FieldAttitude, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitude__methods_[] = {
        DECLARE_METHOD(t_FieldAttitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, toAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitude)[] = {
        { Py_tp_methods, t_FieldAttitude__methods_ },
        { Py_tp_init, (void *) t_FieldAttitude_init_ },
        { Py_tp_getset, t_FieldAttitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAttitude, t_FieldAttitude, FieldAttitude);
      PyObject *t_FieldAttitude::wrap_Object(const FieldAttitude& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitude::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitude::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitude), &PY_TYPE_DEF(FieldAttitude), module, "FieldAttitude", 0);
      }

      void t_FieldAttitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "class_", make_descriptor(FieldAttitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "wrapfn_", make_descriptor(t_FieldAttitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitude::initializeClass, 1)))
          return NULL;
        return t_FieldAttitude::wrap_Object(FieldAttitude(((t_FieldAttitude *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::FieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            ::org::hipparchus::Field a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkkkkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.toAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FieldAttitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexEopEntry::class$ = NULL;
        jmethodID *SinexEopEntry::mids$ = NULL;
        bool SinexEopEntry::live$ = false;

        jclass SinexEopEntry::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexEopEntry");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_600a2a61652bc473] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLod_dff5885c2c873297] = env->getMethodID(cls, "getLod", "()D");
            mids$[mid_getNutLn_dff5885c2c873297] = env->getMethodID(cls, "getNutLn", "()D");
            mids$[mid_getNutOb_dff5885c2c873297] = env->getMethodID(cls, "getNutOb", "()D");
            mids$[mid_getNutX_dff5885c2c873297] = env->getMethodID(cls, "getNutX", "()D");
            mids$[mid_getNutY_dff5885c2c873297] = env->getMethodID(cls, "getNutY", "()D");
            mids$[mid_getUt1MinusUtc_dff5885c2c873297] = env->getMethodID(cls, "getUt1MinusUtc", "()D");
            mids$[mid_getXPo_dff5885c2c873297] = env->getMethodID(cls, "getXPo", "()D");
            mids$[mid_getYPo_dff5885c2c873297] = env->getMethodID(cls, "getYPo", "()D");
            mids$[mid_setLod_17db3a65980d3441] = env->getMethodID(cls, "setLod", "(D)V");
            mids$[mid_setNutLn_17db3a65980d3441] = env->getMethodID(cls, "setNutLn", "(D)V");
            mids$[mid_setNutOb_17db3a65980d3441] = env->getMethodID(cls, "setNutOb", "(D)V");
            mids$[mid_setNutX_17db3a65980d3441] = env->getMethodID(cls, "setNutX", "(D)V");
            mids$[mid_setNutY_17db3a65980d3441] = env->getMethodID(cls, "setNutY", "(D)V");
            mids$[mid_setUt1MinusUtc_17db3a65980d3441] = env->getMethodID(cls, "setUt1MinusUtc", "(D)V");
            mids$[mid_setxPo_17db3a65980d3441] = env->getMethodID(cls, "setxPo", "(D)V");
            mids$[mid_setyPo_17db3a65980d3441] = env->getMethodID(cls, "setyPo", "(D)V");
            mids$[mid_toEopEntry_70a1abaf98a061db] = env->getMethodID(cls, "toEopEntry", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/EOPEntry;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexEopEntry::SinexEopEntry(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_600a2a61652bc473, a0.this$)) {}

        ::org::orekit::time::AbsoluteDate SinexEopEntry::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        jdouble SinexEopEntry::getLod() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLod_dff5885c2c873297]);
        }

        jdouble SinexEopEntry::getNutLn() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutLn_dff5885c2c873297]);
        }

        jdouble SinexEopEntry::getNutOb() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutOb_dff5885c2c873297]);
        }

        jdouble SinexEopEntry::getNutX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutX_dff5885c2c873297]);
        }

        jdouble SinexEopEntry::getNutY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNutY_dff5885c2c873297]);
        }

        jdouble SinexEopEntry::getUt1MinusUtc() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUt1MinusUtc_dff5885c2c873297]);
        }

        jdouble SinexEopEntry::getXPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXPo_dff5885c2c873297]);
        }

        jdouble SinexEopEntry::getYPo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYPo_dff5885c2c873297]);
        }

        void SinexEopEntry::setLod(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLod_17db3a65980d3441], a0);
        }

        void SinexEopEntry::setNutLn(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutLn_17db3a65980d3441], a0);
        }

        void SinexEopEntry::setNutOb(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutOb_17db3a65980d3441], a0);
        }

        void SinexEopEntry::setNutX(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutX_17db3a65980d3441], a0);
        }

        void SinexEopEntry::setNutY(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNutY_17db3a65980d3441], a0);
        }

        void SinexEopEntry::setUt1MinusUtc(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setUt1MinusUtc_17db3a65980d3441], a0);
        }

        void SinexEopEntry::setxPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setxPo_17db3a65980d3441], a0);
        }

        void SinexEopEntry::setyPo(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setyPo_17db3a65980d3441], a0);
        }

        ::org::orekit::frames::EOPEntry SinexEopEntry::toEopEntry(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          return ::org::orekit::frames::EOPEntry(env->callObjectMethod(this$, mids$[mid_toEopEntry_70a1abaf98a061db], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self);
        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg);
        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args);
        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data);
        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data);
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data);
        static PyGetSetDef t_SinexEopEntry__fields_[] = {
          DECLARE_GET_FIELD(t_SinexEopEntry, date),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, lod),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutLn),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutOb),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutX),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, nutY),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, ut1MinusUtc),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, xPo),
          DECLARE_GETSET_FIELD(t_SinexEopEntry, yPo),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexEopEntry__methods_[] = {
          DECLARE_METHOD(t_SinexEopEntry, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexEopEntry, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getLod, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutLn, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutOb, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutX, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getNutY, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getUt1MinusUtc, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getXPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, getYPo, METH_NOARGS),
          DECLARE_METHOD(t_SinexEopEntry, setLod, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutLn, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutOb, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutX, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setNutY, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setUt1MinusUtc, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setxPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, setyPo, METH_O),
          DECLARE_METHOD(t_SinexEopEntry, toEopEntry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexEopEntry)[] = {
          { Py_tp_methods, t_SinexEopEntry__methods_ },
          { Py_tp_init, (void *) t_SinexEopEntry_init_ },
          { Py_tp_getset, t_SinexEopEntry__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexEopEntry)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexEopEntry, t_SinexEopEntry, SinexEopEntry);

        void t_SinexEopEntry::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexEopEntry), &PY_TYPE_DEF(SinexEopEntry), module, "SinexEopEntry", 0);
        }

        void t_SinexEopEntry::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "class_", make_descriptor(SinexEopEntry::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "wrapfn_", make_descriptor(t_SinexEopEntry::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexEopEntry), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexEopEntry_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexEopEntry::initializeClass, 1)))
            return NULL;
          return t_SinexEopEntry::wrap_Object(SinexEopEntry(((t_SinexEopEntry *) arg)->object.this$));
        }
        static PyObject *t_SinexEopEntry_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexEopEntry::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexEopEntry_init_(t_SinexEopEntry *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          SinexEopEntry object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            INT_CALL(object = SinexEopEntry(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SinexEopEntry_getDate(t_SinexEopEntry *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexEopEntry_getLod(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLod());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutLn(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutLn());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutOb(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutOb());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutX(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getNutY(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNutY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getUt1MinusUtc(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getXPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_getYPo(t_SinexEopEntry *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYPo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SinexEopEntry_setLod(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setLod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLod", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutLn(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutLn(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutLn", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutOb(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutOb(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutOb", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutX(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutX(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutX", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setNutY(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNutY(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNutY", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setUt1MinusUtc(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setUt1MinusUtc(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setUt1MinusUtc", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setxPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setxPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setxPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_setyPo(t_SinexEopEntry *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setyPo(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setyPo", arg);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_toEopEntry(t_SinexEopEntry *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::TimeScale a2((jobject) NULL);
          ::org::orekit::frames::EOPEntry result((jobject) NULL);

          if (!parseArgs(args, "KKk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2))
          {
            OBJ_CALL(result = self->object.toEopEntry(a0, a1, a2));
            return ::org::orekit::frames::t_EOPEntry::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "toEopEntry", args);
          return NULL;
        }

        static PyObject *t_SinexEopEntry_get__date(t_SinexEopEntry *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexEopEntry_get__lod(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLod());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__lod(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setLod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lod", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutLn(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutLn());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutLn(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutLn(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutLn", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutOb(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutOb());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutOb(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutOb(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutOb", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutX(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutX());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutX(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutX(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutX", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__nutY(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNutY());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__nutY(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNutY(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nutY", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__ut1MinusUtc(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUt1MinusUtc());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__ut1MinusUtc(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setUt1MinusUtc(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ut1MinusUtc", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__xPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__xPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setxPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "xPo", arg);
          return -1;
        }

        static PyObject *t_SinexEopEntry_get__yPo(t_SinexEopEntry *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYPo());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SinexEopEntry_set__yPo(t_SinexEopEntry *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setyPo(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "yPo", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$FrameConsumer::class$ = NULL;
            jmethodID *ParseToken$FrameConsumer::mids$ = NULL;
            bool ParseToken$FrameConsumer::live$ = false;

            jclass ParseToken$FrameConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_849bc9e3b38b9bcb] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$FrameConsumer::accept(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_849bc9e3b38b9bcb], a0.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$FrameConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$FrameConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$FrameConsumer_accept(t_ParseToken$FrameConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$FrameConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$FrameConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$FrameConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$FrameConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$FrameConsumer)[] = {
              { Py_tp_methods, t_ParseToken$FrameConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$FrameConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$FrameConsumer, t_ParseToken$FrameConsumer, ParseToken$FrameConsumer);

            void t_ParseToken$FrameConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$FrameConsumer), &PY_TYPE_DEF(ParseToken$FrameConsumer), module, "ParseToken$FrameConsumer", 0);
            }

            void t_ParseToken$FrameConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "class_", make_descriptor(ParseToken$FrameConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "wrapfn_", make_descriptor(t_ParseToken$FrameConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$FrameConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$FrameConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$FrameConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$FrameConsumer::wrap_Object(ParseToken$FrameConsumer(((t_ParseToken$FrameConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$FrameConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$FrameConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$FrameConsumer_accept(t_ParseToken$FrameConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince853IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853IntegratorBuilder::mids$ = NULL;
        bool DormandPrince853IntegratorBuilder::live$ = false;

        jclass DormandPrince853IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853IntegratorBuilder::DormandPrince853IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince853IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
      namespace conversion {
        static PyObject *t_DormandPrince853IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853IntegratorBuilder_init_(t_DormandPrince853IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853IntegratorBuilder_buildIntegrator(t_DormandPrince853IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince853IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince853IntegratorBuilder, t_DormandPrince853IntegratorBuilder, DormandPrince853IntegratorBuilder);

        void t_DormandPrince853IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853IntegratorBuilder), &PY_TYPE_DEF(DormandPrince853IntegratorBuilder), module, "DormandPrince853IntegratorBuilder", 0);
        }

        void t_DormandPrince853IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "class_", make_descriptor(DormandPrince853IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853IntegratorBuilder::wrap_Object(DormandPrince853IntegratorBuilder(((t_DormandPrince853IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853IntegratorBuilder_init_(t_DormandPrince853IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853IntegratorBuilder_buildIntegrator(t_DormandPrince853IntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASOrbitalElements::class$ = NULL;
            jmethodID *SBASOrbitalElements::mids$ = NULL;
            bool SBASOrbitalElements::live$ = false;

            jclass SBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAGf0_dff5885c2c873297] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_dff5885c2c873297] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_570ce0828f81a2c1] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_570ce0828f81a2c1] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_dff5885c2c873297] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_570ce0828f81a2c1] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_dff5885c2c873297] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_dff5885c2c873297] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_dff5885c2c873297] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_dff5885c2c873297] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_dff5885c2c873297] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_dff5885c2c873297] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_dff5885c2c873297] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble SBASOrbitalElements::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_dff5885c2c873297]);
            }

            jint SBASOrbitalElements::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_570ce0828f81a2c1]);
            }

            jint SBASOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_570ce0828f81a2c1]);
            }

            jdouble SBASOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_dff5885c2c873297]);
            }

            jint SBASOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_570ce0828f81a2c1]);
            }

            jdouble SBASOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_dff5885c2c873297]);
            }

            jdouble SBASOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_dff5885c2c873297]);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data);
            static PyGetSetDef t_SBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf0),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf1),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, iODN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, time),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, toc),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, week),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, x),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, y),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, z),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_SBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getToc, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASOrbitalElements)[] = {
              { Py_tp_methods, t_SBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(SBASOrbitalElements, t_SBASOrbitalElements, SBASOrbitalElements);

            void t_SBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASOrbitalElements), &PY_TYPE_DEF(SBASOrbitalElements), module, "SBASOrbitalElements", 0);
            }

            void t_SBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "class_", make_descriptor(SBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "wrapfn_", make_descriptor(t_SBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_SBASOrbitalElements::wrap_Object(SBASOrbitalElements(((t_SBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerBootstrapping.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerBootstrapping::class$ = NULL;
          jmethodID *IntegerBootstrapping::mids$ = NULL;
          bool IntegerBootstrapping::live$ = false;

          jclass IntegerBootstrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerBootstrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_discreteSearch_0fa09c18fee449d5] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_recoverAmbiguities_1abcd8567321bdbe] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerBootstrapping::IntegerBootstrapping(jdouble a0) : ::org::orekit::estimation::measurements::gnss::LambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IntegerBootstrapping__methods_[] = {
            DECLARE_METHOD(t_IntegerBootstrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerBootstrapping, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerBootstrapping)[] = {
            { Py_tp_methods, t_IntegerBootstrapping__methods_ },
            { Py_tp_init, (void *) t_IntegerBootstrapping_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerBootstrapping)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::LambdaMethod),
            NULL
          };

          DEFINE_TYPE(IntegerBootstrapping, t_IntegerBootstrapping, IntegerBootstrapping);

          void t_IntegerBootstrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerBootstrapping), &PY_TYPE_DEF(IntegerBootstrapping), module, "IntegerBootstrapping", 0);
          }

          void t_IntegerBootstrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "class_", make_descriptor(IntegerBootstrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "wrapfn_", make_descriptor(t_IntegerBootstrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerBootstrapping::initializeClass, 1)))
              return NULL;
            return t_IntegerBootstrapping::wrap_Object(IntegerBootstrapping(((t_IntegerBootstrapping *) arg)->object.this$));
          }
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerBootstrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            IntegerBootstrapping object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = IntegerBootstrapping(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventState::class$ = NULL;
        jmethodID *EventState::mids$ = NULL;
        bool EventState::live$ = false;

        jclass EventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_f67305c017c9762e] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_37ca30d971b4fe79] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_dff5885c2c873297] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::EventOccurrence EventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_f67305c017c9762e], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_37ca30d971b4fe79], a0.this$);
        }

        jdouble EventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_dff5885c2c873297]);
        }

        void EventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
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
      namespace events {
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventTime(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
        }

        void t_EventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "class_", make_descriptor(EventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "wrapfn_", make_descriptor(t_EventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState::initializeClass, 1)))
            return NULL;
          return t_EventState::wrap_Object(EventState(((t_EventState *) arg)->object.this$));
        }
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventTime(t_EventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
