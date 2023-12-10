#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCScale::class$ = NULL;
      jmethodID *UTCScale::mids$ = NULL;
      bool UTCScale::live$ = false;

      jclass UTCScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBaseOffsets_37528d110cff6b74] = env->getMethodID(cls, "getBaseOffsets", "()Ljava/util/Collection;");
          mids$[mid_getFirstKnownLeapSecond_85703d13e302437e] = env->getMethodID(cls, "getFirstKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLastKnownLeapSecond_85703d13e302437e] = env->getMethodID(cls, "getLastKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_bf1d7732f1acb697] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_2a5f05be83ff251d] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCTAIOffsets_2afa36052df4765d] = env->getMethodID(cls, "getUTCTAIOffsets", "()Ljava/util/List;");
          mids$[mid_insideLeap_db6d81809797ddaa] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_6d572d97c8b0ec11] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_17efd3c2ea0eaff7] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_1e7a6890919ea8bb] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::Collection UTCScale::getBaseOffsets() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getBaseOffsets_37528d110cff6b74]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getFirstKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFirstKnownLeapSecond_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getLastKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastKnownLeapSecond_85703d13e302437e]));
      }

      jdouble UTCScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_2a5f05be83ff251d], a0.this$));
      }

      ::java::lang::String UTCScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::java::util::List UTCScale::getUTCTAIOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUTCTAIOffsets_2afa36052df4765d]));
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_db6d81809797ddaa], a0.this$);
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_6d572d97c8b0ec11], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_17efd3c2ea0eaff7], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_1e7a6890919ea8bb], a0.this$);
      }

      jdouble UTCScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble UTCScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String UTCScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_UTCScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCScale_getBaseOffsets(t_UTCScale *self);
      static PyObject *t_UTCScale_getFirstKnownLeapSecond(t_UTCScale *self);
      static PyObject *t_UTCScale_getLastKnownLeapSecond(t_UTCScale *self);
      static PyObject *t_UTCScale_getLeap(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_getName(t_UTCScale *self);
      static PyObject *t_UTCScale_getUTCTAIOffsets(t_UTCScale *self);
      static PyObject *t_UTCScale_insideLeap(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_minuteDuration(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_offsetFromTAI(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_offsetToTAI(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_toString(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_get__baseOffsets(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__firstKnownLeapSecond(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__lastKnownLeapSecond(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__name(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__uTCTAIOffsets(t_UTCScale *self, void *data);
      static PyGetSetDef t_UTCScale__fields_[] = {
        DECLARE_GET_FIELD(t_UTCScale, baseOffsets),
        DECLARE_GET_FIELD(t_UTCScale, firstKnownLeapSecond),
        DECLARE_GET_FIELD(t_UTCScale, lastKnownLeapSecond),
        DECLARE_GET_FIELD(t_UTCScale, name),
        DECLARE_GET_FIELD(t_UTCScale, uTCTAIOffsets),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCScale__methods_[] = {
        DECLARE_METHOD(t_UTCScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCScale, getBaseOffsets, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getFirstKnownLeapSecond, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getLastKnownLeapSecond, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getUTCTAIOffsets, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCScale)[] = {
        { Py_tp_methods, t_UTCScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCScale, t_UTCScale, UTCScale);

      void t_UTCScale::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCScale), &PY_TYPE_DEF(UTCScale), module, "UTCScale", 0);
      }

      void t_UTCScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "class_", make_descriptor(UTCScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "wrapfn_", make_descriptor(t_UTCScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCScale::initializeClass, 1)))
          return NULL;
        return t_UTCScale::wrap_Object(UTCScale(((t_UTCScale *) arg)->object.this$));
      }
      static PyObject *t_UTCScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCScale_getBaseOffsets(t_UTCScale *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseOffsets());
        return ::java::util::t_Collection::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getFirstKnownLeapSecond(t_UTCScale *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getLastKnownLeapSecond(t_UTCScale *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getLeap(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_UTCScale_getName(t_UTCScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UTCScale_getUTCTAIOffsets(t_UTCScale *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCTAIOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(UTCTAIOffset));
      }

      static PyObject *t_UTCScale_insideLeap(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_UTCScale_minuteDuration(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_UTCScale_offsetFromTAI(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_UTCScale_offsetToTAI(t_UTCScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_UTCScale_toString(t_UTCScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UTCScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UTCScale_get__baseOffsets(t_UTCScale *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseOffsets());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__firstKnownLeapSecond(t_UTCScale *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__lastKnownLeapSecond(t_UTCScale *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__name(t_UTCScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UTCScale_get__uTCTAIOffsets(t_UTCScale *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCTAIOffsets());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/PythonRadiationSensitive.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonRadiationSensitive::class$ = NULL;
        jmethodID *PythonRadiationSensitive::mids$ = NULL;
        bool PythonRadiationSensitive::live$ = false;

        jclass PythonRadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonRadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getRadiationParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_c01594a6748cab78] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonRadiationSensitive::PythonRadiationSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonRadiationSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonRadiationSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonRadiationSensitive::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      namespace radiation {
        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self);
        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data);
        static PyGetSetDef t_PythonRadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonRadiationSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonRadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonRadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonRadiationSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonRadiationSensitive)[] = {
          { Py_tp_methods, t_PythonRadiationSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonRadiationSensitive_init_ },
          { Py_tp_getset, t_PythonRadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonRadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonRadiationSensitive, t_PythonRadiationSensitive, PythonRadiationSensitive);

        void t_PythonRadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonRadiationSensitive), &PY_TYPE_DEF(PythonRadiationSensitive), module, "PythonRadiationSensitive", 1);
        }

        void t_PythonRadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "class_", make_descriptor(PythonRadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "wrapfn_", make_descriptor(t_PythonRadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonRadiationSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "getRadiationParametersDrivers", "()Ljava/util/List;", (void *) t_PythonRadiationSensitive_getRadiationParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonRadiationSensitive_pythonDecRef1 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration2 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonRadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonRadiationSensitive::wrap_Object(PythonRadiationSensitive(((t_PythonRadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonRadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonRadiationSensitive object((jobject) NULL);

          INT_CALL(object = PythonRadiationSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getRadiationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getRadiationParametersDrivers", result);
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

        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data)
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
#include "org/hipparchus/distribution/continuous/GumbelDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GumbelDistribution::class$ = NULL;
        jmethodID *GumbelDistribution::mids$ = NULL;
        bool GumbelDistribution::live$ = false;

        jclass GumbelDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GumbelDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_dff5885c2c873297] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GumbelDistribution::GumbelDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble GumbelDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble GumbelDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble GumbelDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_dff5885c2c873297]);
        }

        jdouble GumbelDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble GumbelDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble GumbelDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble GumbelDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble GumbelDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble GumbelDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean GumbelDistribution::isSupportConnected() const
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
        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data);
        static PyGetSetDef t_GumbelDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GumbelDistribution, location),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GumbelDistribution, scale),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GumbelDistribution__methods_[] = {
          DECLARE_METHOD(t_GumbelDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GumbelDistribution)[] = {
          { Py_tp_methods, t_GumbelDistribution__methods_ },
          { Py_tp_init, (void *) t_GumbelDistribution_init_ },
          { Py_tp_getset, t_GumbelDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GumbelDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GumbelDistribution, t_GumbelDistribution, GumbelDistribution);

        void t_GumbelDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GumbelDistribution), &PY_TYPE_DEF(GumbelDistribution), module, "GumbelDistribution", 0);
        }

        void t_GumbelDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "class_", make_descriptor(GumbelDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "wrapfn_", make_descriptor(t_GumbelDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GumbelDistribution::initializeClass, 1)))
            return NULL;
          return t_GumbelDistribution::wrap_Object(GumbelDistribution(((t_GumbelDistribution *) arg)->object.this$));
        }
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GumbelDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          GumbelDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = GumbelDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data)
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
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SubCircle::class$ = NULL;
          jmethodID *SubCircle::mids$ = NULL;
          bool SubCircle::live$ = false;

          jclass SubCircle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SubCircle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10e1fbe5774bfd91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_905725a56f20360c] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_802b885e8f150523] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubCircle::SubCircle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_10e1fbe5774bfd91, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubCircle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_905725a56f20360c], a0.this$));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args);
          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args);
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data);
          static PyGetSetDef t_SubCircle__fields_[] = {
            DECLARE_GET_FIELD(t_SubCircle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubCircle__methods_[] = {
            DECLARE_METHOD(t_SubCircle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubCircle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubCircle)[] = {
            { Py_tp_methods, t_SubCircle__methods_ },
            { Py_tp_init, (void *) t_SubCircle_init_ },
            { Py_tp_getset, t_SubCircle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubCircle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubCircle, t_SubCircle, SubCircle);
          PyObject *t_SubCircle::wrap_Object(const SubCircle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubCircle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubCircle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubCircle), &PY_TYPE_DEF(SubCircle), module, "SubCircle", 0);
          }

          void t_SubCircle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "class_", make_descriptor(SubCircle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "wrapfn_", make_descriptor(t_SubCircle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubCircle::initializeClass, 1)))
              return NULL;
            return t_SubCircle::wrap_Object(SubCircle(((t_SubCircle *) arg)->object.this$));
          }
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubCircle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubCircle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubCircle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            return callSuper(PY_TYPE(SubCircle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data)
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
#include "org/orekit/forces/gravity/SolidTides.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SolidTides::class$ = NULL;
        jmethodID *SolidTides::mids$ = NULL;
        bool SolidTides::live$ = false;
        jint SolidTides::DEFAULT_POINTS = (jint) 0;
        jdouble SolidTides::DEFAULT_STEP = (jdouble) 0;

        jclass SolidTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SolidTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65d48fb0e0a62b88] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_init$_86cb61f7db6d3e91] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;ZDILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, const ::org::orekit::utils::IERSConventions & a4, const ::org::orekit::time::UT1Scale & a5, const JArray< ::org::orekit::bodies::CelestialBody > & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65d48fb0e0a62b88, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jboolean a4, jdouble a5, jint a6, const ::org::orekit::utils::IERSConventions & a7, const ::org::orekit::time::UT1Scale & a8, const JArray< ::org::orekit::bodies::CelestialBody > & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_86cb61f7db6d3e91, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7.this$, a8.this$, a9.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolidTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolidTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        jboolean SolidTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::stream::Stream SolidTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
        }

        ::java::util::stream::Stream SolidTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
        }

        ::java::util::List SolidTides::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args);
        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self);
        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self);
        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg);
        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self);
        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data);
        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data);
        static PyGetSetDef t_SolidTides__fields_[] = {
          DECLARE_GET_FIELD(t_SolidTides, eventDetectors),
          DECLARE_GET_FIELD(t_SolidTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolidTides__methods_[] = {
          DECLARE_METHOD(t_SolidTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolidTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_SolidTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolidTides)[] = {
          { Py_tp_methods, t_SolidTides__methods_ },
          { Py_tp_init, (void *) t_SolidTides_init_ },
          { Py_tp_getset, t_SolidTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolidTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolidTides, t_SolidTides, SolidTides);

        void t_SolidTides::install(PyObject *module)
        {
          installType(&PY_TYPE(SolidTides), &PY_TYPE_DEF(SolidTides), module, "SolidTides", 0);
        }

        void t_SolidTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "class_", make_descriptor(SolidTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "wrapfn_", make_descriptor(t_SolidTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(SolidTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_POINTS", make_descriptor(SolidTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_STEP", make_descriptor(SolidTides::DEFAULT_STEP));
        }

        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolidTides::initializeClass, 1)))
            return NULL;
          return t_SolidTides::wrap_Object(SolidTides(((t_SolidTides *) arg)->object.this$));
        }
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolidTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::utils::IERSConventions a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::time::UT1Scale a5((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a6((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &p4, ::org::orekit::utils::t_IERSConventions::parameters_, &a5, &a6))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6));
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
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jboolean a4;
              jdouble a5;
              jint a6;
              ::org::orekit::utils::IERSConventions a7((jobject) NULL);
              PyTypeObject **p7;
              ::org::orekit::time::UT1Scale a8((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a9((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKZDIKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &p7, ::org::orekit::utils::t_IERSConventions::parameters_, &a8, &a9))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args)
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

        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg)
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

        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data)
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
#include "org/hipparchus/linear/FieldQRDecomposer.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposer::class$ = NULL;
      jmethodID *FieldQRDecomposer::mids$ = NULL;
      bool FieldQRDecomposer::live$ = false;

      jclass FieldQRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_decompose_f65caede4265247f] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposer::FieldQRDecomposer(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_f65caede4265247f], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args);
      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data);
      static PyGetSetDef t_FieldQRDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposer)[] = {
        { Py_tp_methods, t_FieldQRDecomposer__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposer_init_ },
        { Py_tp_getset, t_FieldQRDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposer, t_FieldQRDecomposer, FieldQRDecomposer);
      PyObject *t_FieldQRDecomposer::wrap_Object(const FieldQRDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposer), &PY_TYPE_DEF(FieldQRDecomposer), module, "FieldQRDecomposer", 0);
      }

      void t_FieldQRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "class_", make_descriptor(FieldQRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "wrapfn_", make_descriptor(t_FieldQRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposer::wrap_Object(FieldQRDecomposer(((t_FieldQRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldQRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldQRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/CompositeFormat.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Number.h"
#include "java/lang/StringBuffer.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CompositeFormat::class$ = NULL;
      jmethodID *CompositeFormat::mids$ = NULL;
      bool CompositeFormat::live$ = false;

      jclass CompositeFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CompositeFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_formatDouble_011f6c03d2da5cfc] = env->getStaticMethodID(cls, "formatDouble", "(DLjava/text/NumberFormat;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDefaultNumberFormat_24f83dea4a8657b1] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_09db48c8af63ef24] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_e097ee22c3f6fd45] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseFixedstring_cbbf5c6c125aa0e5] = env->getStaticMethodID(cls, "parseFixedstring", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/ParsePosition;)Z");
          mids$[mid_parseNextCharacter_3867dd0052a198da] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");
          mids$[mid_parseNumber_12cb0ffadecc8e5c] = env->getStaticMethodID(cls, "parseNumber", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/ParsePosition;)Ljava/lang/Number;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer CompositeFormat::formatDouble(jdouble a0, const ::java::text::NumberFormat & a1, const ::java::lang::StringBuffer & a2, const ::java::text::FieldPosition & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::StringBuffer(env->callStaticObjectMethod(cls, mids$[mid_formatDouble_011f6c03d2da5cfc], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_24f83dea4a8657b1]));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_09db48c8af63ef24], a0.this$));
      }

      void CompositeFormat::parseAndIgnoreWhitespace(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_parseAndIgnoreWhitespace_e097ee22c3f6fd45], a0.this$, a1.this$);
      }

      jboolean CompositeFormat::parseFixedstring(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_parseFixedstring_cbbf5c6c125aa0e5], a0.this$, a1.this$, a2.this$);
      }

      jchar CompositeFormat::parseNextCharacter(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticCharMethod(cls, mids$[mid_parseNextCharacter_3867dd0052a198da], a0.this$, a1.this$);
      }

      ::java::lang::Number CompositeFormat::parseNumber(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::Number(env->callStaticObjectMethod(cls, mids$[mid_parseNumber_12cb0ffadecc8e5c], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data);
      static PyGetSetDef t_CompositeFormat__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeFormat, defaultNumberFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeFormat__methods_[] = {
        DECLARE_METHOD(t_CompositeFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, formatDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, getDefaultNumberFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseAndIgnoreWhitespace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseFixedstring, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNextCharacter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNumber, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeFormat)[] = {
        { Py_tp_methods, t_CompositeFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CompositeFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeFormat, t_CompositeFormat, CompositeFormat);

      void t_CompositeFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeFormat), &PY_TYPE_DEF(CompositeFormat), module, "CompositeFormat", 0);
      }

      void t_CompositeFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "class_", make_descriptor(CompositeFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "wrapfn_", make_descriptor(t_CompositeFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeFormat::initializeClass, 1)))
          return NULL;
        return t_CompositeFormat::wrap_Object(CompositeFormat(((t_CompositeFormat *) arg)->object.this$));
      }
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::lang::StringBuffer a2((jobject) NULL);
        ::java::text::FieldPosition a3((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "Dkkk", ::java::text::NumberFormat::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::formatDouble(a0, a1, a2, a3));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "formatDouble", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::text::NumberFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat());
            return ::java::text::t_NumberFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::text::NumberFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat(a0));
              return ::java::text::t_NumberFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getDefaultNumberFormat", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CompositeFormat::parseAndIgnoreWhitespace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "parseAndIgnoreWhitespace", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "ssk", ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseFixedstring(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "parseFixedstring", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        jchar result;

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNextCharacter(a0, a1));
          return c2p(result);
        }

        PyErr_SetArgsError(type, "parseNextCharacter", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        ::java::lang::Number result((jobject) NULL);

        if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNumber(a0, a1, a2));
          return ::java::lang::t_Number::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseNumber", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefaultNumberFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *CartesianDerivativesFilter::class$ = NULL;
      jmethodID *CartesianDerivativesFilter::mids$ = NULL;
      bool CartesianDerivativesFilter::live$ = false;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_P = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PV = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PVA = NULL;

      jclass CartesianDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/CartesianDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_db36f0575b5122ab] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_5856fb500eb39730] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_values_b21b9bc9310d7dc4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/CartesianDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_P = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_P", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PV = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PV", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PVA = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PVA", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_db36f0575b5122ab], a0));
      }

      jint CartesianDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_570ce0828f81a2c1]);
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5856fb500eb39730], a0.this$));
      }

      JArray< CartesianDerivativesFilter > CartesianDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< CartesianDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_b21b9bc9310d7dc4]));
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
      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self);
      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data);
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data);
      static PyGetSetDef t_CartesianDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_CartesianDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianDerivativesFilter)[] = {
        { Py_tp_methods, t_CartesianDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CartesianDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(CartesianDerivativesFilter, t_CartesianDerivativesFilter, CartesianDerivativesFilter);
      PyObject *t_CartesianDerivativesFilter::wrap_Object(const CartesianDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CartesianDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CartesianDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianDerivativesFilter), &PY_TYPE_DEF(CartesianDerivativesFilter), module, "CartesianDerivativesFilter", 0);
      }

      void t_CartesianDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "class_", make_descriptor(CartesianDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "wrapfn_", make_descriptor(t_CartesianDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(CartesianDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_P", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PV", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PV)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PVA", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PVA)));
      }

      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_CartesianDerivativesFilter::wrap_Object(CartesianDerivativesFilter(((t_CartesianDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::getFilter(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::valueOf(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< CartesianDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_CartesianDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxOrder());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Function::class$ = NULL;
      jmethodID *MathArrays$Function::mids$ = NULL;
      bool MathArrays$Function::live$ = false;

      jclass MathArrays$Function::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Function");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "evaluate", "([D)D");
          mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args);

      static PyMethodDef t_MathArrays$Function__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Function, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Function)[] = {
        { Py_tp_methods, t_MathArrays$Function__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Function)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays$Function, t_MathArrays$Function, MathArrays$Function);

      void t_MathArrays$Function::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Function), &PY_TYPE_DEF(MathArrays$Function), module, "MathArrays$Function", 0);
      }

      void t_MathArrays$Function::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "class_", make_descriptor(MathArrays$Function::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "wrapfn_", make_descriptor(t_MathArrays$Function::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Function::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Function::wrap_Object(MathArrays$Function(((t_MathArrays$Function *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Function::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF::class$ = NULL;
        jmethodID *CPF::mids$ = NULL;
        bool CPF::live$ = false;
        ::java::lang::String *CPF::DEFAULT_ID = NULL;

        jclass CPF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatelliteCoordinate_2121cf57a15dacdf] = env->getMethodID(cls, "addSatelliteCoordinate", "(Ljava/lang/String;Lorg/orekit/files/ilrs/CPF$CPFCoordinate;)V");
            mids$[mid_addSatelliteCoordinates_91fd4e71827f714e] = env->getMethodID(cls, "addSatelliteCoordinates", "(Ljava/lang/String;Ljava/util/List;)V");
            mids$[mid_addSatelliteVelocityToCPFCoordinate_898ecd5be95da09c] = env->getMethodID(cls, "addSatelliteVelocityToCPFCoordinate", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getComments_2afa36052df4765d] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_2291408dbd033b0e] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CPFHeader;");
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_getTimeScale_c39031284193adbe] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_setFilter_10d93bbae9f06624] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setInterpolationSample_99803b0791f320ff] = env->getMethodID(cls, "setInterpolationSample", "(I)V");
            mids$[mid_setMu_17db3a65980d3441] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setTimeScale_e93d77ad761aa1f2] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ID = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ID", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF::CPF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void CPF::addSatelliteCoordinate(const ::java::lang::String & a0, const ::org::orekit::files::ilrs::CPF$CPFCoordinate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinate_2121cf57a15dacdf], a0.this$, a1.this$);
        }

        void CPF::addSatelliteCoordinates(const ::java::lang::String & a0, const ::java::util::List & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinates_91fd4e71827f714e], a0.this$, a1.this$);
        }

        void CPF::addSatelliteVelocityToCPFCoordinate(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteVelocityToCPFCoordinate_898ecd5be95da09c], a0.this$, a1.this$);
        }

        ::java::util::List CPF::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_2afa36052df4765d]));
        }

        ::org::orekit::files::ilrs::CPFHeader CPF::getHeader() const
        {
          return ::org::orekit::files::ilrs::CPFHeader(env->callObjectMethod(this$, mids$[mid_getHeader_2291408dbd033b0e]));
        }

        ::java::util::Map CPF::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
        }

        ::org::orekit::time::TimeScale CPF::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_c39031284193adbe]));
        }

        void CPF::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_10d93bbae9f06624], a0.this$);
        }

        void CPF::setInterpolationSample(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationSample_99803b0791f320ff], a0);
        }

        void CPF::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_17db3a65980d3441], a0);
        }

        void CPF::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeScale_e93d77ad761aa1f2], a0.this$);
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
        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_getComments(t_CPF *self);
        static PyObject *t_CPF_getHeader(t_CPF *self);
        static PyObject *t_CPF_getSatellites(t_CPF *self);
        static PyObject *t_CPF_getTimeScale(t_CPF *self);
        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_get__comments(t_CPF *self, void *data);
        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__header(t_CPF *self, void *data);
        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data);
        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data);
        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data);
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPF__fields_[] = {
          DECLARE_GET_FIELD(t_CPF, comments),
          DECLARE_SET_FIELD(t_CPF, filter),
          DECLARE_GET_FIELD(t_CPF, header),
          DECLARE_SET_FIELD(t_CPF, interpolationSample),
          DECLARE_SET_FIELD(t_CPF, mu),
          DECLARE_GET_FIELD(t_CPF, satellites),
          DECLARE_GETSET_FIELD(t_CPF, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF__methods_[] = {
          DECLARE_METHOD(t_CPF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteVelocityToCPFCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CPF, setFilter, METH_O),
          DECLARE_METHOD(t_CPF, setInterpolationSample, METH_O),
          DECLARE_METHOD(t_CPF, setMu, METH_O),
          DECLARE_METHOD(t_CPF, setTimeScale, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF)[] = {
          { Py_tp_methods, t_CPF__methods_ },
          { Py_tp_init, (void *) t_CPF_init_ },
          { Py_tp_getset, t_CPF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF, t_CPF, CPF);

        void t_CPF::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF), &PY_TYPE_DEF(CPF), module, "CPF", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "CPFCoordinate", make_descriptor(&PY_TYPE_DEF(CPF$CPFCoordinate)));
        }

        void t_CPF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "class_", make_descriptor(CPF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "wrapfn_", make_descriptor(t_CPF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "boxfn_", make_descriptor(boxObject));
          env->getClass(CPF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "DEFAULT_ID", make_descriptor(j2p(*CPF::DEFAULT_ID)));
        }

        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF::initializeClass, 1)))
            return NULL;
          return t_CPF::wrap_Object(CPF(((t_CPF *) arg)->object.this$));
        }
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds)
        {
          CPF object((jobject) NULL);

          INT_CALL(object = CPF());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF$CPFCoordinate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::files::ilrs::CPF$CPFCoordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.addSatelliteCoordinates(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinates", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteVelocityToCPFCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteVelocityToCPFCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_getComments(t_CPF *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CPF_getHeader(t_CPF *self)
        {
          ::org::orekit::files::ilrs::CPFHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(result);
        }

        static PyObject *t_CPF_getSatellites(t_CPF *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF_getTimeScale(t_CPF *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setInterpolationSample(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationSample", arg);
          return NULL;
        }

        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::time::TimeScale a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setTimeScale(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
          return NULL;
        }

        static PyObject *t_CPF_get__comments(t_CPF *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_CPF_get__header(t_CPF *self, void *data)
        {
          ::org::orekit::files::ilrs::CPFHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(value);
        }

        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setInterpolationSample(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "interpolationSample", arg);
          return -1;
        }

        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeScale(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/List.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *List::class$ = NULL;
    jmethodID *List::mids$ = NULL;
    bool List::live$ = false;

    jclass List::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/List");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_995c97fe5efb1d1d] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_17e918edc999b3c7] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_0f52bd5f96ddfd17] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_17e918edc999b3c7] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_53b9a2e5d7b3833b] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_7bdc0f15e68705e0] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_90eb61a0d5cc5e34] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_90eb61a0d5cc5e34] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_13ec0a4b5149ed65] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_167e5f47f86d3143] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_of_2afa36052df4765d] = env->getStaticMethodID(cls, "of", "()Ljava/util/List;");
        mids$[mid_of_91eee740d34e4dd1] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_5d13575984be857e] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_510be06504a0b0b9] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_d73cfd0f03f94cb4] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_fc9f490e941e69a8] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_d5a3b43db8b37a68] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_dc2b19fd01e6a993] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_81c5ca0dc773817b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_cd157048f166826a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_a804915f1bf2f168] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_a3795d7e8f9a9a1a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_remove_7bdc0f15e68705e0] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_17e918edc999b3c7] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_17e918edc999b3c7] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_c594b4c2255fa9ec] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_aba33752f2449599] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_10d7c0f6de166543] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_b93c730013ce64c6] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_72bb572e6638b43f] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean List::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    void List::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_995c97fe5efb1d1d], a0, a1.this$);
    }

    jboolean List::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17e918edc999b3c7], a0.this$);
    }

    jboolean List::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_0f52bd5f96ddfd17], a0, a1.this$);
    }

    void List::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    jboolean List::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    jboolean List::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_17e918edc999b3c7], a0.this$);
    }

    List List::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_copyOf_53b9a2e5d7b3833b], a0.this$));
    }

    jboolean List::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object List::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_7bdc0f15e68705e0], a0));
    }

    jint List::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint List::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_90eb61a0d5cc5e34], a0.this$);
    }

    jboolean List::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Iterator List::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    jint List::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_90eb61a0d5cc5e34], a0.this$);
    }

    ::java::util::ListIterator List::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_13ec0a4b5149ed65]));
    }

    ::java::util::ListIterator List::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_167e5f47f86d3143], a0));
    }

    List List::of()
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_2afa36052df4765d]));
    }

    List List::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_91eee740d34e4dd1], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_5d13575984be857e], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_510be06504a0b0b9], a0.this$, a1.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_d73cfd0f03f94cb4], a0.this$, a1.this$, a2.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_fc9f490e941e69a8], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_d5a3b43db8b37a68], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_dc2b19fd01e6a993], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_81c5ca0dc773817b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_cd157048f166826a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_a804915f1bf2f168], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_a3795d7e8f9a9a1a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    ::java::lang::Object List::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_7bdc0f15e68705e0], a0));
    }

    jboolean List::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    jboolean List::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_17e918edc999b3c7], a0.this$);
    }

    jboolean List::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_17e918edc999b3c7], a0.this$);
    }

    ::java::lang::Object List::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_c594b4c2255fa9ec], a0, a1.this$));
    }

    jint List::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    void List::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_aba33752f2449599], a0.this$);
    }

    ::java::util::Spliterator List::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
    }

    List List::subList(jint a0, jint a1) const
    {
      return List(env->callObjectMethod(this$, mids$[mid_subList_10d7c0f6de166543], a0, a1));
    }

    JArray< ::java::lang::Object > List::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_b93c730013ce64c6]));
    }

    JArray< ::java::lang::Object > List::toArray(const JArray< ::java::lang::Object > & a0) const
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
    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_of_(t_List *self, PyObject *args);
    static PyObject *t_List_add(t_List *self, PyObject *args);
    static PyObject *t_List_addAll(t_List *self, PyObject *args);
    static PyObject *t_List_clear(t_List *self, PyObject *args);
    static PyObject *t_List_contains(t_List *self, PyObject *args);
    static PyObject *t_List_containsAll(t_List *self, PyObject *args);
    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_equals(t_List *self, PyObject *args);
    static PyObject *t_List_get(t_List *self, PyObject *arg);
    static PyObject *t_List_hashCode(t_List *self, PyObject *args);
    static PyObject *t_List_indexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_isEmpty(t_List *self, PyObject *args);
    static PyObject *t_List_iterator(t_List *self, PyObject *args);
    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_listIterator(t_List *self, PyObject *args);
    static PyObject *t_List_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_List_remove(t_List *self, PyObject *args);
    static PyObject *t_List_removeAll(t_List *self, PyObject *args);
    static PyObject *t_List_retainAll(t_List *self, PyObject *args);
    static PyObject *t_List_set(t_List *self, PyObject *args);
    static PyObject *t_List_size(t_List *self, PyObject *args);
    static PyObject *t_List_sort(t_List *self, PyObject *arg);
    static PyObject *t_List_spliterator(t_List *self, PyObject *args);
    static PyObject *t_List_subList(t_List *self, PyObject *args);
    static PyObject *t_List_toArray(t_List *self, PyObject *args);
    static PyObject *t_List_get__empty(t_List *self, void *data);
    static PyObject *t_List_get__parameters_(t_List *self, void *data);
    static PyGetSetDef t_List__fields_[] = {
      DECLARE_GET_FIELD(t_List, empty),
      DECLARE_GET_FIELD(t_List, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_List__methods_[] = {
      DECLARE_METHOD(t_List, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, of_, METH_VARARGS),
      DECLARE_METHOD(t_List, add, METH_VARARGS),
      DECLARE_METHOD(t_List, addAll, METH_VARARGS),
      DECLARE_METHOD(t_List, clear, METH_VARARGS),
      DECLARE_METHOD(t_List, contains, METH_VARARGS),
      DECLARE_METHOD(t_List, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_List, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, equals, METH_VARARGS),
      DECLARE_METHOD(t_List, get, METH_O),
      DECLARE_METHOD(t_List, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_List, indexOf, METH_O),
      DECLARE_METHOD(t_List, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_List, iterator, METH_VARARGS),
      DECLARE_METHOD(t_List, lastIndexOf, METH_O),
      DECLARE_METHOD(t_List, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_List, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_List, remove, METH_VARARGS),
      DECLARE_METHOD(t_List, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_List, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_List, set, METH_VARARGS),
      DECLARE_METHOD(t_List, size, METH_VARARGS),
      DECLARE_METHOD(t_List, sort, METH_O),
      DECLARE_METHOD(t_List, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_List, subList, METH_VARARGS),
      DECLARE_METHOD(t_List, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(List)[] = {
      { Py_tp_methods, t_List__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_List__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_List *)) get_generic_iterator< t_List >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(List)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(List, t_List, List);
    PyObject *t_List::wrap_Object(const List& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_List::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_List::install(PyObject *module)
    {
      installType(&PY_TYPE(List), &PY_TYPE_DEF(List), module, "List", 0);
    }

    void t_List::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "class_", make_descriptor(List::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "wrapfn_", make_descriptor(t_List::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, List::initializeClass, 1)))
        return NULL;
      return t_List::wrap_Object(List(((t_List *) arg)->object.this$));
    }
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, List::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_List_of_(t_List *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_List_add(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_List_addAll(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_List_clear(t_List *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_List_contains(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_List_containsAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::List::copyOf(a0));
        return t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_List_equals(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_List_get(t_List *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_List_hashCode(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_List_indexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_List_isEmpty(t_List *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_List_iterator(t_List *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_List_listIterator(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_List_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          List result((jobject) NULL);
          OBJ_CALL(result = ::java::util::List::of());
          return t_List::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 9:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_List::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_List_remove(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_List_removeAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_List_retainAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_List_set(t_List *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_List_size(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_List_sort(t_List *self, PyObject *arg)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "sort", arg);
      return NULL;
    }

    static PyObject *t_List_spliterator(t_List *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_List_subList(t_List *self, PyObject *args)
    {
      jint a0;
      jint a1;
      List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }

    static PyObject *t_List_toArray(t_List *self, PyObject *args)
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

      return callSuper(PY_TYPE(List), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_List_get__parameters_(t_List *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_List_get__empty(t_List *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileWriter::class$ = NULL;
        jmethodID *EphemerisFileWriter::mids$ = NULL;
        bool EphemerisFileWriter::live$ = false;

        jclass EphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_c304d7428e150e41] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_2fe5901b7cb5a492] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_c304d7428e150e41], a0.this$, a1.this$);
        }

        void EphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_2fe5901b7cb5a492], a0.this$, a1.this$);
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
      namespace general {
        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_EphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileWriter)[] = {
          { Py_tp_methods, t_EphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileWriter, t_EphemerisFileWriter, EphemerisFileWriter);

        void t_EphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileWriter), &PY_TYPE_DEF(EphemerisFileWriter), module, "EphemerisFileWriter", 0);
        }

        void t_EphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "class_", make_descriptor(EphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "wrapfn_", make_descriptor(t_EphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileWriter::wrap_Object(EphemerisFileWriter(((t_EphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/python/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
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
    namespace python {
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmParser::class$ = NULL;
            jmethodID *AdmParser::mids$ = NULL;
            bool AdmParser::live$ = false;

            jclass AdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate AdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_85703d13e302437e]));
            }

            ::java::util::Map AdmParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465]));
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
          namespace adm {
            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self);
            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data);
            static PyGetSetDef t_AdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_AdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_AdmParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmParser__methods_[] = {
              DECLARE_METHOD(t_AdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_AdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmParser)[] = {
              { Py_tp_methods, t_AdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(AdmParser, t_AdmParser, AdmParser);
            PyObject *t_AdmParser::wrap_Object(const AdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmParser), &PY_TYPE_DEF(AdmParser), module, "AdmParser", 0);
            }

            void t_AdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "class_", make_descriptor(AdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "wrapfn_", make_descriptor(t_AdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmParser::initializeClass, 1)))
                return NULL;
              return t_AdmParser::wrap_Object(AdmParser(((t_AdmParser *) arg)->object.this$));
            }
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args)
            {
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
              }

              return callSuper(PY_TYPE(AdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
            }
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustDirectionAndAttitudeProvider::class$ = NULL;
          jmethodID *ThrustDirectionAndAttitudeProvider::mids$ = NULL;
          bool ThrustDirectionAndAttitudeProvider::live$ = false;

          jclass ThrustDirectionAndAttitudeProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_buildFromCustomAttitude_f04d45055f690190] = env->getStaticMethodID(cls, "buildFromCustomAttitude", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInFrame_55c924554b729f59] = env->getStaticMethodID(cls, "buildFromDirectionInFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInLOF_b2589ba8f0aeef50] = env->getStaticMethodID(cls, "buildFromDirectionInLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromFixedDirectionInSatelliteFrame_97cc82c890b226b9] = env->getStaticMethodID(cls, "buildFromFixedDirectionInSatelliteFrame", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
              mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
              mids$[mid_getManeuverAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getManeuverAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
              mids$[mid_getThrusterAxisInSatelliteFrame_d52645e0d4c07563] = env->getMethodID(cls, "getThrusterAxisInSatelliteFrame", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAttitudeFromFrame_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitudeFromFrame", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromCustomAttitude_f04d45055f690190], a0.this$, a1.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInFrame_55c924554b729f59], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(const ::org::orekit::frames::LOF & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInLOF_b2589ba8f0aeef50], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromFixedDirectionInSatelliteFrame_97cc82c890b226b9], a0.this$));
          }

          ::org::orekit::attitudes::Attitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::FieldAttitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::AttitudeProvider ThrustDirectionAndAttitudeProvider::getManeuverAttitudeProvider() const
          {
            return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getManeuverAttitudeProvider_a904f3d015a354a0]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionAndAttitudeProvider::getThrusterAxisInSatelliteFrame() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrusterAxisInSatelliteFrame_d52645e0d4c07563]));
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_ThrustDirectionAndAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromCustomAttitude(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInFrame(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInLOF(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromFixedDirectionInSatelliteFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getAttitude(t_ThrustDirectionAndAttitudeProvider *self, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getManeuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getThrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__maneuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self, void *data);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__thrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self, void *data);
          static PyGetSetDef t_ThrustDirectionAndAttitudeProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ThrustDirectionAndAttitudeProvider, maneuverAttitudeProvider),
            DECLARE_GET_FIELD(t_ThrustDirectionAndAttitudeProvider, thrusterAxisInSatelliteFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ThrustDirectionAndAttitudeProvider__methods_[] = {
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromCustomAttitude, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromDirectionInFrame, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromDirectionInLOF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromFixedDirectionInSatelliteFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getAttitude, METH_VARARGS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getManeuverAttitudeProvider, METH_NOARGS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getThrusterAxisInSatelliteFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustDirectionAndAttitudeProvider)[] = {
            { Py_tp_methods, t_ThrustDirectionAndAttitudeProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ThrustDirectionAndAttitudeProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustDirectionAndAttitudeProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ThrustDirectionAndAttitudeProvider, t_ThrustDirectionAndAttitudeProvider, ThrustDirectionAndAttitudeProvider);

          void t_ThrustDirectionAndAttitudeProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustDirectionAndAttitudeProvider), &PY_TYPE_DEF(ThrustDirectionAndAttitudeProvider), module, "ThrustDirectionAndAttitudeProvider", 0);
          }

          void t_ThrustDirectionAndAttitudeProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "class_", make_descriptor(ThrustDirectionAndAttitudeProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "wrapfn_", make_descriptor(t_ThrustDirectionAndAttitudeProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustDirectionAndAttitudeProvider::initializeClass, 1)))
              return NULL;
            return t_ThrustDirectionAndAttitudeProvider::wrap_Object(ThrustDirectionAndAttitudeProvider(((t_ThrustDirectionAndAttitudeProvider *) arg)->object.this$));
          }
          static PyObject *t_ThrustDirectionAndAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustDirectionAndAttitudeProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromCustomAttitude(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(a0, a1));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromCustomAttitude", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInFrame(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(a0, a1, a2));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromDirectionInFrame", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInLOF(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::frames::LOF a0((jobject) NULL);
            ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::LOF::initializeClass, ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(a0, a1, a2));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromDirectionInLOF", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromFixedDirectionInSatelliteFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(a0));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromFixedDirectionInSatelliteFrame", arg);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getAttitude(t_ThrustDirectionAndAttitudeProvider *self, PyObject *args)
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

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getManeuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self)
          {
            ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getManeuverAttitudeProvider());
            return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getThrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getThrusterAxisInSatelliteFrame());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__maneuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self, void *data)
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getManeuverAttitudeProvider());
            return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__thrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrusterAxisInSatelliteFrame());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScale::class$ = NULL;
      jmethodID *PythonTimeScale::mids$ = NULL;
      bool PythonTimeScale::live$ = false;

      jclass PythonTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScale::PythonTimeScale() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeScale::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeScale::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeScale::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self);
      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data);
      static PyGetSetDef t_PythonTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScale, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScale__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScale, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScale)[] = {
        { Py_tp_methods, t_PythonTimeScale__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScale_init_ },
        { Py_tp_getset, t_PythonTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScale, t_PythonTimeScale, PythonTimeScale);

      void t_PythonTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScale), &PY_TYPE_DEF(PythonTimeScale), module, "PythonTimeScale", 1);
      }

      void t_PythonTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "class_", make_descriptor(PythonTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "wrapfn_", make_descriptor(t_PythonTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScale::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonTimeScale_getName0 },
          { "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScale_offsetFromTAI1 },
          { "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScale_offsetFromTAI2 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScale_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScale::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScale::wrap_Object(PythonTimeScale(((t_PythonTimeScale *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScale object((jobject) NULL);

        INT_CALL(object = PythonTimeScale());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("offsetFromTAI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("offsetFromTAI", result);
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

      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmParser::class$ = NULL;
          jmethodID *NdmParser::mids$ = NULL;
          bool NdmParser::live$ = false;

          jclass NdmParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addComment_7edad2c2f64f4d68] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_build_ef15c9d6c40167fb] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/Ndm;");
              mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
              mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean NdmParser::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_7edad2c2f64f4d68], a0.this$);
          }

          ::org::orekit::files::ccsds::ndm::Ndm NdmParser::build() const
          {
            return ::org::orekit::files::ccsds::ndm::Ndm(env->callObjectMethod(this$, mids$[mid_build_ef15c9d6c40167fb]));
          }

          ::java::util::Map NdmParser::getSpecialXmlElementsBuilders() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465]));
          }

          void NdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
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
          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg);
          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data);
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data);
          static PyGetSetDef t_NdmParser__fields_[] = {
            DECLARE_GET_FIELD(t_NdmParser, specialXmlElementsBuilders),
            DECLARE_GET_FIELD(t_NdmParser, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmParser__methods_[] = {
            DECLARE_METHOD(t_NdmParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, addComment, METH_O),
            DECLARE_METHOD(t_NdmParser, build, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, reset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmParser)[] = {
            { Py_tp_methods, t_NdmParser__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmParser__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmParser)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
            NULL
          };

          DEFINE_TYPE(NdmParser, t_NdmParser, NdmParser);
          PyObject *t_NdmParser::wrap_Object(const NdmParser& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NdmParser::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmParser), &PY_TYPE_DEF(NdmParser), module, "NdmParser", 0);
          }

          void t_NdmParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "class_", make_descriptor(NdmParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "wrapfn_", make_descriptor(t_NdmParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmParser::initializeClass, 1)))
              return NULL;
            return t_NdmParser::wrap_Object(NdmParser(((t_NdmParser *) arg)->object.this$));
          }
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.addComment(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::ndm::Ndm result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.build());
              return ::org::orekit::files::ccsds::ndm::t_Ndm::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "build", args, 2);
          }

          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args)
          {
            ::java::util::Map result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
          }

          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "reset", args, 2);
          }
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
            return ::java::util::t_Map::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *StandardDeviation::class$ = NULL;
          jmethodID *StandardDeviation::mids$ = NULL;
          bool StandardDeviation::live$ = false;

          jclass StandardDeviation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/StandardDeviation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_7d2491dc61f6c936] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_2e37288d51fb7ec1] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_4602d7f3fad7762c] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");
              mids$[mid_evaluate_1c41301ff6e224e7] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_82195b7753559055] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_b108b35ef48e27bd] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_32b8a14555b1fca5] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StandardDeviation::StandardDeviation() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          StandardDeviation::StandardDeviation(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7d2491dc61f6c936, a0.this$)) {}

          StandardDeviation::StandardDeviation(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

          StandardDeviation::StandardDeviation(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_2e37288d51fb7ec1, a0, a1.this$)) {}

          void StandardDeviation::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          StandardDeviation StandardDeviation::copy() const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_copy_4602d7f3fad7762c]));
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1c41301ff6e224e7], a0.this$, a1);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_82195b7753559055], a0.this$, a1, a2, a3);
          }

          jlong StandardDeviation::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble StandardDeviation::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void StandardDeviation::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
          }

          jboolean StandardDeviation::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_b108b35ef48e27bd]);
          }

          StandardDeviation StandardDeviation::withBiasCorrection(jboolean a0) const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_32b8a14555b1fca5], a0));
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self);
          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg);
          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data);
          static PyGetSetDef t_StandardDeviation__fields_[] = {
            DECLARE_GET_FIELD(t_StandardDeviation, biasCorrected),
            DECLARE_GET_FIELD(t_StandardDeviation, n),
            DECLARE_GET_FIELD(t_StandardDeviation, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StandardDeviation__methods_[] = {
            DECLARE_METHOD(t_StandardDeviation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, clear, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, copy, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getN, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getResult, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, increment, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_StandardDeviation, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StandardDeviation)[] = {
            { Py_tp_methods, t_StandardDeviation__methods_ },
            { Py_tp_init, (void *) t_StandardDeviation_init_ },
            { Py_tp_getset, t_StandardDeviation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StandardDeviation)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(StandardDeviation, t_StandardDeviation, StandardDeviation);

          void t_StandardDeviation::install(PyObject *module)
          {
            installType(&PY_TYPE(StandardDeviation), &PY_TYPE_DEF(StandardDeviation), module, "StandardDeviation", 0);
          }

          void t_StandardDeviation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "class_", make_descriptor(StandardDeviation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "wrapfn_", make_descriptor(t_StandardDeviation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StandardDeviation::initializeClass, 1)))
              return NULL;
            return t_StandardDeviation::wrap_Object(StandardDeviation(((t_StandardDeviation *) arg)->object.this$));
          }
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StandardDeviation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                StandardDeviation object((jobject) NULL);

                INT_CALL(object = StandardDeviation());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = StandardDeviation(a0, a1));
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

          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args)
          {
            StandardDeviation result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_StandardDeviation::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg)
          {
            jboolean a0;
            StandardDeviation result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_StandardDeviation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$StreamOpener::class$ = NULL;
      jmethodID *DataSource$StreamOpener::mids$ = NULL;
      bool DataSource$StreamOpener::live$ = false;

      jclass DataSource$StreamOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$StreamOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_51fdc45647b8e866] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::InputStream DataSource$StreamOpener::openOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openOnce_51fdc45647b8e866]));
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
      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self);

      static PyMethodDef t_DataSource$StreamOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$StreamOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$StreamOpener)[] = {
        { Py_tp_methods, t_DataSource$StreamOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$StreamOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$StreamOpener, t_DataSource$StreamOpener, DataSource$StreamOpener);

      void t_DataSource$StreamOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$StreamOpener), &PY_TYPE_DEF(DataSource$StreamOpener), module, "DataSource$StreamOpener", 0);
      }

      void t_DataSource$StreamOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "class_", make_descriptor(DataSource$StreamOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "wrapfn_", make_descriptor(t_DataSource$StreamOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$StreamOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$StreamOpener::wrap_Object(DataSource$StreamOpener(((t_DataSource$StreamOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$StreamOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeShiftable::class$ = NULL;
      jmethodID *TimeShiftable::mids$ = NULL;
      bool TimeShiftable::live$ = false;

      jclass TimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_f3fc7729d023c410] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeShiftable TimeShiftable::shiftedBy(jdouble a0) const
      {
        return TimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_f3fc7729d023c410], a0));
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
      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args);
      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg);
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data);
      static PyGetSetDef t_TimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_TimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeShiftable__methods_[] = {
        DECLARE_METHOD(t_TimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeShiftable)[] = {
        { Py_tp_methods, t_TimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeShiftable, t_TimeShiftable, TimeShiftable);
      PyObject *t_TimeShiftable::wrap_Object(const TimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeShiftable), &PY_TYPE_DEF(TimeShiftable), module, "TimeShiftable", 0);
      }

      void t_TimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "class_", make_descriptor(TimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "wrapfn_", make_descriptor(t_TimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeShiftable::initializeClass, 1)))
          return NULL;
        return t_TimeShiftable::wrap_Object(TimeShiftable(((t_TimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg)
      {
        jdouble a0;
        TimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_TimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovariance::class$ = NULL;
            jmethodID *XYZCovariance::mids$ = NULL;
            bool XYZCovariance::live$ = false;

            jclass XYZCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCdrgdrg_dff5885c2c873297] = env->getMethodID(cls, "getCdrgdrg", "()D");
                mids$[mid_getCdrgx_dff5885c2c873297] = env->getMethodID(cls, "getCdrgx", "()D");
                mids$[mid_getCdrgxdot_dff5885c2c873297] = env->getMethodID(cls, "getCdrgxdot", "()D");
                mids$[mid_getCdrgy_dff5885c2c873297] = env->getMethodID(cls, "getCdrgy", "()D");
                mids$[mid_getCdrgydot_dff5885c2c873297] = env->getMethodID(cls, "getCdrgydot", "()D");
                mids$[mid_getCdrgz_dff5885c2c873297] = env->getMethodID(cls, "getCdrgz", "()D");
                mids$[mid_getCdrgzdot_dff5885c2c873297] = env->getMethodID(cls, "getCdrgzdot", "()D");
                mids$[mid_getCsrpdrg_dff5885c2c873297] = env->getMethodID(cls, "getCsrpdrg", "()D");
                mids$[mid_getCsrpsrp_dff5885c2c873297] = env->getMethodID(cls, "getCsrpsrp", "()D");
                mids$[mid_getCsrpx_dff5885c2c873297] = env->getMethodID(cls, "getCsrpx", "()D");
                mids$[mid_getCsrpxdot_dff5885c2c873297] = env->getMethodID(cls, "getCsrpxdot", "()D");
                mids$[mid_getCsrpy_dff5885c2c873297] = env->getMethodID(cls, "getCsrpy", "()D");
                mids$[mid_getCsrpydot_dff5885c2c873297] = env->getMethodID(cls, "getCsrpydot", "()D");
                mids$[mid_getCsrpz_dff5885c2c873297] = env->getMethodID(cls, "getCsrpz", "()D");
                mids$[mid_getCsrpzdot_dff5885c2c873297] = env->getMethodID(cls, "getCsrpzdot", "()D");
                mids$[mid_getCthrdrg_dff5885c2c873297] = env->getMethodID(cls, "getCthrdrg", "()D");
                mids$[mid_getCthrsrp_dff5885c2c873297] = env->getMethodID(cls, "getCthrsrp", "()D");
                mids$[mid_getCthrthr_dff5885c2c873297] = env->getMethodID(cls, "getCthrthr", "()D");
                mids$[mid_getCthrx_dff5885c2c873297] = env->getMethodID(cls, "getCthrx", "()D");
                mids$[mid_getCthrxdot_dff5885c2c873297] = env->getMethodID(cls, "getCthrxdot", "()D");
                mids$[mid_getCthry_dff5885c2c873297] = env->getMethodID(cls, "getCthry", "()D");
                mids$[mid_getCthrydot_dff5885c2c873297] = env->getMethodID(cls, "getCthrydot", "()D");
                mids$[mid_getCthrz_dff5885c2c873297] = env->getMethodID(cls, "getCthrz", "()D");
                mids$[mid_getCthrzdot_dff5885c2c873297] = env->getMethodID(cls, "getCthrzdot", "()D");
                mids$[mid_getCxdotx_dff5885c2c873297] = env->getMethodID(cls, "getCxdotx", "()D");
                mids$[mid_getCxdotxdot_dff5885c2c873297] = env->getMethodID(cls, "getCxdotxdot", "()D");
                mids$[mid_getCxdoty_dff5885c2c873297] = env->getMethodID(cls, "getCxdoty", "()D");
                mids$[mid_getCxdotz_dff5885c2c873297] = env->getMethodID(cls, "getCxdotz", "()D");
                mids$[mid_getCxx_dff5885c2c873297] = env->getMethodID(cls, "getCxx", "()D");
                mids$[mid_getCydotx_dff5885c2c873297] = env->getMethodID(cls, "getCydotx", "()D");
                mids$[mid_getCydotxdot_dff5885c2c873297] = env->getMethodID(cls, "getCydotxdot", "()D");
                mids$[mid_getCydoty_dff5885c2c873297] = env->getMethodID(cls, "getCydoty", "()D");
                mids$[mid_getCydotydot_dff5885c2c873297] = env->getMethodID(cls, "getCydotydot", "()D");
                mids$[mid_getCydotz_dff5885c2c873297] = env->getMethodID(cls, "getCydotz", "()D");
                mids$[mid_getCyx_dff5885c2c873297] = env->getMethodID(cls, "getCyx", "()D");
                mids$[mid_getCyy_dff5885c2c873297] = env->getMethodID(cls, "getCyy", "()D");
                mids$[mid_getCzdotx_dff5885c2c873297] = env->getMethodID(cls, "getCzdotx", "()D");
                mids$[mid_getCzdotxdot_dff5885c2c873297] = env->getMethodID(cls, "getCzdotxdot", "()D");
                mids$[mid_getCzdoty_dff5885c2c873297] = env->getMethodID(cls, "getCzdoty", "()D");
                mids$[mid_getCzdotydot_dff5885c2c873297] = env->getMethodID(cls, "getCzdotydot", "()D");
                mids$[mid_getCzdotz_dff5885c2c873297] = env->getMethodID(cls, "getCzdotz", "()D");
                mids$[mid_getCzdotzdot_dff5885c2c873297] = env->getMethodID(cls, "getCzdotzdot", "()D");
                mids$[mid_getCzx_dff5885c2c873297] = env->getMethodID(cls, "getCzx", "()D");
                mids$[mid_getCzy_dff5885c2c873297] = env->getMethodID(cls, "getCzy", "()D");
                mids$[mid_getCzz_dff5885c2c873297] = env->getMethodID(cls, "getCzz", "()D");
                mids$[mid_getXYZCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getXYZCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_isCovXYZset_b108b35ef48e27bd] = env->getMethodID(cls, "isCovXYZset", "()Z");
                mids$[mid_setCdrgdrg_17db3a65980d3441] = env->getMethodID(cls, "setCdrgdrg", "(D)V");
                mids$[mid_setCdrgx_17db3a65980d3441] = env->getMethodID(cls, "setCdrgx", "(D)V");
                mids$[mid_setCdrgxdot_17db3a65980d3441] = env->getMethodID(cls, "setCdrgxdot", "(D)V");
                mids$[mid_setCdrgy_17db3a65980d3441] = env->getMethodID(cls, "setCdrgy", "(D)V");
                mids$[mid_setCdrgydot_17db3a65980d3441] = env->getMethodID(cls, "setCdrgydot", "(D)V");
                mids$[mid_setCdrgz_17db3a65980d3441] = env->getMethodID(cls, "setCdrgz", "(D)V");
                mids$[mid_setCdrgzdot_17db3a65980d3441] = env->getMethodID(cls, "setCdrgzdot", "(D)V");
                mids$[mid_setCovarianceMatrixEntry_1506189166690b5e] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setCsrpdrg_17db3a65980d3441] = env->getMethodID(cls, "setCsrpdrg", "(D)V");
                mids$[mid_setCsrpsrp_17db3a65980d3441] = env->getMethodID(cls, "setCsrpsrp", "(D)V");
                mids$[mid_setCsrpx_17db3a65980d3441] = env->getMethodID(cls, "setCsrpx", "(D)V");
                mids$[mid_setCsrpxdot_17db3a65980d3441] = env->getMethodID(cls, "setCsrpxdot", "(D)V");
                mids$[mid_setCsrpy_17db3a65980d3441] = env->getMethodID(cls, "setCsrpy", "(D)V");
                mids$[mid_setCsrpydot_17db3a65980d3441] = env->getMethodID(cls, "setCsrpydot", "(D)V");
                mids$[mid_setCsrpz_17db3a65980d3441] = env->getMethodID(cls, "setCsrpz", "(D)V");
                mids$[mid_setCsrpzdot_17db3a65980d3441] = env->getMethodID(cls, "setCsrpzdot", "(D)V");
                mids$[mid_setCthrdrg_17db3a65980d3441] = env->getMethodID(cls, "setCthrdrg", "(D)V");
                mids$[mid_setCthrsrp_17db3a65980d3441] = env->getMethodID(cls, "setCthrsrp", "(D)V");
                mids$[mid_setCthrthr_17db3a65980d3441] = env->getMethodID(cls, "setCthrthr", "(D)V");
                mids$[mid_setCthrx_17db3a65980d3441] = env->getMethodID(cls, "setCthrx", "(D)V");
                mids$[mid_setCthrxdot_17db3a65980d3441] = env->getMethodID(cls, "setCthrxdot", "(D)V");
                mids$[mid_setCthry_17db3a65980d3441] = env->getMethodID(cls, "setCthry", "(D)V");
                mids$[mid_setCthrydot_17db3a65980d3441] = env->getMethodID(cls, "setCthrydot", "(D)V");
                mids$[mid_setCthrz_17db3a65980d3441] = env->getMethodID(cls, "setCthrz", "(D)V");
                mids$[mid_setCthrzdot_17db3a65980d3441] = env->getMethodID(cls, "setCthrzdot", "(D)V");
                mids$[mid_setCxdotx_17db3a65980d3441] = env->getMethodID(cls, "setCxdotx", "(D)V");
                mids$[mid_setCxdotxdot_17db3a65980d3441] = env->getMethodID(cls, "setCxdotxdot", "(D)V");
                mids$[mid_setCxdoty_17db3a65980d3441] = env->getMethodID(cls, "setCxdoty", "(D)V");
                mids$[mid_setCxdotz_17db3a65980d3441] = env->getMethodID(cls, "setCxdotz", "(D)V");
                mids$[mid_setCxx_17db3a65980d3441] = env->getMethodID(cls, "setCxx", "(D)V");
                mids$[mid_setCydotx_17db3a65980d3441] = env->getMethodID(cls, "setCydotx", "(D)V");
                mids$[mid_setCydotxdot_17db3a65980d3441] = env->getMethodID(cls, "setCydotxdot", "(D)V");
                mids$[mid_setCydoty_17db3a65980d3441] = env->getMethodID(cls, "setCydoty", "(D)V");
                mids$[mid_setCydotydot_17db3a65980d3441] = env->getMethodID(cls, "setCydotydot", "(D)V");
                mids$[mid_setCydotz_17db3a65980d3441] = env->getMethodID(cls, "setCydotz", "(D)V");
                mids$[mid_setCyx_17db3a65980d3441] = env->getMethodID(cls, "setCyx", "(D)V");
                mids$[mid_setCyy_17db3a65980d3441] = env->getMethodID(cls, "setCyy", "(D)V");
                mids$[mid_setCzdotx_17db3a65980d3441] = env->getMethodID(cls, "setCzdotx", "(D)V");
                mids$[mid_setCzdotxdot_17db3a65980d3441] = env->getMethodID(cls, "setCzdotxdot", "(D)V");
                mids$[mid_setCzdoty_17db3a65980d3441] = env->getMethodID(cls, "setCzdoty", "(D)V");
                mids$[mid_setCzdotydot_17db3a65980d3441] = env->getMethodID(cls, "setCzdotydot", "(D)V");
                mids$[mid_setCzdotz_17db3a65980d3441] = env->getMethodID(cls, "setCzdotz", "(D)V");
                mids$[mid_setCzdotzdot_17db3a65980d3441] = env->getMethodID(cls, "setCzdotzdot", "(D)V");
                mids$[mid_setCzx_17db3a65980d3441] = env->getMethodID(cls, "setCzx", "(D)V");
                mids$[mid_setCzy_17db3a65980d3441] = env->getMethodID(cls, "setCzy", "(D)V");
                mids$[mid_setCzz_17db3a65980d3441] = env->getMethodID(cls, "setCzz", "(D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XYZCovariance::XYZCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

            jdouble XYZCovariance::getCdrgdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgdrg_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCdrgx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCdrgxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgxdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCdrgy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgy_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCdrgydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgydot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCdrgz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgz_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCdrgzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCdrgzdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCsrpdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpdrg_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCsrpsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpsrp_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCsrpx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCsrpxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpxdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCsrpy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpy_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCsrpydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpydot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCsrpz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpz_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCsrpzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCsrpzdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthrdrg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrdrg_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthrsrp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrsrp_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthrthr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrthr_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthrx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthrxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrxdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthry() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthry_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthrydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrydot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthrz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrz_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCthrzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCthrzdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCxdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCxdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotxdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCxdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdoty_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCxdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxdotz_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCxx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCxx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCydotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCydotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotxdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCydoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydoty_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCydotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotydot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCydotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCydotz_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCyx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCyy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCyy_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzdotx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzdotxdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotxdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzdoty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdoty_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzdotydot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotydot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzdotz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotz_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzdotzdot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzdotzdot_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzx() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzx_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzy_dff5885c2c873297]);
            }

            jdouble XYZCovariance::getCzz() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCzz_dff5885c2c873297]);
            }

            ::org::hipparchus::linear::RealMatrix XYZCovariance::getXYZCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceMatrix_688b496048ff947b]));
            }

            jboolean XYZCovariance::isCovXYZset() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCovXYZset_b108b35ef48e27bd]);
            }

            void XYZCovariance::setCdrgdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgdrg_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCdrgx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCdrgxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgxdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCdrgy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgy_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCdrgydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgydot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCdrgz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgz_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCdrgzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCdrgzdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_1506189166690b5e], a0, a1, a2);
            }

            void XYZCovariance::setCsrpdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpdrg_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCsrpsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpsrp_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCsrpx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCsrpxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpxdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCsrpy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpy_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCsrpydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpydot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCsrpz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpz_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCsrpzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsrpzdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthrdrg(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrdrg_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthrsrp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrsrp_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthrthr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrthr_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthrx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthrxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrxdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthry(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthry_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthrydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrydot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthrz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrz_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCthrzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCthrzdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCxdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCxdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotxdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCxdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdoty_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCxdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxdotz_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCxx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCxx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCydotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCydotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotxdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCydoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydoty_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCydotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotydot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCydotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCydotz_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCyx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCyy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCyy_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzdotx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzdotxdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotxdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzdoty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdoty_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzdotydot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotydot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzdotz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotz_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzdotzdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzdotzdot_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzx(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzx_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzy_17db3a65980d3441], a0);
            }

            void XYZCovariance::setCzz(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCzz_17db3a65980d3441], a0);
            }

            void XYZCovariance::validate(jdouble a0) const
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
            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self);
            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg);
            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args);
            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data);
            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data);
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data);
            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data);
            static PyGetSetDef t_XYZCovariance__fields_[] = {
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cdrgzdot),
              DECLARE_GET_FIELD(t_XYZCovariance, covXYZset),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, csrpzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrdrg),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrsrp),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrthr),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthry),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cthrzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cxx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cydotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, cyy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotxdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdoty),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotydot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotz),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czdotzdot),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czx),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czy),
              DECLARE_GETSET_FIELD(t_XYZCovariance, czz),
              DECLARE_GET_FIELD(t_XYZCovariance, xYZCovarianceMatrix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovariance__methods_[] = {
              DECLARE_METHOD(t_XYZCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCdrgzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCsrpzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrdrg, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrsrp, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrthr, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthry, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCthrzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCxx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCydotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCyy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotxdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdoty, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotydot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzdotzdot, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzx, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzy, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getCzz, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, getXYZCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, isCovXYZset, METH_NOARGS),
              DECLARE_METHOD(t_XYZCovariance, setCdrgdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCdrgzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovariance, setCsrpdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCsrpzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrdrg, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrsrp, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrthr, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthry, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCthrzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCxx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCydotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCyy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotxdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdoty, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotydot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzdotzdot, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzx, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzy, METH_O),
              DECLARE_METHOD(t_XYZCovariance, setCzz, METH_O),
              DECLARE_METHOD(t_XYZCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovariance)[] = {
              { Py_tp_methods, t_XYZCovariance__methods_ },
              { Py_tp_init, (void *) t_XYZCovariance_init_ },
              { Py_tp_getset, t_XYZCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(XYZCovariance, t_XYZCovariance, XYZCovariance);

            void t_XYZCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovariance), &PY_TYPE_DEF(XYZCovariance), module, "XYZCovariance", 0);
            }

            void t_XYZCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "class_", make_descriptor(XYZCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "wrapfn_", make_descriptor(t_XYZCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XYZCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovariance::initializeClass, 1)))
                return NULL;
              return t_XYZCovariance::wrap_Object(XYZCovariance(((t_XYZCovariance *) arg)->object.this$));
            }
            static PyObject *t_XYZCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XYZCovariance_init_(t_XYZCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              XYZCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = XYZCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XYZCovariance_getCdrgdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCdrgzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCsrpzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrdrg(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrsrp(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrthr(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrthr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthry(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthry());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCthrzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCxx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCxx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCydotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCydotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCyy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCyy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotxdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdoty(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdoty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotydot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzdotzdot(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzx(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzx());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzy(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getCzz(t_XYZCovariance *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCzz());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_XYZCovariance_getXYZCovarianceMatrix(t_XYZCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_XYZCovariance_isCovXYZset(t_XYZCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCovXYZset());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_XYZCovariance_setCdrgdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCdrgzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCdrgzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCdrgzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCovarianceMatrixEntry(t_XYZCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCsrpzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCsrpzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsrpzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrdrg(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrdrg(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrdrg", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrsrp(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrsrp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrsrp", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrthr(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrthr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrthr", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthry(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthry(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthry", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCthrzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCthrzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCthrzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCxx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCxx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCxx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCydotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCydotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCydotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCyy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCyy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCyy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotxdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotxdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotxdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdoty(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdoty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdoty", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotydot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotydot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotydot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzdotzdot(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzdotzdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzdotzdot", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzx(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzx(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzx", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzy(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzy", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_setCzz(t_XYZCovariance *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCzz(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCzz", arg);
              return NULL;
            }

            static PyObject *t_XYZCovariance_validate(t_XYZCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XYZCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_XYZCovariance_get__cdrgdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cdrgzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCdrgzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cdrgzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCdrgzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cdrgzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__covXYZset(t_XYZCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCovXYZset());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_XYZCovariance_get__csrpdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__csrpzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCsrpzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__csrpzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCsrpzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csrpzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrdrg(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrdrg());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrdrg(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrdrg(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrdrg", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrsrp(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrsrp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrsrp(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrsrp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrsrp", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrthr(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrthr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrthr(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrthr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrthr", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthry(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthry());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthry(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthry(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthry", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cthrzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCthrzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cthrzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCthrzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cthrzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cxx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCxx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cxx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCxx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cxx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cydotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCydotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cydotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCydotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cydotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__cyy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCyy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__cyy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCyy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cyy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotxdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotxdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotxdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotxdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotxdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdoty(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdoty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdoty(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdoty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdoty", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotydot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotydot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotydot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotydot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotydot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czdotzdot(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzdotzdot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czdotzdot(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzdotzdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czdotzdot", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czx(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzx());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czx(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzx(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czx", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czy(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czy(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czy", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__czz(t_XYZCovariance *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCzz());
              return PyFloat_FromDouble((double) value);
            }
            static int t_XYZCovariance_set__czz(t_XYZCovariance *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCzz(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "czz", arg);
              return -1;
            }

            static PyObject *t_XYZCovariance_get__xYZCovarianceMatrix(t_XYZCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDouble::class$ = NULL;
      jmethodID *TimeStampedDouble::mids$ = NULL;
      bool TimeStampedDouble::live$ = false;

      jclass TimeStampedDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a7786d9d355d3792] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDouble::TimeStampedDouble(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7786d9d355d3792, a0, a1.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedDouble::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jdouble TimeStampedDouble::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
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
      static PyObject *t_TimeStampedDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDouble_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedDouble_init_(t_TimeStampedDouble *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDouble_getDate(t_TimeStampedDouble *self);
      static PyObject *t_TimeStampedDouble_getValue(t_TimeStampedDouble *self);
      static PyObject *t_TimeStampedDouble_get__date(t_TimeStampedDouble *self, void *data);
      static PyObject *t_TimeStampedDouble_get__value(t_TimeStampedDouble *self, void *data);
      static PyGetSetDef t_TimeStampedDouble__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDouble, date),
        DECLARE_GET_FIELD(t_TimeStampedDouble, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDouble__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDouble, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedDouble, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDouble)[] = {
        { Py_tp_methods, t_TimeStampedDouble__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDouble_init_ },
        { Py_tp_getset, t_TimeStampedDouble__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedDouble, t_TimeStampedDouble, TimeStampedDouble);

      void t_TimeStampedDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDouble), &PY_TYPE_DEF(TimeStampedDouble), module, "TimeStampedDouble", 0);
      }

      void t_TimeStampedDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "class_", make_descriptor(TimeStampedDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "wrapfn_", make_descriptor(t_TimeStampedDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDouble::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDouble::wrap_Object(TimeStampedDouble(((t_TimeStampedDouble *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedDouble_init_(t_TimeStampedDouble *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeStampedDouble object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TimeStampedDouble(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeStampedDouble_getDate(t_TimeStampedDouble *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedDouble_getValue(t_TimeStampedDouble *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeStampedDouble_get__date(t_TimeStampedDouble *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedDouble_get__value(t_TimeStampedDouble *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParameters::class$ = NULL;
            jmethodID *AdditionalParameters::mids$ = NULL;
            bool AdditionalParameters::live$ = false;

            jclass AdditionalParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getApoapsisAltitude_dff5885c2c873297] = env->getMethodID(cls, "getApoapsisAltitude", "()D");
                mids$[mid_getAreaDRG_dff5885c2c873297] = env->getMethodID(cls, "getAreaDRG", "()D");
                mids$[mid_getAreaPC_dff5885c2c873297] = env->getMethodID(cls, "getAreaPC", "()D");
                mids$[mid_getAreaPCMax_dff5885c2c873297] = env->getMethodID(cls, "getAreaPCMax", "()D");
                mids$[mid_getAreaPCMin_dff5885c2c873297] = env->getMethodID(cls, "getAreaPCMin", "()D");
                mids$[mid_getAreaSRP_dff5885c2c873297] = env->getMethodID(cls, "getAreaSRP", "()D");
                mids$[mid_getCDAreaOverMass_dff5885c2c873297] = env->getMethodID(cls, "getCDAreaOverMass", "()D");
                mids$[mid_getCRAreaOverMass_dff5885c2c873297] = env->getMethodID(cls, "getCRAreaOverMass", "()D");
                mids$[mid_getCovConfidence_dff5885c2c873297] = env->getMethodID(cls, "getCovConfidence", "()D");
                mids$[mid_getCovConfidenceMethod_11b109bd155ca898] = env->getMethodID(cls, "getCovConfidenceMethod", "()Ljava/lang/String;");
                mids$[mid_getHbr_dff5885c2c873297] = env->getMethodID(cls, "getHbr", "()D");
                mids$[mid_getInclination_dff5885c2c873297] = env->getMethodID(cls, "getInclination", "()D");
                mids$[mid_getMass_dff5885c2c873297] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getPeriapsisAltitude_dff5885c2c873297] = env->getMethodID(cls, "getPeriapsisAltitude", "()D");
                mids$[mid_getSedr_dff5885c2c873297] = env->getMethodID(cls, "getSedr", "()D");
                mids$[mid_getThrustAcceleration_dff5885c2c873297] = env->getMethodID(cls, "getThrustAcceleration", "()D");
                mids$[mid_setApoapsisAltitude_17db3a65980d3441] = env->getMethodID(cls, "setApoapsisAltitude", "(D)V");
                mids$[mid_setAreaDRG_17db3a65980d3441] = env->getMethodID(cls, "setAreaDRG", "(D)V");
                mids$[mid_setAreaPC_17db3a65980d3441] = env->getMethodID(cls, "setAreaPC", "(D)V");
                mids$[mid_setAreaPCMax_17db3a65980d3441] = env->getMethodID(cls, "setAreaPCMax", "(D)V");
                mids$[mid_setAreaPCMin_17db3a65980d3441] = env->getMethodID(cls, "setAreaPCMin", "(D)V");
                mids$[mid_setAreaSRP_17db3a65980d3441] = env->getMethodID(cls, "setAreaSRP", "(D)V");
                mids$[mid_setCDAreaOverMass_17db3a65980d3441] = env->getMethodID(cls, "setCDAreaOverMass", "(D)V");
                mids$[mid_setCRAreaOverMass_17db3a65980d3441] = env->getMethodID(cls, "setCRAreaOverMass", "(D)V");
                mids$[mid_setCovConfidence_17db3a65980d3441] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                mids$[mid_setCovConfidenceMethod_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCovConfidenceMethod", "(Ljava/lang/String;)V");
                mids$[mid_setHbr_17db3a65980d3441] = env->getMethodID(cls, "setHbr", "(D)V");
                mids$[mid_setInclination_17db3a65980d3441] = env->getMethodID(cls, "setInclination", "(D)V");
                mids$[mid_setMass_17db3a65980d3441] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setPeriapsisAltitude_17db3a65980d3441] = env->getMethodID(cls, "setPeriapsisAltitude", "(D)V");
                mids$[mid_setSedr_17db3a65980d3441] = env->getMethodID(cls, "setSedr", "(D)V");
                mids$[mid_setThrustAcceleration_17db3a65980d3441] = env->getMethodID(cls, "setThrustAcceleration", "(D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalParameters::AdditionalParameters() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jdouble AdditionalParameters::getApoapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApoapsisAltitude_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getAreaDRG() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaDRG_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getAreaPC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPC_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getAreaPCMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMax_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getAreaPCMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMin_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getAreaSRP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaSRP_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getCDAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCDAreaOverMass_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getCRAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCRAreaOverMass_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getCovConfidence() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_dff5885c2c873297]);
            }

            ::java::lang::String AdditionalParameters::getCovConfidenceMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovConfidenceMethod_11b109bd155ca898]));
            }

            jdouble AdditionalParameters::getHbr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHbr_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getInclination() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInclination_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getPeriapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPeriapsisAltitude_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getSedr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSedr_dff5885c2c873297]);
            }

            jdouble AdditionalParameters::getThrustAcceleration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThrustAcceleration_dff5885c2c873297]);
            }

            void AdditionalParameters::setApoapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApoapsisAltitude_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setAreaDRG(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaDRG_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setAreaPC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPC_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setAreaPCMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMax_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setAreaPCMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMin_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setAreaSRP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaSRP_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setCDAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCDAreaOverMass_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setCRAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCRAreaOverMass_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setCovConfidence(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidence_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setCovConfidenceMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidenceMethod_d0bc48d5b00dc40c], a0.this$);
            }

            void AdditionalParameters::setHbr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHbr_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setInclination(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInclination_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setPeriapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPeriapsisAltitude_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setSedr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSedr_17db3a65980d3441], a0);
            }

            void AdditionalParameters::setThrustAcceleration(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setThrustAcceleration_17db3a65980d3441], a0);
            }

            void AdditionalParameters::validate(jdouble a0) const
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
            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args);
            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalParameters, apoapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaDRG),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPC),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMax),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMin),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaSRP),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cDAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cRAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidence),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidenceMethod),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, hbr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, inclination),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, mass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, periapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, sedr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, thrustAcceleration),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParameters__methods_[] = {
              DECLARE_METHOD(t_AdditionalParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, getApoapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaDRG, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPC, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaSRP, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCDAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCRAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidence, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidenceMethod, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getHbr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getInclination, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getPeriapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getSedr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getThrustAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, setApoapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaDRG, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPC, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMax, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMin, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaSRP, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCDAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCRAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidence, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidenceMethod, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setHbr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setInclination, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setPeriapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setSedr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setThrustAcceleration, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParameters)[] = {
              { Py_tp_methods, t_AdditionalParameters__methods_ },
              { Py_tp_init, (void *) t_AdditionalParameters_init_ },
              { Py_tp_getset, t_AdditionalParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
              NULL
            };

            DEFINE_TYPE(AdditionalParameters, t_AdditionalParameters, AdditionalParameters);

            void t_AdditionalParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParameters), &PY_TYPE_DEF(AdditionalParameters), module, "AdditionalParameters", 0);
            }

            void t_AdditionalParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "class_", make_descriptor(AdditionalParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "wrapfn_", make_descriptor(t_AdditionalParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParameters::initializeClass, 1)))
                return NULL;
              return t_AdditionalParameters::wrap_Object(AdditionalParameters(((t_AdditionalParameters *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds)
            {
              AdditionalParameters object((jobject) NULL);

              INT_CALL(object = AdditionalParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovConfidenceMethod());
              return j2p(result);
            }

            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHbr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInclination());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSedr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApoapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApoapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaDRG(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaDRG", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPC", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaSRP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaSRP", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCDAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCDAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCRAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCRAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCovConfidence(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovConfidenceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidenceMethod", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHbr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHbr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setInclination(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInclination", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPeriapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPeriapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSedr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSedr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setThrustAcceleration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setThrustAcceleration", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApoapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "apoapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaDRG(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaDRG", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPC());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPC", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaSRP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaSRP", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCDAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cDAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCRAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cRAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCovConfidence(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovConfidenceMethod());
              return j2p(value);
            }
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovConfidenceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidenceMethod", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHbr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHbr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "hbr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInclination());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setInclination(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "inclination", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPeriapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "periapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSedr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSedr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sedr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setThrustAcceleration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "thrustAcceleration", arg);
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
#include "org/orekit/time/TimeStampedFieldHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedFieldHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedFieldHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_a8302d600b3ecdcd] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedField;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldHermiteInterpolator, t_TimeStampedFieldHermiteInterpolator, TimeStampedFieldHermiteInterpolator);
      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_Object(const TimeStampedFieldHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldHermiteInterpolator), module, "TimeStampedFieldHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldHermiteInterpolator::wrap_Object(TimeStampedFieldHermiteInterpolator(((t_TimeStampedFieldHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0, a1));
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
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSRangeModifier::RelativisticJ2ClockOneWayGNSSRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticJ2ClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier, t_RelativisticJ2ClockOneWayGNSSRangeModifier, RelativisticJ2ClockOneWayGNSSRangeModifier);

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSRangeModifier), module, "RelativisticJ2ClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSRangeModifier(((t_RelativisticJ2ClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data)
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
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *UpdatingMultipleLinearRegression::class$ = NULL;
        jmethodID *UpdatingMultipleLinearRegression::mids$ = NULL;
        bool UpdatingMultipleLinearRegression::live$ = false;

        jclass UpdatingMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/UpdatingMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addObservation_bc1ff02eb3693128] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_38e689b845a7e4f9] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_hasIntercept_b108b35ef48e27bd] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_0142096ec696b4f7] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_7a5a137e3f3bf403] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatingMultipleLinearRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_bc1ff02eb3693128], a0.this$, a1);
        }

        void UpdatingMultipleLinearRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_38e689b845a7e4f9], a0.this$, a1.this$);
        }

        void UpdatingMultipleLinearRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        jlong UpdatingMultipleLinearRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        jboolean UpdatingMultipleLinearRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_b108b35ef48e27bd]);
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_0142096ec696b4f7]));
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_7a5a137e3f3bf403], a0.this$));
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
      namespace regression {
        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data);
        static PyGetSetDef t_UpdatingMultipleLinearRegression__fields_[] = {
          DECLARE_GET_FIELD(t_UpdatingMultipleLinearRegression, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UpdatingMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatingMultipleLinearRegression)[] = {
          { Py_tp_methods, t_UpdatingMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UpdatingMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatingMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatingMultipleLinearRegression, t_UpdatingMultipleLinearRegression, UpdatingMultipleLinearRegression);

        void t_UpdatingMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatingMultipleLinearRegression), &PY_TYPE_DEF(UpdatingMultipleLinearRegression), module, "UpdatingMultipleLinearRegression", 0);
        }

        void t_UpdatingMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "class_", make_descriptor(UpdatingMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "wrapfn_", make_descriptor(t_UpdatingMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_UpdatingMultipleLinearRegression::wrap_Object(UpdatingMultipleLinearRegression(((t_UpdatingMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
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
          mids$[mid_init$_628ee7a3e714b75c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L2Frame::L2Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_628ee7a3e714b75c, a0.this$, a1.this$)) {}
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
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeType::class$ = NULL;
            jmethodID *AttitudeType::mids$ = NULL;
            bool AttitudeType::live$ = false;
            AttitudeType *AttitudeType::EULER_ANGLE = NULL;
            AttitudeType *AttitudeType::EULER_ANGLE_ANGVEL = NULL;
            AttitudeType *AttitudeType::EULER_ANGLE_DERIVATIVE = NULL;
            AttitudeType *AttitudeType::QUATERNION = NULL;
            AttitudeType *AttitudeType::QUATERNION_ANGVEL = NULL;
            AttitudeType *AttitudeType::QUATERNION_DERIVATIVE = NULL;
            AttitudeType *AttitudeType::QUATERNION_EULER_RATES = NULL;
            AttitudeType *AttitudeType::SPIN = NULL;
            AttitudeType *AttitudeType::SPIN_NUTATION = NULL;
            AttitudeType *AttitudeType::SPIN_NUTATION_MOMENTUM = NULL;

            jclass AttitudeType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_957c4e73164ecb0b] = env->getMethodID(cls, "build", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/time/AbsoluteDate;[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_createDataFields_072027a99e2c958b] = env->getMethodID(cls, "createDataFields", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[Ljava/lang/String;");
                mids$[mid_generateData_08046bd2423bb931] = env->getMethodID(cls, "generateData", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[D");
                mids$[mid_getAngularDerivativesFilter_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getAngularDerivativesFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                mids$[mid_getName_e8f51f84167aafbd] = env->getMethodID(cls, "getName", "(D)Ljava/lang/String;");
                mids$[mid_parse_23dcd01663ff34ee] = env->getMethodID(cls, "parse", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/files/ccsds/utils/ContextBinding;[Ljava/lang/String;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_parseType_db58ad7cff2aa8e1] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_db58ad7cff2aa8e1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_values_1d70a62ede216d25] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EULER_ANGLE = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                EULER_ANGLE_ANGVEL = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                EULER_ANGLE_DERIVATIVE = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE_DERIVATIVE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_ANGVEL = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_DERIVATIVE = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_DERIVATIVE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_EULER_RATES = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_EULER_RATES", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN = new AttitudeType(env->getStaticObjectField(cls, "SPIN", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN_NUTATION = new AttitudeType(env->getStaticObjectField(cls, "SPIN_NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN_NUTATION_MOMENTUM = new AttitudeType(env->getStaticObjectField(cls, "SPIN_NUTATION_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::build(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::time::AbsoluteDate & a4, const JArray< jdouble > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_build_957c4e73164ecb0b], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            JArray< ::java::lang::String > AttitudeType::createDataFields(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_createDataFields_072027a99e2c958b], a0, a1, a2.this$, a3, a4.this$));
            }

            JArray< jdouble > AttitudeType::generateData(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_generateData_08046bd2423bb931], a0, a1, a2.this$, a3, a4.this$));
            }

            ::org::orekit::utils::AngularDerivativesFilter AttitudeType::getAngularDerivativesFilter() const
            {
              return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAngularDerivativesFilter_3d53ef1ca7ad5f8c]));
            }

            ::java::lang::String AttitudeType::getName(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_e8f51f84167aafbd], a0));
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::parse(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::files::ccsds::utils::ContextBinding & a4, const JArray< ::java::lang::String > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_parse_23dcd01663ff34ee], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            AttitudeType AttitudeType::parseType(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_parseType_db58ad7cff2aa8e1], a0.this$));
            }

            ::java::lang::String AttitudeType::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
            }

            AttitudeType AttitudeType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_db58ad7cff2aa8e1], a0.this$));
            }

            JArray< AttitudeType > AttitudeType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AttitudeType >(env->callStaticObjectMethod(cls, mids$[mid_values_1d70a62ede216d25]));
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
          namespace adm {
            static PyObject *t_AttitudeType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_of_(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_build(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_createDataFields(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_generateData(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_getAngularDerivativesFilter(t_AttitudeType *self);
            static PyObject *t_AttitudeType_getName(t_AttitudeType *self, PyObject *arg);
            static PyObject *t_AttitudeType_parse(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_parseType(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_toString(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AttitudeType_values(PyTypeObject *type);
            static PyObject *t_AttitudeType_get__angularDerivativesFilter(t_AttitudeType *self, void *data);
            static PyObject *t_AttitudeType_get__parameters_(t_AttitudeType *self, void *data);
            static PyGetSetDef t_AttitudeType__fields_[] = {
              DECLARE_GET_FIELD(t_AttitudeType, angularDerivativesFilter),
              DECLARE_GET_FIELD(t_AttitudeType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeType__methods_[] = {
              DECLARE_METHOD(t_AttitudeType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, createDataFields, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, generateData, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, getAngularDerivativesFilter, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeType, getName, METH_O),
              DECLARE_METHOD(t_AttitudeType, parse, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, parseType, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, toString, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeType)[] = {
              { Py_tp_methods, t_AttitudeType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AttitudeType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AttitudeType, t_AttitudeType, AttitudeType);
            PyObject *t_AttitudeType::wrap_Object(const AttitudeType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AttitudeType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AttitudeType *self = (t_AttitudeType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AttitudeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AttitudeType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AttitudeType *self = (t_AttitudeType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AttitudeType::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeType), &PY_TYPE_DEF(AttitudeType), module, "AttitudeType", 0);
            }

            void t_AttitudeType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "class_", make_descriptor(AttitudeType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "wrapfn_", make_descriptor(t_AttitudeType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE_ANGVEL", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE_ANGVEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE_DERIVATIVE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE_DERIVATIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_ANGVEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_DERIVATIVE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_DERIVATIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_EULER_RATES", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_EULER_RATES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN_NUTATION", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN_NUTATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN_NUTATION_MOMENTUM", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN_NUTATION_MOMENTUM)));
            }

            static PyObject *t_AttitudeType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeType::initializeClass, 1)))
                return NULL;
              return t_AttitudeType::wrap_Object(AttitudeType(((t_AttitudeType *) arg)->object.this$));
            }
            static PyObject *t_AttitudeType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AttitudeType_of_(t_AttitudeType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AttitudeType_build(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.build(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_createDataFields(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::utils::TimeStampedAngularCoordinates a4((jobject) NULL);
              JArray< ::java::lang::String > result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4))
              {
                OBJ_CALL(result = self->object.createDataFields(a0, a1, a2, a3, a4));
                return JArray<jstring>(result.this$).wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "createDataFields", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_generateData(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::utils::TimeStampedAngularCoordinates a4((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4))
              {
                OBJ_CALL(result = self->object.generateData(a0, a1, a2, a3, a4));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "generateData", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_getAngularDerivativesFilter(t_AttitudeType *self)
            {
              ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngularDerivativesFilter());
              return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
            }

            static PyObject *t_AttitudeType_getName(t_AttitudeType *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getName", arg);
              return NULL;
            }

            static PyObject *t_AttitudeType_parse(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::files::ccsds::utils::ContextBinding a4((jobject) NULL);
              JArray< ::java::lang::String > a5((jobject) NULL);
              ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk[s", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.parse(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parse", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_parseType(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              AttitudeType result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::parseType(a0));
                return t_AttitudeType::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "parseType", arg);
              return NULL;
            }

            static PyObject *t_AttitudeType_toString(t_AttitudeType *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeType), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AttitudeType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::valueOf(a0));
                return t_AttitudeType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AttitudeType_values(PyTypeObject *type)
            {
              JArray< AttitudeType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::values());
              return JArray<jobject>(result.this$).wrap(t_AttitudeType::wrap_jobject);
            }
            static PyObject *t_AttitudeType_get__parameters_(t_AttitudeType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AttitudeType_get__angularDerivativesFilter(t_AttitudeType *self, void *data)
            {
              ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngularDerivativesFilter());
              return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarC::class$ = NULL;
          jmethodID *CopolarC::mids$ = NULL;
          bool CopolarC::live$ = false;

          jclass CopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_dff5885c2c873297] = env->getMethodID(cls, "dc", "()D");
              mids$[mid_nc_dff5885c2c873297] = env->getMethodID(cls, "nc", "()D");
              mids$[mid_sc_dff5885c2c873297] = env->getMethodID(cls, "sc", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarC::dc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dc_dff5885c2c873297]);
          }

          jdouble CopolarC::nc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nc_dff5885c2c873297]);
          }

          jdouble CopolarC::sc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sc_dff5885c2c873297]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarC_dc(t_CopolarC *self);
          static PyObject *t_CopolarC_nc(t_CopolarC *self);
          static PyObject *t_CopolarC_sc(t_CopolarC *self);

          static PyMethodDef t_CopolarC__methods_[] = {
            DECLARE_METHOD(t_CopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_CopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_CopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarC)[] = {
            { Py_tp_methods, t_CopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarC, t_CopolarC, CopolarC);

          void t_CopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarC), &PY_TYPE_DEF(CopolarC), module, "CopolarC", 0);
          }

          void t_CopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "class_", make_descriptor(CopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "wrapfn_", make_descriptor(t_CopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarC::initializeClass, 1)))
              return NULL;
            return t_CopolarC::wrap_Object(CopolarC(((t_CopolarC *) arg)->object.this$));
          }
          static PyObject *t_CopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarC_dc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarC_nc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarC_sc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sc());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
