#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$InconsistentStateAt2PiWrapping::class$ = NULL;
          jmethodID *ArcsSet$InconsistentStateAt2PiWrapping::mids$ = NULL;
          bool ArcsSet$InconsistentStateAt2PiWrapping::live$ = false;

          jclass ArcsSet$InconsistentStateAt2PiWrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet$InconsistentStateAt2PiWrapping::ArcsSet$InconsistentStateAt2PiWrapping() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
        namespace oned {
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args);
          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data);
          static PyGetSetDef t_ArcsSet$InconsistentStateAt2PiWrapping__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$InconsistentStateAt2PiWrapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$InconsistentStateAt2PiWrapping__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            { Py_tp_methods, t_ArcsSet$InconsistentStateAt2PiWrapping__methods_ },
            { Py_tp_init, (void *) t_ArcsSet$InconsistentStateAt2PiWrapping_init_ },
            { Py_tp_getset, t_ArcsSet$InconsistentStateAt2PiWrapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
            NULL
          };

          DEFINE_TYPE(ArcsSet$InconsistentStateAt2PiWrapping, t_ArcsSet$InconsistentStateAt2PiWrapping, ArcsSet$InconsistentStateAt2PiWrapping);
          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(const ArcsSet$InconsistentStateAt2PiWrapping& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), &PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping), module, "ArcsSet$InconsistentStateAt2PiWrapping", 0);
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "class_", make_descriptor(ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "wrapfn_", make_descriptor(t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(ArcsSet$InconsistentStateAt2PiWrapping(((t_ArcsSet$InconsistentStateAt2PiWrapping *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds)
          {
            ArcsSet$InconsistentStateAt2PiWrapping object((jobject) NULL);

            INT_CALL(object = ArcsSet$InconsistentStateAt2PiWrapping());
            self->object = object;
            self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);

            return 0;
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data)
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
#include "org/hipparchus/stat/descriptive/vector/VectorialCovariance.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialCovariance::class$ = NULL;
          jmethodID *VectorialCovariance::mids$ = NULL;
          bool VectorialCovariance::live$ = false;

          jclass VectorialCovariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialCovariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f61a0322e15bde25] = env->getMethodID(cls, "<init>", "(IZ)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_688b496048ff947b] = env->getMethodID(cls, "getResult", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_fa9d415d19f69361] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialCovariance::VectorialCovariance(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f61a0322e15bde25, a0, a1)) {}

          void VectorialCovariance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          jboolean VectorialCovariance::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jlong VectorialCovariance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          ::org::hipparchus::linear::RealMatrix VectorialCovariance::getResult() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getResult_688b496048ff947b]));
          }

          jint VectorialCovariance::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          void VectorialCovariance::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_fa9d415d19f69361], a0.this$);
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
        namespace vector {
          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg);
          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data);
          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data);
          static PyGetSetDef t_VectorialCovariance__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialCovariance, n),
            DECLARE_GET_FIELD(t_VectorialCovariance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialCovariance__methods_[] = {
            DECLARE_METHOD(t_VectorialCovariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialCovariance)[] = {
            { Py_tp_methods, t_VectorialCovariance__methods_ },
            { Py_tp_init, (void *) t_VectorialCovariance_init_ },
            { Py_tp_getset, t_VectorialCovariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialCovariance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialCovariance, t_VectorialCovariance, VectorialCovariance);

          void t_VectorialCovariance::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialCovariance), &PY_TYPE_DEF(VectorialCovariance), module, "VectorialCovariance", 0);
          }

          void t_VectorialCovariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "class_", make_descriptor(VectorialCovariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "wrapfn_", make_descriptor(t_VectorialCovariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialCovariance::initializeClass, 1)))
              return NULL;
            return t_VectorialCovariance::wrap_Object(VectorialCovariance(((t_VectorialCovariance *) arg)->object.this$));
          }
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialCovariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jboolean a1;
            VectorialCovariance object((jobject) NULL);

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              INT_CALL(object = VectorialCovariance(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "increment", arg);
            return NULL;
          }

          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frames::class$ = NULL;
      jmethodID *Frames::mids$ = NULL;
      bool Frames::live$ = false;

      jclass Frames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildUncachedITRF_f52b182126778ef0] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_0567c110431f823b] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_5337b4e40b3fd7b7] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_f7b9f8d7c24d861d] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_18c303577f427d2c] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_a045cc44324e9b37] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_b86f9f61d97a7244] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_0567c110431f823b] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_b86f9f61d97a7244] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_0567c110431f823b] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_ebe8ec05e13e16d0] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_0567c110431f823b] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_ab9f051c99cfdab5] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_0567c110431f823b] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_5337b4e40b3fd7b7] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_ab9f051c99cfdab5] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_0567c110431f823b] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_0567c110431f823b] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_5337b4e40b3fd7b7] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_of_204da4b92db127d6] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)Lorg/orekit/frames/Frames;");
          mids$[mid_of_a585aed55484f0ef] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/frames/Frames;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame Frames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_f52b182126778ef0], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_5337b4e40b3fd7b7]));
      }

      ::org::orekit::frames::EOPHistory Frames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_f7b9f8d7c24d861d], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_18c303577f427d2c], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_a045cc44324e9b37], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF Frames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_ebe8ec05e13e16d0], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_ab9f051c99cfdab5], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_5337b4e40b3fd7b7]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_ab9f051c99cfdab5], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_5337b4e40b3fd7b7]));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_204da4b92db127d6], a0.this$, a1.this$));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::bodies::CelestialBodies & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_a585aed55484f0ef], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEME2000(t_Frames *self);
      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getGCRF(t_Frames *self);
      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getICRF(t_Frames *self);
      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTEME(t_Frames *self);
      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getVeis1950(t_Frames *self);
      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data);
      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data);
      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data);
      static PyGetSetDef t_Frames__fields_[] = {
        DECLARE_GET_FIELD(t_Frames, eME2000),
        DECLARE_GET_FIELD(t_Frames, gCRF),
        DECLARE_GET_FIELD(t_Frames, iCRF),
        DECLARE_GET_FIELD(t_Frames, tEME),
        DECLARE_GET_FIELD(t_Frames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frames__methods_[] = {
        DECLARE_METHOD(t_Frames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_Frames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEcliptic, METH_O),
        DECLARE_METHOD(t_Frames, getFrame, METH_O),
        DECLARE_METHOD(t_Frames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getVeis1950, METH_NOARGS),
        DECLARE_METHOD(t_Frames, of, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frames)[] = {
        { Py_tp_methods, t_Frames__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frames, t_Frames, Frames);

      void t_Frames::install(PyObject *module)
      {
        installType(&PY_TYPE(Frames), &PY_TYPE_DEF(Frames), module, "Frames", 0);
      }

      void t_Frames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "class_", make_descriptor(Frames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "wrapfn_", make_descriptor(t_Frames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frames::initializeClass, 1)))
          return NULL;
        return t_Frames::wrap_Object(Frames(((t_Frames *) arg)->object.this$));
      }
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::time::UT1Scale a0((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.buildUncachedITRF(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "buildUncachedITRF", arg);
        return NULL;
      }

      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getEME2000(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = self->object.getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = self->object.getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_Frames_getGCRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getICRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getITRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_Frames_getTEME(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getVeis1950(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::java::util::function::Supplier a1((jobject) NULL);
            PyTypeObject **p1;
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolatingFunction::class$ = NULL;
        jmethodID *TricubicInterpolatingFunction::mids$ = NULL;
        bool TricubicInterpolatingFunction::live$ = false;

        jclass TricubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8679b497b578747a] = env->getMethodID(cls, "<init>", "([D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D)V");
            mids$[mid_isValidPoint_01c0c8b0c5f55ddf] = env->getMethodID(cls, "isValidPoint", "(DDD)Z");
            mids$[mid_value_8c19bdea212fe058] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolatingFunction::TricubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3, const JArray< JArray< JArray< jdouble > > > & a4, const JArray< JArray< JArray< jdouble > > > & a5, const JArray< JArray< JArray< jdouble > > > & a6, const JArray< JArray< JArray< jdouble > > > & a7, const JArray< JArray< JArray< jdouble > > > & a8, const JArray< JArray< JArray< jdouble > > > & a9, const JArray< JArray< JArray< jdouble > > > & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8679b497b578747a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$)) {}

        jboolean TricubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_01c0c8b0c5f55ddf], a0, a1, a2);
        }

        jdouble TricubicInterpolatingFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_8c19bdea212fe058], a0, a1, a2);
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
        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_TricubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolatingFunction, t_TricubicInterpolatingFunction, TricubicInterpolatingFunction);

        void t_TricubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolatingFunction), &PY_TYPE_DEF(TricubicInterpolatingFunction), module, "TricubicInterpolatingFunction", 0);
        }

        void t_TricubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "class_", make_descriptor(TricubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "wrapfn_", make_descriptor(t_TricubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolatingFunction::wrap_Object(TricubicInterpolatingFunction(((t_TricubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a4((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a5((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a6((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a7((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a8((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a9((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a10((jobject) NULL);
          TricubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
          {
            INT_CALL(object = TricubicInterpolatingFunction(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *Tide::class$ = NULL;
          jmethodID *Tide::mids$ = NULL;
          bool Tide::live$ = false;
          Tide *Tide::K1 = NULL;
          Tide *Tide::K2 = NULL;
          Tide *Tide::M2 = NULL;
          Tide *Tide::MF = NULL;
          Tide *Tide::MM = NULL;
          Tide *Tide::N2 = NULL;
          Tide *Tide::O1 = NULL;
          Tide *Tide::P1 = NULL;
          Tide *Tide::Q1 = NULL;
          Tide *Tide::S2 = NULL;
          Tide *Tide::SSA = NULL;

          jclass Tide::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/Tide");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_init$_5aa4d40be6f39408] = env->getMethodID(cls, "<init>", "(IIIIII)V");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDelaunayMultipliers_d0635cea09dc178c] = env->getMethodID(cls, "getDelaunayMultipliers", "()[I");
              mids$[mid_getDoodsonMultipliers_d0635cea09dc178c] = env->getMethodID(cls, "getDoodsonMultipliers", "()[I");
              mids$[mid_getDoodsonNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getDoodsonNumber", "()I");
              mids$[mid_getPhase_bea6276a59f3cdf6] = env->getMethodID(cls, "getPhase", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getRate_bea6276a59f3cdf6] = env->getMethodID(cls, "getRate", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getTauMultiplier_570ce0828f81a2c1] = env->getMethodID(cls, "getTauMultiplier", "()I");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              K1 = new Tide(env->getStaticObjectField(cls, "K1", "Lorg/orekit/models/earth/displacement/Tide;"));
              K2 = new Tide(env->getStaticObjectField(cls, "K2", "Lorg/orekit/models/earth/displacement/Tide;"));
              M2 = new Tide(env->getStaticObjectField(cls, "M2", "Lorg/orekit/models/earth/displacement/Tide;"));
              MF = new Tide(env->getStaticObjectField(cls, "MF", "Lorg/orekit/models/earth/displacement/Tide;"));
              MM = new Tide(env->getStaticObjectField(cls, "MM", "Lorg/orekit/models/earth/displacement/Tide;"));
              N2 = new Tide(env->getStaticObjectField(cls, "N2", "Lorg/orekit/models/earth/displacement/Tide;"));
              O1 = new Tide(env->getStaticObjectField(cls, "O1", "Lorg/orekit/models/earth/displacement/Tide;"));
              P1 = new Tide(env->getStaticObjectField(cls, "P1", "Lorg/orekit/models/earth/displacement/Tide;"));
              Q1 = new Tide(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/models/earth/displacement/Tide;"));
              S2 = new Tide(env->getStaticObjectField(cls, "S2", "Lorg/orekit/models/earth/displacement/Tide;"));
              SSA = new Tide(env->getStaticObjectField(cls, "SSA", "Lorg/orekit/models/earth/displacement/Tide;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tide::Tide(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

          Tide::Tide(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5aa4d40be6f39408, a0, a1, a2, a3, a4, a5)) {}

          jboolean Tide::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          JArray< jint > Tide::getDelaunayMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDelaunayMultipliers_d0635cea09dc178c]));
          }

          JArray< jint > Tide::getDoodsonMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDoodsonMultipliers_d0635cea09dc178c]));
          }

          jint Tide::getDoodsonNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodsonNumber_570ce0828f81a2c1]);
          }

          jdouble Tide::getPhase(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_bea6276a59f3cdf6], a0.this$);
          }

          jdouble Tide::getRate(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRate_bea6276a59f3cdf6], a0.this$);
          }

          jint Tide::getTauMultiplier() const
          {
            return env->callIntMethod(this$, mids$[mid_getTauMultiplier_570ce0828f81a2c1]);
          }

          jint Tide::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
        namespace displacement {
          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self);
          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getTauMultiplier(t_Tide *self);
          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data);
          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data);
          static PyGetSetDef t_Tide__fields_[] = {
            DECLARE_GET_FIELD(t_Tide, delaunayMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonNumber),
            DECLARE_GET_FIELD(t_Tide, tauMultiplier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tide__methods_[] = {
            DECLARE_METHOD(t_Tide, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, equals, METH_VARARGS),
            DECLARE_METHOD(t_Tide, getDelaunayMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonNumber, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getPhase, METH_O),
            DECLARE_METHOD(t_Tide, getRate, METH_O),
            DECLARE_METHOD(t_Tide, getTauMultiplier, METH_NOARGS),
            DECLARE_METHOD(t_Tide, hashCode, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tide)[] = {
            { Py_tp_methods, t_Tide__methods_ },
            { Py_tp_init, (void *) t_Tide_init_ },
            { Py_tp_getset, t_Tide__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tide)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tide, t_Tide, Tide);

          void t_Tide::install(PyObject *module)
          {
            installType(&PY_TYPE(Tide), &PY_TYPE_DEF(Tide), module, "Tide", 0);
          }

          void t_Tide::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "class_", make_descriptor(Tide::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "wrapfn_", make_descriptor(t_Tide::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "boxfn_", make_descriptor(boxObject));
            env->getClass(Tide::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K1", make_descriptor(t_Tide::wrap_Object(*Tide::K1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K2", make_descriptor(t_Tide::wrap_Object(*Tide::K2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "M2", make_descriptor(t_Tide::wrap_Object(*Tide::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MF", make_descriptor(t_Tide::wrap_Object(*Tide::MF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MM", make_descriptor(t_Tide::wrap_Object(*Tide::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "N2", make_descriptor(t_Tide::wrap_Object(*Tide::N2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "O1", make_descriptor(t_Tide::wrap_Object(*Tide::O1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "P1", make_descriptor(t_Tide::wrap_Object(*Tide::P1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "Q1", make_descriptor(t_Tide::wrap_Object(*Tide::Q1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "S2", make_descriptor(t_Tide::wrap_Object(*Tide::S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "SSA", make_descriptor(t_Tide::wrap_Object(*Tide::SSA)));
          }

          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tide::initializeClass, 1)))
              return NULL;
            return t_Tide::wrap_Object(Tide(((t_Tide *) arg)->object.this$));
          }
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tide::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = Tide(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                jint a5;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Tide(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelaunayMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoodsonMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRate", arg);
            return NULL;
          }

          static PyObject *t_Tide_getTauMultiplier(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTauMultiplier());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelaunayMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoodsonMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTauMultiplier());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *InterSatellitesPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *InterSatellitesPhaseAmbiguityModifier::mids$ = NULL;
          bool InterSatellitesPhaseAmbiguityModifier::live$ = false;

          jclass InterSatellitesPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseAmbiguityModifier::InterSatellitesPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

          ::java::util::List InterSatellitesPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void InterSatellitesPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void InterSatellitesPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseAmbiguityModifier, t_InterSatellitesPhaseAmbiguityModifier, InterSatellitesPhaseAmbiguityModifier);

          void t_InterSatellitesPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseAmbiguityModifier), &PY_TYPE_DEF(InterSatellitesPhaseAmbiguityModifier), module, "InterSatellitesPhaseAmbiguityModifier", 0);
          }

          void t_InterSatellitesPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "class_", make_descriptor(InterSatellitesPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_InterSatellitesPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseAmbiguityModifier::wrap_Object(InterSatellitesPhaseAmbiguityModifier(((t_InterSatellitesPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            InterSatellitesPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = InterSatellitesPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data)
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
#include "org/hipparchus/analysis/function/Divide.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Divide::class$ = NULL;
        jmethodID *Divide::mids$ = NULL;
        bool Divide::live$ = false;

        jclass Divide::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Divide");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Divide::Divide() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Divide::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Divide_value(t_Divide *self, PyObject *args);

        static PyMethodDef t_Divide__methods_[] = {
          DECLARE_METHOD(t_Divide, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Divide)[] = {
          { Py_tp_methods, t_Divide__methods_ },
          { Py_tp_init, (void *) t_Divide_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Divide)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Divide, t_Divide, Divide);

        void t_Divide::install(PyObject *module)
        {
          installType(&PY_TYPE(Divide), &PY_TYPE_DEF(Divide), module, "Divide", 0);
        }

        void t_Divide::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "class_", make_descriptor(Divide::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "wrapfn_", make_descriptor(t_Divide::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Divide::initializeClass, 1)))
            return NULL;
          return t_Divide::wrap_Object(Divide(((t_Divide *) arg)->object.this$));
        }
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Divide::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds)
        {
          Divide object((jobject) NULL);

          INT_CALL(object = Divide());
          self->object = object;

          return 0;
        }

        static PyObject *t_Divide_value(t_Divide *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/frames/StaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *StaticTransform::class$ = NULL;
      jmethodID *StaticTransform::mids$ = NULL;
      bool StaticTransform::live$ = false;

      jclass StaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/StaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compose_7a5c3cae55152ca0] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_compositeRotation_2920b8429bffe4e4] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_compositeTranslation_0e9f75ed5fba5021] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getIdentity_892837e768e813bc] = env->getStaticMethodID(cls, "getIdentity", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getInverse_892837e768e813bc] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_de86c7efc42eac14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_d52645e0d4c07563] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_of_8f193838cddcbf3f] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_d51cd3cdc979d52c] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_of_a6281f2a11dd190b] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformLine_5e58e99e528470fd] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
          mids$[mid_transformPosition_a173408e2b1f78b2] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_d0fe714ef34714f7] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transformVector_a173408e2b1f78b2] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_d0fe714ef34714f7] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StaticTransform StaticTransform::compose(const ::org::orekit::time::AbsoluteDate & a0, const StaticTransform & a1, const StaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_7a5c3cae55152ca0], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::compositeRotation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_2920b8429bffe4e4], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::compositeTranslation(const StaticTransform & a0, const StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_0e9f75ed5fba5021], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::getIdentity()
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_892837e768e813bc]));
      }

      StaticTransform StaticTransform::getInverse() const
      {
        return StaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_892837e768e813bc]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation StaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_de86c7efc42eac14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_d52645e0d4c07563]));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_8f193838cddcbf3f], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_d51cd3cdc979d52c], a0.this$, a1.this$));
      }

      StaticTransform StaticTransform::of(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return StaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_a6281f2a11dd190b], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Line StaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_transformLine_5e58e99e528470fd], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_a173408e2b1f78b2], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_d0fe714ef34714f7], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_a173408e2b1f78b2], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D StaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformVector_d0fe714ef34714f7], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_StaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StaticTransform_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_compositeRotation(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_getIdentity(PyTypeObject *type);
      static PyObject *t_StaticTransform_getInverse(t_StaticTransform *self);
      static PyObject *t_StaticTransform_getRotation(t_StaticTransform *self);
      static PyObject *t_StaticTransform_getTranslation(t_StaticTransform *self);
      static PyObject *t_StaticTransform_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_StaticTransform_transformLine(t_StaticTransform *self, PyObject *arg);
      static PyObject *t_StaticTransform_transformPosition(t_StaticTransform *self, PyObject *args);
      static PyObject *t_StaticTransform_transformVector(t_StaticTransform *self, PyObject *args);
      static PyObject *t_StaticTransform_get__identity(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__inverse(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__rotation(t_StaticTransform *self, void *data);
      static PyObject *t_StaticTransform_get__translation(t_StaticTransform *self, void *data);
      static PyGetSetDef t_StaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_StaticTransform, identity),
        DECLARE_GET_FIELD(t_StaticTransform, inverse),
        DECLARE_GET_FIELD(t_StaticTransform, rotation),
        DECLARE_GET_FIELD(t_StaticTransform, translation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StaticTransform__methods_[] = {
        DECLARE_METHOD(t_StaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compositeRotation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, compositeTranslation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, getIdentity, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_StaticTransform, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StaticTransform, transformLine, METH_O),
        DECLARE_METHOD(t_StaticTransform, transformPosition, METH_VARARGS),
        DECLARE_METHOD(t_StaticTransform, transformVector, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StaticTransform)[] = {
        { Py_tp_methods, t_StaticTransform__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_StaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StaticTransform)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
        NULL
      };

      DEFINE_TYPE(StaticTransform, t_StaticTransform, StaticTransform);

      void t_StaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(StaticTransform), &PY_TYPE_DEF(StaticTransform), module, "StaticTransform", 0);
      }

      void t_StaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "class_", make_descriptor(StaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "wrapfn_", make_descriptor(t_StaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StaticTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StaticTransform::initializeClass, 1)))
          return NULL;
        return t_StaticTransform::wrap_Object(StaticTransform(((t_StaticTransform *) arg)->object.this$));
      }
      static PyObject *t_StaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StaticTransform_compose(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        StaticTransform a2((jobject) NULL);
        StaticTransform result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compose(a0, a1, a2));
          return t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_compositeRotation(PyTypeObject *type, PyObject *args)
      {
        StaticTransform a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArgs(args, "kk", StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compositeRotation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeRotation", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args)
      {
        StaticTransform a0((jobject) NULL);
        StaticTransform a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", StaticTransform::initializeClass, StaticTransform::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::StaticTransform::compositeTranslation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeTranslation", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_getIdentity(PyTypeObject *type)
      {
        StaticTransform result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::StaticTransform::getIdentity());
        return t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getInverse(t_StaticTransform *self)
      {
        StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getRotation(t_StaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_getTranslation(t_StaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_StaticTransform_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1));
              return t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1));
              return t_StaticTransform::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::StaticTransform::of(a0, a1, a2));
              return t_StaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformLine(t_StaticTransform *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transformLine(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transformLine", arg);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformPosition(t_StaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPosition", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_transformVector(t_StaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformVector", args);
        return NULL;
      }

      static PyObject *t_StaticTransform_get__identity(t_StaticTransform *self, void *data)
      {
        StaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getIdentity());
        return t_StaticTransform::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__inverse(t_StaticTransform *self, void *data)
      {
        StaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_StaticTransform::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__rotation(t_StaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_StaticTransform_get__translation(t_StaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *NullArgumentException::class$ = NULL;
      jmethodID *NullArgumentException::mids$ = NULL;
      bool NullArgumentException::live$ = false;

      jclass NullArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/NullArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NullArgumentException::NullArgumentException() : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      NullArgumentException::NullArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::NullPointerException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      ::java::lang::String NullArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
      }

      ::java::lang::String NullArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
      }

      ::java::lang::String NullArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > NullArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable NullArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args);
      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self);
      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data);
      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data);
      static PyGetSetDef t_NullArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_NullArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_NullArgumentException, message),
        DECLARE_GET_FIELD(t_NullArgumentException, parts),
        DECLARE_GET_FIELD(t_NullArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NullArgumentException__methods_[] = {
        DECLARE_METHOD(t_NullArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NullArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_NullArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_NullArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NullArgumentException)[] = {
        { Py_tp_methods, t_NullArgumentException__methods_ },
        { Py_tp_init, (void *) t_NullArgumentException_init_ },
        { Py_tp_getset, t_NullArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NullArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::NullPointerException),
        NULL
      };

      DEFINE_TYPE(NullArgumentException, t_NullArgumentException, NullArgumentException);

      void t_NullArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(NullArgumentException), &PY_TYPE_DEF(NullArgumentException), module, "NullArgumentException", 0);
      }

      void t_NullArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "class_", make_descriptor(NullArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "wrapfn_", make_descriptor(t_NullArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NullArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NullArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NullArgumentException::initializeClass, 1)))
          return NULL;
        return t_NullArgumentException::wrap_Object(NullArgumentException(((t_NullArgumentException *) arg)->object.this$));
      }
      static PyObject *t_NullArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NullArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NullArgumentException_init_(t_NullArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            NullArgumentException object((jobject) NULL);

            INT_CALL(object = NullArgumentException());
            self->object = object;
            break;
          }
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            NullArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = NullArgumentException(a0, a1));
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

      static PyObject *t_NullArgumentException_getLocalizedMessage(t_NullArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getMessage(t_NullArgumentException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(NullArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_NullArgumentException_getParts(t_NullArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_getSpecifier(t_NullArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_NullArgumentException_get__localizedMessage(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__message(t_NullArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_NullArgumentException_get__parts(t_NullArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_NullArgumentException_get__specifier(t_NullArgumentException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldBivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldBivariateFunction::mids$ = NULL;
      bool CalculusFieldBivariateFunction::live$ = false;

      jclass CalculusFieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_6746cc1cd9210d54] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6746cc1cd9210d54], a0.this$, a1.this$));
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
      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldBivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldBivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldBivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldBivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldBivariateFunction, t_CalculusFieldBivariateFunction, CalculusFieldBivariateFunction);
      PyObject *t_CalculusFieldBivariateFunction::wrap_Object(const CalculusFieldBivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldBivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldBivariateFunction), &PY_TYPE_DEF(CalculusFieldBivariateFunction), module, "CalculusFieldBivariateFunction", 0);
      }

      void t_CalculusFieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "class_", make_descriptor(CalculusFieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldBivariateFunction::wrap_Object(CalculusFieldBivariateFunction(((t_CalculusFieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperatureModel.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperatureModel::class$ = NULL;
          jmethodID *GlobalPressureTemperatureModel::mids$ = NULL;
          bool GlobalPressureTemperatureModel::live$ = false;

          jclass GlobalPressureTemperatureModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperatureModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0fb2e2980abbca2] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
              mids$[mid_init$_9bb7aba3503e2aef] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)V");
              mids$[mid_getPressure_dff5885c2c873297] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_dff5885c2c873297] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_weatherParameters_a7786d9d355d3792] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0fb2e2980abbca2, a0, a1, a2.this$)) {}

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9bb7aba3503e2aef, a0, a1, a2.this$, a3.this$)) {}

          jdouble GlobalPressureTemperatureModel::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_dff5885c2c873297]);
          }

          jdouble GlobalPressureTemperatureModel::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_dff5885c2c873297]);
          }

          void GlobalPressureTemperatureModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_a7786d9d355d3792], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data);
          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperatureModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, temperature),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperatureModel__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperatureModel)[] = {
            { Py_tp_methods, t_GlobalPressureTemperatureModel__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperatureModel_init_ },
            { Py_tp_getset, t_GlobalPressureTemperatureModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperatureModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperatureModel, t_GlobalPressureTemperatureModel, GlobalPressureTemperatureModel);

          void t_GlobalPressureTemperatureModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperatureModel), &PY_TYPE_DEF(GlobalPressureTemperatureModel), module, "GlobalPressureTemperatureModel", 0);
          }

          void t_GlobalPressureTemperatureModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "class_", make_descriptor(GlobalPressureTemperatureModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "wrapfn_", make_descriptor(t_GlobalPressureTemperatureModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperatureModel::wrap_Object(GlobalPressureTemperatureModel(((t_GlobalPressureTemperatureModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::data::DataContext a3((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2, a3));
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

          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }

          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldPoleCorrection::class$ = NULL;
      jmethodID *FieldPoleCorrection::mids$ = NULL;
      bool FieldPoleCorrection::live$ = false;

      jclass FieldPoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldPoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_eee0c82b0b9e16e9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getXp_eba8e72a22c984ac] = env->getMethodID(cls, "getXp", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getYp_eba8e72a22c984ac] = env->getMethodID(cls, "getYp", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPoleCorrection::FieldPoleCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eee0c82b0b9e16e9, a0.this$, a1.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getXp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXp_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getYp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYp_eba8e72a22c984ac]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args);
      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data);
      static PyGetSetDef t_FieldPoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPoleCorrection, xp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, yp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPoleCorrection__methods_[] = {
        DECLARE_METHOD(t_FieldPoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPoleCorrection)[] = {
        { Py_tp_methods, t_FieldPoleCorrection__methods_ },
        { Py_tp_init, (void *) t_FieldPoleCorrection_init_ },
        { Py_tp_getset, t_FieldPoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPoleCorrection, t_FieldPoleCorrection, FieldPoleCorrection);
      PyObject *t_FieldPoleCorrection::wrap_Object(const FieldPoleCorrection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPoleCorrection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPoleCorrection), &PY_TYPE_DEF(FieldPoleCorrection), module, "FieldPoleCorrection", 0);
      }

      void t_FieldPoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "class_", make_descriptor(FieldPoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "wrapfn_", make_descriptor(t_FieldPoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPoleCorrection::initializeClass, 1)))
          return NULL;
        return t_FieldPoleCorrection::wrap_Object(FieldPoleCorrection(((t_FieldPoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldPoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParsedUnitsBehavior::class$ = NULL;
          jmethodID *ParsedUnitsBehavior::mids$ = NULL;
          bool ParsedUnitsBehavior::live$ = false;
          ParsedUnitsBehavior *ParsedUnitsBehavior::CONVERT_COMPATIBLE = NULL;
          ParsedUnitsBehavior *ParsedUnitsBehavior::IGNORE_PARSED = NULL;
          ParsedUnitsBehavior *ParsedUnitsBehavior::STRICT_COMPLIANCE = NULL;

          jclass ParsedUnitsBehavior::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParsedUnitsBehavior");

              mids$ = new jmethodID[max_mid];
              mids$[mid_select_b425877fe8558ba5] = env->getMethodID(cls, "select", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
              mids$[mid_valueOf_2f2171faa6955c91] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_values_3237b8dc14fa4016] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONVERT_COMPATIBLE = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "CONVERT_COMPATIBLE", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              IGNORE_PARSED = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "IGNORE_PARSED", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              STRICT_COMPLIANCE = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "STRICT_COMPLIANCE", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::units::Unit ParsedUnitsBehavior::select(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) const
          {
            return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_select_b425877fe8558ba5], a0.this$, a1.this$));
          }

          ParsedUnitsBehavior ParsedUnitsBehavior::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ParsedUnitsBehavior(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2f2171faa6955c91], a0.this$));
          }

          JArray< ParsedUnitsBehavior > ParsedUnitsBehavior::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ParsedUnitsBehavior >(env->callStaticObjectMethod(cls, mids$[mid_values_3237b8dc14fa4016]));
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
          static PyObject *t_ParsedUnitsBehavior_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedUnitsBehavior_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedUnitsBehavior_of_(t_ParsedUnitsBehavior *self, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_select(t_ParsedUnitsBehavior *self, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_values(PyTypeObject *type);
          static PyObject *t_ParsedUnitsBehavior_get__parameters_(t_ParsedUnitsBehavior *self, void *data);
          static PyGetSetDef t_ParsedUnitsBehavior__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedUnitsBehavior, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedUnitsBehavior__methods_[] = {
            DECLARE_METHOD(t_ParsedUnitsBehavior, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, select, METH_VARARGS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedUnitsBehavior)[] = {
            { Py_tp_methods, t_ParsedUnitsBehavior__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedUnitsBehavior__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedUnitsBehavior)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ParsedUnitsBehavior, t_ParsedUnitsBehavior, ParsedUnitsBehavior);
          PyObject *t_ParsedUnitsBehavior::wrap_Object(const ParsedUnitsBehavior& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParsedUnitsBehavior::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParsedUnitsBehavior *self = (t_ParsedUnitsBehavior *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParsedUnitsBehavior::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParsedUnitsBehavior::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParsedUnitsBehavior *self = (t_ParsedUnitsBehavior *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParsedUnitsBehavior::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedUnitsBehavior), &PY_TYPE_DEF(ParsedUnitsBehavior), module, "ParsedUnitsBehavior", 0);
          }

          void t_ParsedUnitsBehavior::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "class_", make_descriptor(ParsedUnitsBehavior::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "wrapfn_", make_descriptor(t_ParsedUnitsBehavior::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "boxfn_", make_descriptor(boxObject));
            env->getClass(ParsedUnitsBehavior::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "CONVERT_COMPATIBLE", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::CONVERT_COMPATIBLE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "IGNORE_PARSED", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::IGNORE_PARSED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "STRICT_COMPLIANCE", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::STRICT_COMPLIANCE)));
          }

          static PyObject *t_ParsedUnitsBehavior_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedUnitsBehavior::initializeClass, 1)))
              return NULL;
            return t_ParsedUnitsBehavior::wrap_Object(ParsedUnitsBehavior(((t_ParsedUnitsBehavior *) arg)->object.this$));
          }
          static PyObject *t_ParsedUnitsBehavior_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedUnitsBehavior::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedUnitsBehavior_of_(t_ParsedUnitsBehavior *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ParsedUnitsBehavior_select(t_ParsedUnitsBehavior *self, PyObject *args)
          {
            ::org::orekit::utils::units::Unit a0((jobject) NULL);
            ::org::orekit::utils::units::Unit a1((jobject) NULL);
            ::org::orekit::utils::units::Unit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.select(a0, a1));
              return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "select", args);
            return NULL;
          }

          static PyObject *t_ParsedUnitsBehavior_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ParsedUnitsBehavior result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::valueOf(a0));
              return t_ParsedUnitsBehavior::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ParsedUnitsBehavior_values(PyTypeObject *type)
          {
            JArray< ParsedUnitsBehavior > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::values());
            return JArray<jobject>(result.this$).wrap(t_ParsedUnitsBehavior::wrap_jobject);
          }
          static PyObject *t_ParsedUnitsBehavior_get__parameters_(t_ParsedUnitsBehavior *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Dipole::class$ = NULL;
          jmethodID *Dipole::mids$ = NULL;
          bool Dipole::live$ = false;
          Dipole *Dipole::CANONICAL_I_J = NULL;

          jclass Dipole::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Dipole");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getPrimary_d52645e0d4c07563] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSecondary_d52645e0d4c07563] = env->getMethodID(cls, "getSecondary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CANONICAL_I_J = new Dipole(env->getStaticObjectField(cls, "CANONICAL_I_J", "Lorg/orekit/estimation/measurements/gnss/Dipole;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getPrimary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPrimary_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getSecondary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSecondary_d52645e0d4c07563]));
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
          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_getPrimary(t_Dipole *self);
          static PyObject *t_Dipole_getSecondary(t_Dipole *self);
          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data);
          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data);
          static PyGetSetDef t_Dipole__fields_[] = {
            DECLARE_GET_FIELD(t_Dipole, primary),
            DECLARE_GET_FIELD(t_Dipole, secondary),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Dipole__methods_[] = {
            DECLARE_METHOD(t_Dipole, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, getPrimary, METH_NOARGS),
            DECLARE_METHOD(t_Dipole, getSecondary, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Dipole)[] = {
            { Py_tp_methods, t_Dipole__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Dipole__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Dipole)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Dipole, t_Dipole, Dipole);

          void t_Dipole::install(PyObject *module)
          {
            installType(&PY_TYPE(Dipole), &PY_TYPE_DEF(Dipole), module, "Dipole", 0);
          }

          void t_Dipole::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "class_", make_descriptor(Dipole::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "wrapfn_", make_descriptor(t_Dipole::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "boxfn_", make_descriptor(boxObject));
            env->getClass(Dipole::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "CANONICAL_I_J", make_descriptor(t_Dipole::wrap_Object(*Dipole::CANONICAL_I_J)));
          }

          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Dipole::initializeClass, 1)))
              return NULL;
            return t_Dipole::wrap_Object(Dipole(((t_Dipole *) arg)->object.this$));
          }
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Dipole::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Dipole_getPrimary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_getSecondary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MariniMurrayModel::class$ = NULL;
          jmethodID *MariniMurrayModel::mids$ = NULL;
          bool MariniMurrayModel::live$ = false;

          jclass MariniMurrayModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MariniMurrayModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_15d88e1aab769ee5] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MariniMurrayModel;");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MariniMurrayModel::MariniMurrayModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

          ::java::util::List MariniMurrayModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          MariniMurrayModel MariniMurrayModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MariniMurrayModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_15d88e1aab769ee5], a0));
          }

          jdouble MariniMurrayModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_fe3b5c46874ab115], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement MariniMurrayModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self);
          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args);
          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data);
          static PyGetSetDef t_MariniMurrayModel__fields_[] = {
            DECLARE_GET_FIELD(t_MariniMurrayModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MariniMurrayModel__methods_[] = {
            DECLARE_METHOD(t_MariniMurrayModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MariniMurrayModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MariniMurrayModel)[] = {
            { Py_tp_methods, t_MariniMurrayModel__methods_ },
            { Py_tp_init, (void *) t_MariniMurrayModel_init_ },
            { Py_tp_getset, t_MariniMurrayModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MariniMurrayModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MariniMurrayModel, t_MariniMurrayModel, MariniMurrayModel);

          void t_MariniMurrayModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MariniMurrayModel), &PY_TYPE_DEF(MariniMurrayModel), module, "MariniMurrayModel", 0);
          }

          void t_MariniMurrayModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "class_", make_descriptor(MariniMurrayModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "wrapfn_", make_descriptor(t_MariniMurrayModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MariniMurrayModel::initializeClass, 1)))
              return NULL;
            return t_MariniMurrayModel::wrap_Object(MariniMurrayModel(((t_MariniMurrayModel *) arg)->object.this$));
          }
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MariniMurrayModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MariniMurrayModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MariniMurrayModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MariniMurrayModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MariniMurrayModel::getStandardModel(a0));
              return t_MariniMurrayModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data)
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
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ScaleFactorCorrection::class$ = NULL;
          jmethodID *ScaleFactorCorrection::mids$ = NULL;
          bool ScaleFactorCorrection::live$ = false;

          jclass ScaleFactorCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ScaleFactorCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fe52c4d8757c8511] = env->getMethodID(cls, "<init>", "(DLjava/util/List;)V");
              mids$[mid_getCorrection_dff5885c2c873297] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getTypesObsScaled_2afa36052df4765d] = env->getMethodID(cls, "getTypesObsScaled", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaleFactorCorrection::ScaleFactorCorrection(jdouble a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe52c4d8757c8511, a0, a1.this$)) {}

          jdouble ScaleFactorCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_dff5885c2c873297]);
          }

          ::java::util::List ScaleFactorCorrection::getTypesObsScaled() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTypesObsScaled_2afa36052df4765d]));
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
      namespace rinex {
        namespace observation {
          static PyObject *t_ScaleFactorCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaleFactorCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaleFactorCorrection_init_(t_ScaleFactorCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaleFactorCorrection_getCorrection(t_ScaleFactorCorrection *self);
          static PyObject *t_ScaleFactorCorrection_getTypesObsScaled(t_ScaleFactorCorrection *self);
          static PyObject *t_ScaleFactorCorrection_get__correction(t_ScaleFactorCorrection *self, void *data);
          static PyObject *t_ScaleFactorCorrection_get__typesObsScaled(t_ScaleFactorCorrection *self, void *data);
          static PyGetSetDef t_ScaleFactorCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_ScaleFactorCorrection, correction),
            DECLARE_GET_FIELD(t_ScaleFactorCorrection, typesObsScaled),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaleFactorCorrection__methods_[] = {
            DECLARE_METHOD(t_ScaleFactorCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaleFactorCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaleFactorCorrection, getCorrection, METH_NOARGS),
            DECLARE_METHOD(t_ScaleFactorCorrection, getTypesObsScaled, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaleFactorCorrection)[] = {
            { Py_tp_methods, t_ScaleFactorCorrection__methods_ },
            { Py_tp_init, (void *) t_ScaleFactorCorrection_init_ },
            { Py_tp_getset, t_ScaleFactorCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaleFactorCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ScaleFactorCorrection, t_ScaleFactorCorrection, ScaleFactorCorrection);

          void t_ScaleFactorCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaleFactorCorrection), &PY_TYPE_DEF(ScaleFactorCorrection), module, "ScaleFactorCorrection", 0);
          }

          void t_ScaleFactorCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "class_", make_descriptor(ScaleFactorCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "wrapfn_", make_descriptor(t_ScaleFactorCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ScaleFactorCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaleFactorCorrection::initializeClass, 1)))
              return NULL;
            return t_ScaleFactorCorrection::wrap_Object(ScaleFactorCorrection(((t_ScaleFactorCorrection *) arg)->object.this$));
          }
          static PyObject *t_ScaleFactorCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaleFactorCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaleFactorCorrection_init_(t_ScaleFactorCorrection *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ScaleFactorCorrection object((jobject) NULL);

            if (!parseArgs(args, "DK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ScaleFactorCorrection(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaleFactorCorrection_getCorrection(t_ScaleFactorCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCorrection());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ScaleFactorCorrection_getTypesObsScaled(t_ScaleFactorCorrection *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypesObsScaled());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType));
          }

          static PyObject *t_ScaleFactorCorrection_get__correction(t_ScaleFactorCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCorrection());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaleFactorCorrection_get__typesObsScaled(t_ScaleFactorCorrection *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypesObsScaled());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanModel::class$ = NULL;
        jmethodID *KalmanModel::mids$ = NULL;
        bool KalmanModel::live$ = false;

        jclass KalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_61e57eae98c1c0d2] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_finalizeEstimation_da0919b7ae9816a3] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getBuilders_2afa36052df4765d] = env->getMethodID(cls, "getBuilders", "()Ljava/util/List;");
            mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_85703d13e302437e] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_c93ddc26f3b3eef4] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_4570675aa9d951bc] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_8baf140085ffa2b7] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_c1adcb03cc15012a] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_688b496048ff947b] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getReferenceTrajectories_4570675aa9d951bc] = env->getMethodID(cls, "getReferenceTrajectories", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setReferenceTrajectories_7d74b10f70058dc6] = env->getMethodID(cls, "setReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_updateReferenceTrajectories_7d74b10f70058dc6] = env->getMethodID(cls, "updateReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanModel::KalmanModel(const ::java::util::List & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_61e57eae98c1c0d2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void KalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_da0919b7ae9816a3], a0.this$, a1.this$);
        }

        ::java::util::List KalmanModel::getBuilders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBuilders_2afa36052df4765d]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31]));
        }

        ::org::orekit::time::AbsoluteDate KalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_85703d13e302437e]));
        }

        jint KalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_c93ddc26f3b3eef4]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_4570675aa9d951bc]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution KalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_8baf140085ffa2b7], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_c1adcb03cc15012a], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getReferenceTrajectories() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getReferenceTrajectories_4570675aa9d951bc]));
        }

        void KalmanModel::setReferenceTrajectories(const JArray< ::org::orekit::propagation::Propagator > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceTrajectories_7d74b10f70058dc6], a0.this$);
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
        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self);
        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg);
        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data);
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanModel, builders),
          DECLARE_GET_FIELD(t_KalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanModel, currentDate),
          DECLARE_GET_FIELD(t_KalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanModel, estimate),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, predictedSpacecraftStates),
          DECLARE_GETSET_FIELD(t_KalmanModel, referenceTrajectories),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanModel__methods_[] = {
          DECLARE_METHOD(t_KalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getBuilders, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getReferenceTrajectories, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, setReferenceTrajectories, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanModel)[] = {
          { Py_tp_methods, t_KalmanModel__methods_ },
          { Py_tp_init, (void *) t_KalmanModel_init_ },
          { Py_tp_getset, t_KalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanModel, t_KalmanModel, KalmanModel);

        void t_KalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanModel), &PY_TYPE_DEF(KalmanModel), module, "KalmanModel", 0);
        }

        void t_KalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "class_", make_descriptor(KalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "wrapfn_", make_descriptor(t_KalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanModel::initializeClass, 1)))
            return NULL;
          return t_KalmanModel::wrap_Object(KalmanModel(((t_KalmanModel *) arg)->object.this$));
        }
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a3((jobject) NULL);
          KalmanModel object((jobject) NULL);

          if (!parseArgs(args, "KKkk", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = KalmanModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args)
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

        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::conversion::PY_TYPE(PropagatorBuilder));
        }

        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceTrajectories());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg)
        {
          JArray< ::org::orekit::propagation::Propagator > a0((jobject) NULL);

          if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceTrajectories(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setReferenceTrajectories", arg);
          return NULL;
        }

        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceTrajectories());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data)
        {
          {
            JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
            if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceTrajectories(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceTrajectories", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataKey::class$ = NULL;
            jmethodID *CommonMetadataKey::mids$ = NULL;
            bool CommonMetadataKey::live$ = false;
            CommonMetadataKey *CommonMetadataKey::CENTER_NAME = NULL;
            CommonMetadataKey *CommonMetadataKey::OBJECT_ID = NULL;
            CommonMetadataKey *CommonMetadataKey::REF_FRAME = NULL;
            CommonMetadataKey *CommonMetadataKey::REF_FRAME_EPOCH = NULL;

            jclass CommonMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_9ccb1594a59f0353] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;)Z");
                mids$[mid_valueOf_b8bef2ea1bf8e3ae] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");
                mids$[mid_values_e52ac7dd10f55521] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new CommonMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                OBJECT_ID = new CommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                REF_FRAME = new CommonMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                REF_FRAME_EPOCH = new CommonMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_9ccb1594a59f0353], a0.this$, a1.this$, a2.this$);
            }

            CommonMetadataKey CommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b8bef2ea1bf8e3ae], a0.this$));
            }

            JArray< CommonMetadataKey > CommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e52ac7dd10f55521]));
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
            static PyObject *t_CommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataKey_of_(t_CommonMetadataKey *self, PyObject *args);
            static PyObject *t_CommonMetadataKey_process(t_CommonMetadataKey *self, PyObject *args);
            static PyObject *t_CommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CommonMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CommonMetadataKey_get__parameters_(t_CommonMetadataKey *self, void *data);
            static PyGetSetDef t_CommonMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CommonMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CommonMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CommonMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataKey)[] = {
              { Py_tp_methods, t_CommonMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CommonMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CommonMetadataKey, t_CommonMetadataKey, CommonMetadataKey);
            PyObject *t_CommonMetadataKey::wrap_Object(const CommonMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CommonMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CommonMetadataKey *self = (t_CommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CommonMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CommonMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CommonMetadataKey *self = (t_CommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CommonMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataKey), &PY_TYPE_DEF(CommonMetadataKey), module, "CommonMetadataKey", 0);
            }

            void t_CommonMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "class_", make_descriptor(CommonMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "wrapfn_", make_descriptor(t_CommonMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CommonMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "CENTER_NAME", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "OBJECT_ID", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::OBJECT_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "REF_FRAME", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "REF_FRAME_EPOCH", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::REF_FRAME_EPOCH)));
            }

            static PyObject *t_CommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataKey::wrap_Object(CommonMetadataKey(((t_CommonMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CommonMetadataKey_of_(t_CommonMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CommonMetadataKey_process(t_CommonMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CommonMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CommonMetadataKey::valueOf(a0));
                return t_CommonMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CommonMetadataKey_values(PyTypeObject *type)
            {
              JArray< CommonMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CommonMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CommonMetadataKey::wrap_jobject);
            }
            static PyObject *t_CommonMetadataKey_get__parameters_(t_CommonMetadataKey *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenThirdBodyLinear::class$ = NULL;
              jmethodID *HansenThirdBodyLinear::mids$ = NULL;
              bool HansenThirdBodyLinear::live$ = false;

              jclass HansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_2c56b6dd4d4b1dec] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_60d7624725a52590] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_60d7624725a52590] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenThirdBodyLinear::HansenThirdBodyLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

              void HansenThirdBodyLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_2c56b6dd4d4b1dec], a0, a1, a2);
              }

              jdouble HansenThirdBodyLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_60d7624725a52590], a0, a1);
              }

              jdouble HansenThirdBodyLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_60d7624725a52590], a0, a1);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args);

              static PyMethodDef t_HansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_HansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_HansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_HansenThirdBodyLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenThirdBodyLinear, t_HansenThirdBodyLinear, HansenThirdBodyLinear);

              void t_HansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenThirdBodyLinear), &PY_TYPE_DEF(HansenThirdBodyLinear), module, "HansenThirdBodyLinear", 0);
              }

              void t_HansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "class_", make_descriptor(HansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "wrapfn_", make_descriptor(t_HansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenThirdBodyLinear::wrap_Object(HansenThirdBodyLinear(((t_HansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenThirdBodyLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ObjectType::class$ = NULL;
              jmethodID *ObjectType::mids$ = NULL;
              bool ObjectType::live$ = false;
              ObjectType *ObjectType::DEBRIS = NULL;
              ObjectType *ObjectType::OTHER = NULL;
              ObjectType *ObjectType::PAYLOAD = NULL;
              ObjectType *ObjectType::ROCKET_BODY = NULL;
              ObjectType *ObjectType::UNKNOWN = NULL;

              jclass ObjectType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ObjectType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_0267badad287be78] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_values_c81ac63e326c29ed] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEBRIS = new ObjectType(env->getStaticObjectField(cls, "DEBRIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  OTHER = new ObjectType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  PAYLOAD = new ObjectType(env->getStaticObjectField(cls, "PAYLOAD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  ROCKET_BODY = new ObjectType(env->getStaticObjectField(cls, "ROCKET_BODY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  UNKNOWN = new ObjectType(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ObjectType ObjectType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ObjectType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0267badad287be78], a0.this$));
              }

              JArray< ObjectType > ObjectType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ObjectType >(env->callStaticObjectMethod(cls, mids$[mid_values_c81ac63e326c29ed]));
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
              static PyObject *t_ObjectType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ObjectType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ObjectType_of_(t_ObjectType *self, PyObject *args);
              static PyObject *t_ObjectType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ObjectType_values(PyTypeObject *type);
              static PyObject *t_ObjectType_get__parameters_(t_ObjectType *self, void *data);
              static PyGetSetDef t_ObjectType__fields_[] = {
                DECLARE_GET_FIELD(t_ObjectType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ObjectType__methods_[] = {
                DECLARE_METHOD(t_ObjectType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ObjectType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ObjectType)[] = {
                { Py_tp_methods, t_ObjectType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ObjectType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ObjectType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ObjectType, t_ObjectType, ObjectType);
              PyObject *t_ObjectType::wrap_Object(const ObjectType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ObjectType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ObjectType *self = (t_ObjectType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ObjectType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ObjectType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ObjectType *self = (t_ObjectType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ObjectType::install(PyObject *module)
              {
                installType(&PY_TYPE(ObjectType), &PY_TYPE_DEF(ObjectType), module, "ObjectType", 0);
              }

              void t_ObjectType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "class_", make_descriptor(ObjectType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "wrapfn_", make_descriptor(t_ObjectType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ObjectType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "DEBRIS", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::DEBRIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "OTHER", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "PAYLOAD", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::PAYLOAD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "ROCKET_BODY", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::ROCKET_BODY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "UNKNOWN", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::UNKNOWN)));
              }

              static PyObject *t_ObjectType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ObjectType::initializeClass, 1)))
                  return NULL;
                return t_ObjectType::wrap_Object(ObjectType(((t_ObjectType *) arg)->object.this$));
              }
              static PyObject *t_ObjectType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ObjectType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ObjectType_of_(t_ObjectType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ObjectType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ObjectType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::valueOf(a0));
                  return t_ObjectType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ObjectType_values(PyTypeObject *type)
              {
                JArray< ObjectType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::values());
                return JArray<jobject>(result.this$).wrap(t_ObjectType::wrap_jobject);
              }
              static PyObject *t_ObjectType_get__parameters_(t_ObjectType *self, void *data)
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
#include "org/orekit/estimation/sequential/UnscentedKalmanModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanModel::class$ = NULL;
        jmethodID *UnscentedKalmanModel::mids$ = NULL;
        bool UnscentedKalmanModel::live$ = false;

        jclass UnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_da0919b7ae9816a3] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_85703d13e302437e] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_c93ddc26f3b3eef4] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_4570675aa9d951bc] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_10ef30e3c9abcb5f] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_c7c45dcf7ef024eb] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_688b496048ff947b] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_bfe87416cc1883be] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_da0919b7ae9816a3], a0.this$, a1.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31]));
        }

        ::org::orekit::time::AbsoluteDate UnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_85703d13e302437e]));
        }

        jint UnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_c93ddc26f3b3eef4]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da]));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_4570675aa9d951bc]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_10ef30e3c9abcb5f], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_c7c45dcf7ef024eb], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::hipparchus::linear::RealVector > UnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_bfe87416cc1883be], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31]));
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
        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_UnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanModel)[] = {
          { Py_tp_methods, t_UnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanModel, t_UnscentedKalmanModel, UnscentedKalmanModel);

        void t_UnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanModel), &PY_TYPE_DEF(UnscentedKalmanModel), module, "UnscentedKalmanModel", 0);
        }

        void t_UnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "class_", make_descriptor(UnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "wrapfn_", make_descriptor(t_UnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanModel::wrap_Object(UnscentedKalmanModel(((t_UnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args)
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

        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *RealDistribution::class$ = NULL;
      jmethodID *RealDistribution::mids$ = NULL;
      bool RealDistribution::live$ = false;

      jclass RealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/RealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
          mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
          mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
          mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
          mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
          mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");
          mids$[mid_probability_86ffecc08a63eff0] = env->getMethodID(cls, "probability", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealDistribution::cumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
      }

      jdouble RealDistribution::density(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
      }

      jdouble RealDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
      }

      jdouble RealDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
      }

      jdouble RealDistribution::getSupportLowerBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
      }

      jdouble RealDistribution::getSupportUpperBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
      }

      jdouble RealDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
      }

      jboolean RealDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
      }

      jdouble RealDistribution::logDensity(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
      }

      jdouble RealDistribution::probability(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_86ffecc08a63eff0], a0, a1);
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
      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self);
      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args);
      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data);
      static PyGetSetDef t_RealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_RealDistribution, numericalMean),
        DECLARE_GET_FIELD(t_RealDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_RealDistribution, supportConnected),
        DECLARE_GET_FIELD(t_RealDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_RealDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealDistribution__methods_[] = {
        DECLARE_METHOD(t_RealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, density, METH_O),
        DECLARE_METHOD(t_RealDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, logDensity, METH_O),
        DECLARE_METHOD(t_RealDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealDistribution)[] = {
        { Py_tp_methods, t_RealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealDistribution, t_RealDistribution, RealDistribution);

      void t_RealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(RealDistribution), &PY_TYPE_DEF(RealDistribution), module, "RealDistribution", 0);
      }

      void t_RealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "class_", make_descriptor(RealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "wrapfn_", make_descriptor(t_RealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealDistribution::initializeClass, 1)))
          return NULL;
        return t_RealDistribution::wrap_Object(RealDistribution(((t_RealDistribution *) arg)->object.this$));
      }
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.logDensity(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.probability(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovarianceKey::class$ = NULL;
            jmethodID *XYZCovarianceKey::mids$ = NULL;
            bool XYZCovarianceKey::live$ = false;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::COMMENT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_THR = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CX_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Z = NULL;

            jclass XYZCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_929d2ebdaaf05df0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;)Z");
                mids$[mid_valueOf_2d389747eea72de0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");
                mids$[mid_values_3bcadb496f18c75c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                COMMENT = new XYZCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_THR = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CX_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XYZCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_929d2ebdaaf05df0], a0.this$, a1.this$, a2.this$);
            }

            XYZCovarianceKey XYZCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XYZCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2d389747eea72de0], a0.this$));
            }

            JArray< XYZCovarianceKey > XYZCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XYZCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_3bcadb496f18c75c]));
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
            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data);
            static PyGetSetDef t_XYZCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_XYZCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_XYZCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovarianceKey)[] = {
              { Py_tp_methods, t_XYZCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XYZCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XYZCovarianceKey, t_XYZCovarianceKey, XYZCovarianceKey);
            PyObject *t_XYZCovarianceKey::wrap_Object(const XYZCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XYZCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XYZCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovarianceKey), &PY_TYPE_DEF(XYZCovarianceKey), module, "XYZCovarianceKey", 0);
            }

            void t_XYZCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "class_", make_descriptor(XYZCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "wrapfn_", make_descriptor(t_XYZCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XYZCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "COMMENT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_THR", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CX_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Z)));
            }

            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_XYZCovarianceKey::wrap_Object(XYZCovarianceKey(((t_XYZCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XYZCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::valueOf(a0));
                return t_XYZCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type)
            {
              JArray< XYZCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_XYZCovarianceKey::wrap_jobject);
            }
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data)
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
#include "org/orekit/propagation/StateCovarianceMatrixProvider.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceMatrixProvider::class$ = NULL;
      jmethodID *StateCovarianceMatrixProvider::mids$ = NULL;
      bool StateCovarianceMatrixProvider::live$ = false;

      jclass StateCovarianceMatrixProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceMatrixProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1678ff5367b5b9b3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/StateCovariance;)V");
          mids$[mid_getAdditionalState_cb44069ef445f941] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getCovarianceOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getCovarianceOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStateCovariance_a4d66b80c9e4a0a7] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_ef02444df5934a90] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_5d8d0cb86789b4bf] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_680f8463a473c3cb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceMatrixProvider::StateCovarianceMatrixProvider(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::propagation::MatricesHarvester & a2, const ::org::orekit::propagation::StateCovariance & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1678ff5367b5b9b3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      JArray< jdouble > StateCovarianceMatrixProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_cb44069ef445f941], a0.this$));
      }

      ::org::orekit::orbits::OrbitType StateCovarianceMatrixProvider::getCovarianceOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getCovarianceOrbitType_e29360d311dc0e20]));
      }

      ::java::lang::String StateCovarianceMatrixProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_a4d66b80c9e4a0a7], a0.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_ef02444df5934a90], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_5d8d0cb86789b4bf], a0.this$, a1.this$, a2.this$));
      }

      void StateCovarianceMatrixProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
      }

      jboolean StateCovarianceMatrixProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_680f8463a473c3cb], a0.this$);
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
      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data);
      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data);
      static PyGetSetDef t_StateCovarianceMatrixProvider__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, covarianceOrbitType),
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceMatrixProvider__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getCovarianceOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getStateCovariance, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceMatrixProvider)[] = {
        { Py_tp_methods, t_StateCovarianceMatrixProvider__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceMatrixProvider_init_ },
        { Py_tp_getset, t_StateCovarianceMatrixProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceMatrixProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovarianceMatrixProvider, t_StateCovarianceMatrixProvider, StateCovarianceMatrixProvider);

      void t_StateCovarianceMatrixProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceMatrixProvider), &PY_TYPE_DEF(StateCovarianceMatrixProvider), module, "StateCovarianceMatrixProvider", 0);
      }

      void t_StateCovarianceMatrixProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "class_", make_descriptor(StateCovarianceMatrixProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_StateCovarianceMatrixProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceMatrixProvider::wrap_Object(StateCovarianceMatrixProvider(((t_StateCovarianceMatrixProvider *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester a2((jobject) NULL);
        ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
        StateCovarianceMatrixProvider object((jobject) NULL);

        if (!parseArgs(args, "sskk", ::org::orekit::propagation::MatricesHarvester::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = StateCovarianceMatrixProvider(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::orbits::OrbitType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1, a2));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStateCovariance", args);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args)
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

      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yields(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yields", arg);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AGILeapSecondFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader::mids$ = NULL;
      bool AGILeapSecondFilesLoader::live$ = false;
      ::java::lang::String *AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass AGILeapSecondFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_2afa36052df4765d] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}

      ::java::util::List AGILeapSecondFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_2afa36052df4765d]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self);

      static PyMethodDef t_AGILeapSecondFilesLoader__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader, t_AGILeapSecondFilesLoader, AGILeapSecondFilesLoader);

      void t_AGILeapSecondFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader), &PY_TYPE_DEF(AGILeapSecondFilesLoader), module, "AGILeapSecondFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser)));
      }

      void t_AGILeapSecondFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "class_", make_descriptor(AGILeapSecondFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(AGILeapSecondFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader::wrap_Object(AGILeapSecondFilesLoader(((t_AGILeapSecondFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0, a1));
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

      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Atanh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atanh::class$ = NULL;
        jmethodID *Atanh::mids$ = NULL;
        bool Atanh::live$ = false;

        jclass Atanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atanh::Atanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Atanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args);

        static PyMethodDef t_Atanh__methods_[] = {
          DECLARE_METHOD(t_Atanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atanh)[] = {
          { Py_tp_methods, t_Atanh__methods_ },
          { Py_tp_init, (void *) t_Atanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atanh, t_Atanh, Atanh);

        void t_Atanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Atanh), &PY_TYPE_DEF(Atanh), module, "Atanh", 0);
        }

        void t_Atanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "class_", make_descriptor(Atanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "wrapfn_", make_descriptor(t_Atanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atanh::initializeClass, 1)))
            return NULL;
          return t_Atanh::wrap_Object(Atanh(((t_Atanh *) arg)->object.this$));
        }
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds)
        {
          Atanh object((jobject) NULL);

          INT_CALL(object = Atanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args)
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
#include "org/orekit/forces/radiation/KnockeRediffusedForceModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *KnockeRediffusedForceModel::class$ = NULL;
        jmethodID *KnockeRediffusedForceModel::mids$ = NULL;
        bool KnockeRediffusedForceModel::live$ = false;

        jclass KnockeRediffusedForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/KnockeRediffusedForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6ae72147443a4380] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DD)V");
            mids$[mid_init$_c49459c1e3df876c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DDLorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ae72147443a4380, a0.this$, a1.this$, a2, a3)) {}

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c49459c1e3df876c, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        jboolean KnockeRediffusedForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::List KnockeRediffusedForceModel::getParametersDrivers() const
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
      namespace radiation {
        static PyObject *t_KnockeRediffusedForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KnockeRediffusedForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KnockeRediffusedForceModel_init_(t_KnockeRediffusedForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KnockeRediffusedForceModel_acceleration(t_KnockeRediffusedForceModel *self, PyObject *args);
        static PyObject *t_KnockeRediffusedForceModel_dependsOnPositionOnly(t_KnockeRediffusedForceModel *self);
        static PyObject *t_KnockeRediffusedForceModel_getParametersDrivers(t_KnockeRediffusedForceModel *self);
        static PyObject *t_KnockeRediffusedForceModel_get__parametersDrivers(t_KnockeRediffusedForceModel *self, void *data);
        static PyGetSetDef t_KnockeRediffusedForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_KnockeRediffusedForceModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KnockeRediffusedForceModel__methods_[] = {
          DECLARE_METHOD(t_KnockeRediffusedForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KnockeRediffusedForceModel)[] = {
          { Py_tp_methods, t_KnockeRediffusedForceModel__methods_ },
          { Py_tp_init, (void *) t_KnockeRediffusedForceModel_init_ },
          { Py_tp_getset, t_KnockeRediffusedForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KnockeRediffusedForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KnockeRediffusedForceModel, t_KnockeRediffusedForceModel, KnockeRediffusedForceModel);

        void t_KnockeRediffusedForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KnockeRediffusedForceModel), &PY_TYPE_DEF(KnockeRediffusedForceModel), module, "KnockeRediffusedForceModel", 0);
        }

        void t_KnockeRediffusedForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "class_", make_descriptor(KnockeRediffusedForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "wrapfn_", make_descriptor(t_KnockeRediffusedForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KnockeRediffusedForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KnockeRediffusedForceModel::initializeClass, 1)))
            return NULL;
          return t_KnockeRediffusedForceModel::wrap_Object(KnockeRediffusedForceModel(((t_KnockeRediffusedForceModel *) arg)->object.this$));
        }
        static PyObject *t_KnockeRediffusedForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KnockeRediffusedForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KnockeRediffusedForceModel_init_(t_KnockeRediffusedForceModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              KnockeRediffusedForceModel object((jobject) NULL);

              if (!parseArgs(args, "kkDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = KnockeRediffusedForceModel(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::orekit::time::TimeScale a4((jobject) NULL);
              KnockeRediffusedForceModel object((jobject) NULL);

              if (!parseArgs(args, "kkDDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KnockeRediffusedForceModel(a0, a1, a2, a3, a4));
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

        static PyObject *t_KnockeRediffusedForceModel_acceleration(t_KnockeRediffusedForceModel *self, PyObject *args)
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

        static PyObject *t_KnockeRediffusedForceModel_dependsOnPositionOnly(t_KnockeRediffusedForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_KnockeRediffusedForceModel_getParametersDrivers(t_KnockeRediffusedForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_KnockeRediffusedForceModel_get__parametersDrivers(t_KnockeRediffusedForceModel *self, void *data)
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
#include "org/hipparchus/analysis/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonFieldUnivariateFunction");

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
  namespace hipparchus {
    namespace analysis {
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
#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/List.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractCycleSlipDetector::class$ = NULL;
          jmethodID *AbstractCycleSlipDetector::mids$ = NULL;
          bool AbstractCycleSlipDetector::live$ = false;

          jclass AbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_667c8a8776700e01] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_getResults_2afa36052df4765d] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_getMinMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_getMaxTimeBeetween2Measurement_dff5885c2c873297] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getStuffReference_2afa36052df4765d] = env->getMethodID(cls, "getStuffReference", "()Ljava/util/List;");
              mids$[mid_cycleSlipDataSet_37ef30963779752d] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_manageData_5e249044f63168db] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_setName_571eb7cd9a331044] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractCycleSlipDetector::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_667c8a8776700e01], a0.this$));
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
          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg);

          static PyMethodDef t_AbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_AbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_AbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractCycleSlipDetector, t_AbstractCycleSlipDetector, AbstractCycleSlipDetector);

          void t_AbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractCycleSlipDetector), &PY_TYPE_DEF(AbstractCycleSlipDetector), module, "AbstractCycleSlipDetector", 0);
          }

          void t_AbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "class_", make_descriptor(AbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_AbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_AbstractCycleSlipDetector::wrap_Object(AbstractCycleSlipDetector(((t_AbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
