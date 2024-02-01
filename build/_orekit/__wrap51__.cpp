#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/PythonAbstractDragForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonAbstractDragForceModel::class$ = NULL;
        jmethodID *PythonAbstractDragForceModel::mids$ = NULL;
        bool PythonAbstractDragForceModel::live$ = false;

        jclass PythonAbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonAbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_00032388d927cffa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDragForceModel::PythonAbstractDragForceModel(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_00032388d927cffa, a0.this$)) {}

        void PythonAbstractDragForceModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractDragForceModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractDragForceModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace drag {
        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self);
        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractDragForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDragForceModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDragForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDragForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractDragForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDragForceModel, t_PythonAbstractDragForceModel, PythonAbstractDragForceModel);

        void t_PythonAbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDragForceModel), &PY_TYPE_DEF(PythonAbstractDragForceModel), module, "PythonAbstractDragForceModel", 1);
        }

        void t_PythonAbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "class_", make_descriptor(PythonAbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "wrapfn_", make_descriptor(t_PythonAbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDragForceModel::initializeClass);
          JNINativeMethod methods[] = {
            { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractDragForceModel_acceleration0 },
            { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractDragForceModel_acceleration1 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractDragForceModel_getParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDragForceModel_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDragForceModel::wrap_Object(PythonAbstractDragForceModel(((t_PythonAbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          PythonAbstractDragForceModel object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractDragForceModel(a0));
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

        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("acceleration", result);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("acceleration", result);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data)
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
#include "java/io/File.h"
#include "java/io/IOException.h"
#include "java/io/Serializable.h"
#include "java/io/FilenameFilter.h"
#include "java/io/FileFilter.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *File::class$ = NULL;
    jmethodID *File::mids$ = NULL;
    bool File::live$ = false;
    ::java::lang::String *File::pathSeparator = NULL;
    jchar File::pathSeparatorChar = (jchar) 0;
    ::java::lang::String *File::separator = NULL;
    jchar File::separatorChar = (jchar) 0;

    jclass File::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/File");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_e73c97ae824bba63] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_canExecute_eee3de00fe971136] = env->getMethodID(cls, "canExecute", "()Z");
        mids$[mid_canRead_eee3de00fe971136] = env->getMethodID(cls, "canRead", "()Z");
        mids$[mid_canWrite_eee3de00fe971136] = env->getMethodID(cls, "canWrite", "()Z");
        mids$[mid_compareTo_509e55f0f3677b3c] = env->getMethodID(cls, "compareTo", "(Ljava/io/File;)I");
        mids$[mid_createNewFile_eee3de00fe971136] = env->getMethodID(cls, "createNewFile", "()Z");
        mids$[mid_createTempFile_ccff254288fbd3e6] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;");
        mids$[mid_createTempFile_d0bb7da1c2d05a8c] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;");
        mids$[mid_delete_eee3de00fe971136] = env->getMethodID(cls, "delete", "()Z");
        mids$[mid_deleteOnExit_ff7cb6c242604316] = env->getMethodID(cls, "deleteOnExit", "()V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_exists_eee3de00fe971136] = env->getMethodID(cls, "exists", "()Z");
        mids$[mid_getAbsoluteFile_2f333c06ff3067c5] = env->getMethodID(cls, "getAbsoluteFile", "()Ljava/io/File;");
        mids$[mid_getAbsolutePath_d2c8eb4129821f0e] = env->getMethodID(cls, "getAbsolutePath", "()Ljava/lang/String;");
        mids$[mid_getCanonicalFile_2f333c06ff3067c5] = env->getMethodID(cls, "getCanonicalFile", "()Ljava/io/File;");
        mids$[mid_getCanonicalPath_d2c8eb4129821f0e] = env->getMethodID(cls, "getCanonicalPath", "()Ljava/lang/String;");
        mids$[mid_getFreeSpace_42c72b98e3c2e08a] = env->getMethodID(cls, "getFreeSpace", "()J");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_d2c8eb4129821f0e] = env->getMethodID(cls, "getParent", "()Ljava/lang/String;");
        mids$[mid_getParentFile_2f333c06ff3067c5] = env->getMethodID(cls, "getParentFile", "()Ljava/io/File;");
        mids$[mid_getPath_d2c8eb4129821f0e] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getTotalSpace_42c72b98e3c2e08a] = env->getMethodID(cls, "getTotalSpace", "()J");
        mids$[mid_getUsableSpace_42c72b98e3c2e08a] = env->getMethodID(cls, "getUsableSpace", "()J");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isAbsolute_eee3de00fe971136] = env->getMethodID(cls, "isAbsolute", "()Z");
        mids$[mid_isDirectory_eee3de00fe971136] = env->getMethodID(cls, "isDirectory", "()Z");
        mids$[mid_isFile_eee3de00fe971136] = env->getMethodID(cls, "isFile", "()Z");
        mids$[mid_isHidden_eee3de00fe971136] = env->getMethodID(cls, "isHidden", "()Z");
        mids$[mid_lastModified_42c72b98e3c2e08a] = env->getMethodID(cls, "lastModified", "()J");
        mids$[mid_length_42c72b98e3c2e08a] = env->getMethodID(cls, "length", "()J");
        mids$[mid_list_f81c0644d57ae495] = env->getMethodID(cls, "list", "()[Ljava/lang/String;");
        mids$[mid_list_97e4a3e135e76d9d] = env->getMethodID(cls, "list", "(Ljava/io/FilenameFilter;)[Ljava/lang/String;");
        mids$[mid_listFiles_69aca932c4172962] = env->getMethodID(cls, "listFiles", "()[Ljava/io/File;");
        mids$[mid_listFiles_1f4b11a0bd14c57b] = env->getMethodID(cls, "listFiles", "(Ljava/io/FileFilter;)[Ljava/io/File;");
        mids$[mid_listFiles_9aeda5cf12f37a87] = env->getMethodID(cls, "listFiles", "(Ljava/io/FilenameFilter;)[Ljava/io/File;");
        mids$[mid_listRoots_69aca932c4172962] = env->getStaticMethodID(cls, "listRoots", "()[Ljava/io/File;");
        mids$[mid_mkdir_eee3de00fe971136] = env->getMethodID(cls, "mkdir", "()Z");
        mids$[mid_mkdirs_eee3de00fe971136] = env->getMethodID(cls, "mkdirs", "()Z");
        mids$[mid_renameTo_f268557c9bda463f] = env->getMethodID(cls, "renameTo", "(Ljava/io/File;)Z");
        mids$[mid_setExecutable_80aaf3d99b4df682] = env->getMethodID(cls, "setExecutable", "(Z)Z");
        mids$[mid_setExecutable_d30e0f24f88aecc2] = env->getMethodID(cls, "setExecutable", "(ZZ)Z");
        mids$[mid_setLastModified_31359cc4f01092c4] = env->getMethodID(cls, "setLastModified", "(J)Z");
        mids$[mid_setReadOnly_eee3de00fe971136] = env->getMethodID(cls, "setReadOnly", "()Z");
        mids$[mid_setReadable_80aaf3d99b4df682] = env->getMethodID(cls, "setReadable", "(Z)Z");
        mids$[mid_setReadable_d30e0f24f88aecc2] = env->getMethodID(cls, "setReadable", "(ZZ)Z");
        mids$[mid_setWritable_80aaf3d99b4df682] = env->getMethodID(cls, "setWritable", "(Z)Z");
        mids$[mid_setWritable_d30e0f24f88aecc2] = env->getMethodID(cls, "setWritable", "(ZZ)Z");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toURL_a4c2066e9b85f63c] = env->getMethodID(cls, "toURL", "()Ljava/net/URL;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        pathSeparator = new ::java::lang::String(env->getStaticObjectField(cls, "pathSeparator", "Ljava/lang/String;"));
        pathSeparatorChar = env->getStaticCharField(cls, "pathSeparatorChar");
        separator = new ::java::lang::String(env->getStaticObjectField(cls, "separator", "Ljava/lang/String;"));
        separatorChar = env->getStaticCharField(cls, "separatorChar");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    File::File(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    File::File(const File & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e73c97ae824bba63, a0.this$, a1.this$)) {}

    File::File(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

    jboolean File::canExecute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canExecute_eee3de00fe971136]);
    }

    jboolean File::canRead() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_eee3de00fe971136]);
    }

    jboolean File::canWrite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canWrite_eee3de00fe971136]);
    }

    jint File::compareTo(const File & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_509e55f0f3677b3c], a0.this$);
    }

    jboolean File::createNewFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_createNewFile_eee3de00fe971136]);
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_ccff254288fbd3e6], a0.this$, a1.this$));
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const File & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_d0bb7da1c2d05a8c], a0.this$, a1.this$, a2.this$));
    }

    jboolean File::delete$() const
    {
      return env->callBooleanMethod(this$, mids$[mid_delete_eee3de00fe971136]);
    }

    void File::deleteOnExit() const
    {
      env->callVoidMethod(this$, mids$[mid_deleteOnExit_ff7cb6c242604316]);
    }

    jboolean File::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jboolean File::exists() const
    {
      return env->callBooleanMethod(this$, mids$[mid_exists_eee3de00fe971136]);
    }

    File File::getAbsoluteFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getAbsoluteFile_2f333c06ff3067c5]));
    }

    ::java::lang::String File::getAbsolutePath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAbsolutePath_d2c8eb4129821f0e]));
    }

    File File::getCanonicalFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getCanonicalFile_2f333c06ff3067c5]));
    }

    ::java::lang::String File::getCanonicalPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalPath_d2c8eb4129821f0e]));
    }

    jlong File::getFreeSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getFreeSpace_42c72b98e3c2e08a]);
    }

    ::java::lang::String File::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    ::java::lang::String File::getParent() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParent_d2c8eb4129821f0e]));
    }

    File File::getParentFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getParentFile_2f333c06ff3067c5]));
    }

    ::java::lang::String File::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_d2c8eb4129821f0e]));
    }

    jlong File::getTotalSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getTotalSpace_42c72b98e3c2e08a]);
    }

    jlong File::getUsableSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getUsableSpace_42c72b98e3c2e08a]);
    }

    jint File::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean File::isAbsolute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAbsolute_eee3de00fe971136]);
    }

    jboolean File::isDirectory() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDirectory_eee3de00fe971136]);
    }

    jboolean File::isFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFile_eee3de00fe971136]);
    }

    jboolean File::isHidden() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isHidden_eee3de00fe971136]);
    }

    jlong File::lastModified() const
    {
      return env->callLongMethod(this$, mids$[mid_lastModified_42c72b98e3c2e08a]);
    }

    jlong File::length() const
    {
      return env->callLongMethod(this$, mids$[mid_length_42c72b98e3c2e08a]);
    }

    JArray< ::java::lang::String > File::list() const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_f81c0644d57ae495]));
    }

    JArray< ::java::lang::String > File::list(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_97e4a3e135e76d9d], a0.this$));
    }

    JArray< File > File::listFiles() const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_69aca932c4172962]));
    }

    JArray< File > File::listFiles(const ::java::io::FileFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_1f4b11a0bd14c57b], a0.this$));
    }

    JArray< File > File::listFiles(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_9aeda5cf12f37a87], a0.this$));
    }

    JArray< File > File::listRoots()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< File >(env->callStaticObjectMethod(cls, mids$[mid_listRoots_69aca932c4172962]));
    }

    jboolean File::mkdir() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdir_eee3de00fe971136]);
    }

    jboolean File::mkdirs() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdirs_eee3de00fe971136]);
    }

    jboolean File::renameTo(const File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_renameTo_f268557c9bda463f], a0.this$);
    }

    jboolean File::setExecutable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_80aaf3d99b4df682], a0);
    }

    jboolean File::setExecutable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_d30e0f24f88aecc2], a0, a1);
    }

    jboolean File::setLastModified(jlong a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setLastModified_31359cc4f01092c4], a0);
    }

    jboolean File::setReadOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadOnly_eee3de00fe971136]);
    }

    jboolean File::setReadable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_80aaf3d99b4df682], a0);
    }

    jboolean File::setReadable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_d30e0f24f88aecc2], a0, a1);
    }

    jboolean File::setWritable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_80aaf3d99b4df682], a0);
    }

    jboolean File::setWritable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_d30e0f24f88aecc2], a0, a1);
    }

    ::java::lang::String File::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::net::URL File::toURL() const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_toURL_a4c2066e9b85f63c]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg);
    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds);
    static PyObject *t_File_canExecute(t_File *self);
    static PyObject *t_File_canRead(t_File *self);
    static PyObject *t_File_canWrite(t_File *self);
    static PyObject *t_File_compareTo(t_File *self, PyObject *arg);
    static PyObject *t_File_createNewFile(t_File *self);
    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args);
    static PyObject *t_File_delete(t_File *self);
    static PyObject *t_File_deleteOnExit(t_File *self);
    static PyObject *t_File_equals(t_File *self, PyObject *args);
    static PyObject *t_File_exists(t_File *self);
    static PyObject *t_File_getAbsoluteFile(t_File *self);
    static PyObject *t_File_getAbsolutePath(t_File *self);
    static PyObject *t_File_getCanonicalFile(t_File *self);
    static PyObject *t_File_getCanonicalPath(t_File *self);
    static PyObject *t_File_getFreeSpace(t_File *self);
    static PyObject *t_File_getName(t_File *self);
    static PyObject *t_File_getParent(t_File *self);
    static PyObject *t_File_getParentFile(t_File *self);
    static PyObject *t_File_getPath(t_File *self);
    static PyObject *t_File_getTotalSpace(t_File *self);
    static PyObject *t_File_getUsableSpace(t_File *self);
    static PyObject *t_File_hashCode(t_File *self, PyObject *args);
    static PyObject *t_File_isAbsolute(t_File *self);
    static PyObject *t_File_isDirectory(t_File *self);
    static PyObject *t_File_isFile(t_File *self);
    static PyObject *t_File_isHidden(t_File *self);
    static PyObject *t_File_lastModified(t_File *self);
    static PyObject *t_File_length(t_File *self);
    static PyObject *t_File_list(t_File *self, PyObject *args);
    static PyObject *t_File_listFiles(t_File *self, PyObject *args);
    static PyObject *t_File_listRoots(PyTypeObject *type);
    static PyObject *t_File_mkdir(t_File *self);
    static PyObject *t_File_mkdirs(t_File *self);
    static PyObject *t_File_renameTo(t_File *self, PyObject *arg);
    static PyObject *t_File_setExecutable(t_File *self, PyObject *args);
    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg);
    static PyObject *t_File_setReadOnly(t_File *self);
    static PyObject *t_File_setReadable(t_File *self, PyObject *args);
    static PyObject *t_File_setWritable(t_File *self, PyObject *args);
    static PyObject *t_File_toString(t_File *self, PyObject *args);
    static PyObject *t_File_toURL(t_File *self);
    static PyObject *t_File_get__absolute(t_File *self, void *data);
    static PyObject *t_File_get__absoluteFile(t_File *self, void *data);
    static PyObject *t_File_get__absolutePath(t_File *self, void *data);
    static PyObject *t_File_get__canonicalFile(t_File *self, void *data);
    static PyObject *t_File_get__canonicalPath(t_File *self, void *data);
    static PyObject *t_File_get__directory(t_File *self, void *data);
    static int t_File_set__executable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__file(t_File *self, void *data);
    static PyObject *t_File_get__freeSpace(t_File *self, void *data);
    static PyObject *t_File_get__hidden(t_File *self, void *data);
    static PyObject *t_File_get__name(t_File *self, void *data);
    static PyObject *t_File_get__parent(t_File *self, void *data);
    static PyObject *t_File_get__parentFile(t_File *self, void *data);
    static PyObject *t_File_get__path(t_File *self, void *data);
    static int t_File_set__readable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__totalSpace(t_File *self, void *data);
    static PyObject *t_File_get__usableSpace(t_File *self, void *data);
    static int t_File_set__writable(t_File *self, PyObject *arg, void *data);
    static PyGetSetDef t_File__fields_[] = {
      DECLARE_GET_FIELD(t_File, absolute),
      DECLARE_GET_FIELD(t_File, absoluteFile),
      DECLARE_GET_FIELD(t_File, absolutePath),
      DECLARE_GET_FIELD(t_File, canonicalFile),
      DECLARE_GET_FIELD(t_File, canonicalPath),
      DECLARE_GET_FIELD(t_File, directory),
      DECLARE_SET_FIELD(t_File, executable),
      DECLARE_GET_FIELD(t_File, file),
      DECLARE_GET_FIELD(t_File, freeSpace),
      DECLARE_GET_FIELD(t_File, hidden),
      DECLARE_GET_FIELD(t_File, name),
      DECLARE_GET_FIELD(t_File, parent),
      DECLARE_GET_FIELD(t_File, parentFile),
      DECLARE_GET_FIELD(t_File, path),
      DECLARE_SET_FIELD(t_File, readable),
      DECLARE_GET_FIELD(t_File, totalSpace),
      DECLARE_GET_FIELD(t_File, usableSpace),
      DECLARE_SET_FIELD(t_File, writable),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_File__methods_[] = {
      DECLARE_METHOD(t_File, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, canExecute, METH_NOARGS),
      DECLARE_METHOD(t_File, canRead, METH_NOARGS),
      DECLARE_METHOD(t_File, canWrite, METH_NOARGS),
      DECLARE_METHOD(t_File, compareTo, METH_O),
      DECLARE_METHOD(t_File, createNewFile, METH_NOARGS),
      DECLARE_METHOD(t_File, createTempFile, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_File, delete, METH_NOARGS),
      DECLARE_METHOD(t_File, deleteOnExit, METH_NOARGS),
      DECLARE_METHOD(t_File, equals, METH_VARARGS),
      DECLARE_METHOD(t_File, exists, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsoluteFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsolutePath, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getFreeSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getName, METH_NOARGS),
      DECLARE_METHOD(t_File, getParent, METH_NOARGS),
      DECLARE_METHOD(t_File, getParentFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getTotalSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getUsableSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_File, isAbsolute, METH_NOARGS),
      DECLARE_METHOD(t_File, isDirectory, METH_NOARGS),
      DECLARE_METHOD(t_File, isFile, METH_NOARGS),
      DECLARE_METHOD(t_File, isHidden, METH_NOARGS),
      DECLARE_METHOD(t_File, lastModified, METH_NOARGS),
      DECLARE_METHOD(t_File, length, METH_NOARGS),
      DECLARE_METHOD(t_File, list, METH_VARARGS),
      DECLARE_METHOD(t_File, listFiles, METH_VARARGS),
      DECLARE_METHOD(t_File, listRoots, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_File, mkdir, METH_NOARGS),
      DECLARE_METHOD(t_File, mkdirs, METH_NOARGS),
      DECLARE_METHOD(t_File, renameTo, METH_O),
      DECLARE_METHOD(t_File, setExecutable, METH_VARARGS),
      DECLARE_METHOD(t_File, setLastModified, METH_O),
      DECLARE_METHOD(t_File, setReadOnly, METH_NOARGS),
      DECLARE_METHOD(t_File, setReadable, METH_VARARGS),
      DECLARE_METHOD(t_File, setWritable, METH_VARARGS),
      DECLARE_METHOD(t_File, toString, METH_VARARGS),
      DECLARE_METHOD(t_File, toURL, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(File)[] = {
      { Py_tp_methods, t_File__methods_ },
      { Py_tp_init, (void *) t_File_init_ },
      { Py_tp_getset, t_File__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(File)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(File, t_File, File);

    void t_File::install(PyObject *module)
    {
      installType(&PY_TYPE(File), &PY_TYPE_DEF(File), module, "File", 0);
    }

    void t_File::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "class_", make_descriptor(File::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "wrapfn_", make_descriptor(t_File::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "boxfn_", make_descriptor(boxObject));
      env->getClass(File::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparator", make_descriptor(j2p(*File::pathSeparator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparatorChar", make_descriptor(File::pathSeparatorChar));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separator", make_descriptor(j2p(*File::separator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separatorChar", make_descriptor(File::separatorChar));
    }

    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, File::initializeClass, 1)))
        return NULL;
      return t_File::wrap_Object(File(((t_File *) arg)->object.this$));
    }
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, File::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = File(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ks", File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
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

    static PyObject *t_File_canExecute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canExecute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canRead(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canRead());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canWrite(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canWrite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_compareTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_File_createNewFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.createNewFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1));
            return t_File::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File a2((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ssk", File::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1, a2));
            return t_File::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "createTempFile", args);
      return NULL;
    }

    static PyObject *t_File_delete(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.delete$());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_deleteOnExit(t_File *self)
    {
      OBJ_CALL(self->object.deleteOnExit());
      Py_RETURN_NONE;
    }

    static PyObject *t_File_equals(t_File *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_File_exists(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.exists());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_getAbsoluteFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsoluteFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getAbsolutePath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsolutePath());
      return j2p(result);
    }

    static PyObject *t_File_getCanonicalFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getCanonicalPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalPath());
      return j2p(result);
    }

    static PyObject *t_File_getFreeSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getName(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_File_getParent(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getParent());
      return j2p(result);
    }

    static PyObject *t_File_getParentFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getParentFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_File_getTotalSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getUsableSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_hashCode(t_File *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_File_isAbsolute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAbsolute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isDirectory(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDirectory());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isHidden(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isHidden());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_lastModified(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.lastModified());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_length(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_list(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.list());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.list(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_File_listFiles(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< File > result((jobject) NULL);
          OBJ_CALL(result = self->object.listFiles());
          return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
        }
        break;
       case 1:
        {
          ::java::io::FileFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listFiles", args);
      return NULL;
    }

    static PyObject *t_File_listRoots(PyTypeObject *type)
    {
      JArray< File > result((jobject) NULL);
      OBJ_CALL(result = ::java::io::File::listRoots());
      return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
    }

    static PyObject *t_File_mkdir(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdir());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_mkdirs(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdirs());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_renameTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.renameTo(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "renameTo", arg);
      return NULL;
    }

    static PyObject *t_File_setExecutable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setExecutable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setExecutable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setExecutable", args);
      return NULL;
    }

    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg)
    {
      jlong a0;
      jboolean result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.setLastModified(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setLastModified", arg);
      return NULL;
    }

    static PyObject *t_File_setReadOnly(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.setReadOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_setReadable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setReadable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setReadable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setReadable", args);
      return NULL;
    }

    static PyObject *t_File_setWritable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setWritable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setWritable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setWritable", args);
      return NULL;
    }

    static PyObject *t_File_toString(t_File *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_File_toURL(t_File *self)
    {
      ::java::net::URL result((jobject) NULL);
      OBJ_CALL(result = self->object.toURL());
      return ::java::net::t_URL::wrap_Object(result);
    }

    static PyObject *t_File_get__absolute(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAbsolute());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__absoluteFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsoluteFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__absolutePath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsolutePath());
      return j2p(value);
    }

    static PyObject *t_File_get__canonicalFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__canonicalPath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalPath());
      return j2p(value);
    }

    static PyObject *t_File_get__directory(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDirectory());
      Py_RETURN_BOOL(value);
    }

    static int t_File_set__executable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setExecutable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "executable", arg);
      return -1;
    }

    static PyObject *t_File_get__file(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFile());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__freeSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__hidden(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isHidden());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__name(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_File_get__parent(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getParent());
      return j2p(value);
    }

    static PyObject *t_File_get__parentFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getParentFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__path(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static int t_File_set__readable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setReadable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "readable", arg);
      return -1;
    }

    static PyObject *t_File_get__totalSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__usableSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static int t_File_set__writable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setWritable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "writable", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *MultivariateJacobianFunction::class$ = NULL;
            jmethodID *MultivariateJacobianFunction::mids$ = NULL;
            bool MultivariateJacobianFunction::live$ = false;

            jclass MultivariateJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_value_f5f9cd0684e2ab5e] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::util::Pair MultivariateJacobianFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_f5f9cd0684e2ab5e], a0.this$));
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
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_MultivariateJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_MultivariateJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultivariateJacobianFunction)[] = {
              { Py_tp_methods, t_MultivariateJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultivariateJacobianFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MultivariateJacobianFunction, t_MultivariateJacobianFunction, MultivariateJacobianFunction);

            void t_MultivariateJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(MultivariateJacobianFunction), &PY_TYPE_DEF(MultivariateJacobianFunction), module, "MultivariateJacobianFunction", 0);
            }

            void t_MultivariateJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "class_", make_descriptor(MultivariateJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "wrapfn_", make_descriptor(t_MultivariateJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultivariateJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_MultivariateJacobianFunction::wrap_Object(MultivariateJacobianFunction(((t_MultivariateJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultivariateJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::util::Pair result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
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
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary::class$ = NULL;
      jmethodID *FieldArrayDictionary::mids$ = NULL;
      bool FieldArrayDictionary::live$ = false;

      jclass FieldArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_399daf55ca8a95b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_789e28cd06c0e3e5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Map;)V");
          mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_9b6ce7af1b312c95] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getData_d751c1a57012b438] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_204a53300bf7e86c] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/FieldArrayDictionary$Entry;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_put_550be97e760e0f22] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_put_2085d8b9a703b33f] = env->getMethodID(cls, "put", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_putAll_fa6f40880035e99f] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_putAll_df2bb61624910c2a] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_df4c65b2aede5c41] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_dbcb8bbac6b35e0d] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_110e6e63d71fe768] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/FieldArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_399daf55ca8a95b8, a0.this$, a1)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_789e28cd06c0e3e5, a0.this$, a1.this$)) {}

      void FieldArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_get_9b6ce7af1b312c95], a0.this$));
      }

      ::java::util::List FieldArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_d751c1a57012b438]));
      }

      ::org::orekit::utils::FieldArrayDictionary$Entry FieldArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::FieldArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_204a53300bf7e86c], a0.this$));
      }

      ::org::hipparchus::Field FieldArrayDictionary::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_550be97e760e0f22], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_2085d8b9a703b33f], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::putAll(const FieldArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_fa6f40880035e99f], a0.this$);
      }

      void FieldArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_df2bb61624910c2a], a0.this$);
      }

      jboolean FieldArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_df4c65b2aede5c41], a0.this$);
      }

      jint FieldArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
      }

      ::java::util::Map FieldArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_dbcb8bbac6b35e0d]));
      }

      ::java::lang::String FieldArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      FieldArrayDictionary FieldArrayDictionary::unmodifiableView() const
      {
        return FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_110e6e63d71fe768]));
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
      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args);
      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary, data),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, field),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary)[] = {
        { Py_tp_methods, t_FieldArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_FieldArrayDictionary_init_ },
        { Py_tp_getset, t_FieldArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary, t_FieldArrayDictionary, FieldArrayDictionary);
      PyObject *t_FieldArrayDictionary::wrap_Object(const FieldArrayDictionary& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary), &PY_TYPE_DEF(FieldArrayDictionary), module, "FieldArrayDictionary", 0);
      }

      void t_FieldArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "class_", make_descriptor(FieldArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "wrapfn_", make_descriptor(t_FieldArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary::wrap_Object(FieldArrayDictionary(((t_FieldArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
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

      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::FieldArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_FieldArrayDictionary$Entry::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "s[D", &a0, &a1))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldArrayDictionary a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", FieldArrayDictionary::initializeClass, &a0, &p0, t_FieldArrayDictionary::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "putAll", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self)
      {
        FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixDecomposer::class$ = NULL;
      jmethodID *MatrixDecomposer::mids$ = NULL;
      bool MatrixDecomposer::live$ = false;

      jclass MatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_b099faee6eb73725] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::DecompositionSolver MatrixDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b099faee6eb73725], a0.this$));
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
      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg);

      static PyMethodDef t_MatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_MatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixDecomposer)[] = {
        { Py_tp_methods, t_MatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixDecomposer, t_MatrixDecomposer, MatrixDecomposer);

      void t_MatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixDecomposer), &PY_TYPE_DEF(MatrixDecomposer), module, "MatrixDecomposer", 0);
      }

      void t_MatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "class_", make_descriptor(MatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "wrapfn_", make_descriptor(t_MatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_MatrixDecomposer::wrap_Object(MatrixDecomposer(((t_MatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
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
                mids$[mid_init$_a09db44936fc4668] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;[DD[DDDIDDDDD)V");
                mids$[mid_compareTo_8b843ae7da66c9f6] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getApAvg_9981f74b2d109da6] = env->getMethodID(cls, "getApAvg", "()D");
                mids$[mid_getCtr81Adj_9981f74b2d109da6] = env->getMethodID(cls, "getCtr81Adj", "()D");
                mids$[mid_getCtr81Obs_9981f74b2d109da6] = env->getMethodID(cls, "getCtr81Obs", "()D");
                mids$[mid_getF107Adj_9981f74b2d109da6] = env->getMethodID(cls, "getF107Adj", "()D");
                mids$[mid_getF107Obs_9981f74b2d109da6] = env->getMethodID(cls, "getF107Obs", "()D");
                mids$[mid_getFluxQualifier_d6ab429752e7c267] = env->getMethodID(cls, "getFluxQualifier", "()I");
                mids$[mid_getKpSum_9981f74b2d109da6] = env->getMethodID(cls, "getKpSum", "()D");
                mids$[mid_getLst81Adj_9981f74b2d109da6] = env->getMethodID(cls, "getLst81Adj", "()D");
                mids$[mid_getLst81Obs_9981f74b2d109da6] = env->getMethodID(cls, "getLst81Obs", "()D");
                mids$[mid_getThreeHourlyAp_be783177b060994b] = env->getMethodID(cls, "getThreeHourlyAp", "()[D");
                mids$[mid_getThreeHourlyAp_ce4c02d583456bc9] = env->getMethodID(cls, "getThreeHourlyAp", "(I)D");
                mids$[mid_getThreeHourlyKp_be783177b060994b] = env->getMethodID(cls, "getThreeHourlyKp", "()[D");
                mids$[mid_getThreeHourlyKp_ce4c02d583456bc9] = env->getMethodID(cls, "getThreeHourlyKp", "(I)D");
                mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader$LineParameters::CssiSpaceWeatherDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, jdouble a2, const JArray< jdouble > & a3, jdouble a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(env->newObject(initializeClass, &mids$, mid_init$_a09db44936fc4668, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            jint CssiSpaceWeatherDataLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_8b843ae7da66c9f6], a0.this$);
            }

            jboolean CssiSpaceWeatherDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getApAvg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApAvg_9981f74b2d109da6]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Adj_9981f74b2d109da6]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Obs_9981f74b2d109da6]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Adj_9981f74b2d109da6]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Obs_9981f74b2d109da6]);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::getFluxQualifier() const
            {
              return env->callIntMethod(this$, mids$[mid_getFluxQualifier_d6ab429752e7c267]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getKpSum() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKpSum_9981f74b2d109da6]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Adj_9981f74b2d109da6]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Obs_9981f74b2d109da6]);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyAp_be783177b060994b]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyAp_ce4c02d583456bc9], a0);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyKp_be783177b060994b]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKp_ce4c02d583456bc9], a0);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *FieldMatrixPreservingVisitor::mids$ = NULL;
      bool FieldMatrixPreservingVisitor::live$ = false;

      jclass FieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_f6328613456309a1] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_ee5da648d666a7a9] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_8de38856a6ebea36] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_f6328613456309a1]));
      }

      void FieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ee5da648d666a7a9], a0, a1, a2, a3, a4, a5);
      }

      void FieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_8de38856a6ebea36], a0, a1, a2.this$);
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
      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self);
      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixPreservingVisitor, t_FieldMatrixPreservingVisitor, FieldMatrixPreservingVisitor);
      PyObject *t_FieldMatrixPreservingVisitor::wrap_Object(const FieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixPreservingVisitor), &PY_TYPE_DEF(FieldMatrixPreservingVisitor), module, "FieldMatrixPreservingVisitor", 0);
      }

      void t_FieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "class_", make_descriptor(FieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixPreservingVisitor::wrap_Object(FieldMatrixPreservingVisitor(((t_FieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedException::class$ = NULL;
        jmethodID *RuggedException::mids$ = NULL;
        bool RuggedException::live$ = false;

        jclass RuggedException::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedException");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_init$_db158649d786c484] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedException::RuggedException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

        RuggedException::RuggedException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_db158649d786c484, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String RuggedException::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
        }

        ::java::lang::String RuggedException::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
        }

        ::java::lang::String RuggedException::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedException::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
        }

        ::org::hipparchus::exception::Localizable RuggedException::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
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
      namespace errors {
        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getParts(t_RuggedException *self);
        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self);
        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data);
        static PyGetSetDef t_RuggedException__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedException, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedException, message),
          DECLARE_GET_FIELD(t_RuggedException, parts),
          DECLARE_GET_FIELD(t_RuggedException, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedException__methods_[] = {
          DECLARE_METHOD(t_RuggedException, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedException, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedException)[] = {
          { Py_tp_methods, t_RuggedException__methods_ },
          { Py_tp_init, (void *) t_RuggedException_init_ },
          { Py_tp_getset, t_RuggedException__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedException)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedException, t_RuggedException, RuggedException);

        void t_RuggedException::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedException), &PY_TYPE_DEF(RuggedException), module, "RuggedException", 0);
        }

        void t_RuggedException::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "class_", make_descriptor(RuggedException::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "wrapfn_", make_descriptor(t_RuggedException::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedException::initializeClass, 1)))
            return NULL;
          return t_RuggedException::wrap_Object(RuggedException(((t_RuggedException *) arg)->object.this$));
        }
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedException::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::exception::Localizable a0((jobject) NULL);
              JArray< ::java::lang::Object > a1((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
              {
                INT_CALL(object = RuggedException(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::Throwable a0((jobject) NULL);
              ::org::hipparchus::exception::Localizable a1((jobject) NULL);
              JArray< ::java::lang::Object > a2((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = RuggedException(a0, a1, a2));
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

        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args)
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

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedException_getParts(t_RuggedException *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaOneModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaOneModel::class$ = NULL;
          jmethodID *ViennaOneModel::mids$ = NULL;
          bool ViennaOneModel::live$ = false;

          jclass ViennaOneModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaOneModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_24ca2746f3be6434] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_cf38abfd6de73cb1] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_2a8a1978d107f938] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_7d2717f150c68a9f] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_090b631fda469acd] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_24ca2746f3be6434, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_cf38abfd6de73cb1], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_2a8a1978d107f938], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaOneModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          JArray< jdouble > ViennaOneModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7d2717f150c68a9f], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_090b631fda469acd], a0.this$, a1.this$, a2.this$));
          }

          jdouble ViennaOneModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_a07808bbc1ebff8d], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement ViennaOneModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self);
          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data);
          static PyGetSetDef t_ViennaOneModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaOneModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaOneModel__methods_[] = {
            DECLARE_METHOD(t_ViennaOneModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaOneModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaOneModel)[] = {
            { Py_tp_methods, t_ViennaOneModel__methods_ },
            { Py_tp_init, (void *) t_ViennaOneModel_init_ },
            { Py_tp_getset, t_ViennaOneModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaOneModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaOneModel, t_ViennaOneModel, ViennaOneModel);

          void t_ViennaOneModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaOneModel), &PY_TYPE_DEF(ViennaOneModel), module, "ViennaOneModel", 0);
          }

          void t_ViennaOneModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "class_", make_descriptor(ViennaOneModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "wrapfn_", make_descriptor(t_ViennaOneModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaOneModel::initializeClass, 1)))
              return NULL;
            return t_ViennaOneModel::wrap_Object(ViennaOneModel(((t_ViennaOneModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaOneModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1, a2));
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

          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args)
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

          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data)
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
#include "org/hipparchus/random/ISAACRandom.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ISAACRandom::class$ = NULL;
      jmethodID *ISAACRandom::mids$ = NULL;
      bool ISAACRandom::live$ = false;

      jclass ISAACRandom::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ISAACRandom");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_d43202153dd284f7] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ISAACRandom::ISAACRandom() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ISAACRandom::ISAACRandom(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      ISAACRandom::ISAACRandom(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jint ISAACRandom::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
      }

      void ISAACRandom::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d43202153dd284f7], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args);
      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args);
      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data);
      static PyGetSetDef t_ISAACRandom__fields_[] = {
        DECLARE_SET_FIELD(t_ISAACRandom, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ISAACRandom__methods_[] = {
        DECLARE_METHOD(t_ISAACRandom, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ISAACRandom, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ISAACRandom)[] = {
        { Py_tp_methods, t_ISAACRandom__methods_ },
        { Py_tp_init, (void *) t_ISAACRandom_init_ },
        { Py_tp_getset, t_ISAACRandom__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ISAACRandom)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(ISAACRandom, t_ISAACRandom, ISAACRandom);

      void t_ISAACRandom::install(PyObject *module)
      {
        installType(&PY_TYPE(ISAACRandom), &PY_TYPE_DEF(ISAACRandom), module, "ISAACRandom", 0);
      }

      void t_ISAACRandom::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "class_", make_descriptor(ISAACRandom::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "wrapfn_", make_descriptor(t_ISAACRandom::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ISAACRandom::initializeClass, 1)))
          return NULL;
        return t_ISAACRandom::wrap_Object(ISAACRandom(((t_ISAACRandom *) arg)->object.this$));
      }
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ISAACRandom::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ISAACRandom object((jobject) NULL);

            INT_CALL(object = ISAACRandom());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
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

      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonIntervalEventTrigger::class$ = NULL;
          jmethodID *PythonIntervalEventTrigger::mids$ = NULL;
          bool PythonIntervalEventTrigger::live$ = false;

          jclass PythonIntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a38fc05f525605c3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertIntervalDetector_2778b7032ad3e419] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntervalEventTrigger::PythonIntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_a38fc05f525605c3, a0.this$)) {}

          void PythonIntervalEventTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonIntervalEventTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonIntervalEventTrigger::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        namespace trigger {
          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args);
          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self);
          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data);
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data);
          static PyGetSetDef t_PythonIntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, self),
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonIntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntervalEventTrigger)[] = {
            { Py_tp_methods, t_PythonIntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonIntervalEventTrigger_init_ },
            { Py_tp_getset, t_PythonIntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(PythonIntervalEventTrigger, t_PythonIntervalEventTrigger, PythonIntervalEventTrigger);
          PyObject *t_PythonIntervalEventTrigger::wrap_Object(const PythonIntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonIntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonIntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntervalEventTrigger), &PY_TYPE_DEF(PythonIntervalEventTrigger), module, "PythonIntervalEventTrigger", 1);
          }

          void t_PythonIntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "class_", make_descriptor(PythonIntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "wrapfn_", make_descriptor(t_PythonIntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntervalEventTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonIntervalEventTrigger_convertIntervalDetector0 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIntervalEventTrigger_getParametersDrivers1 },
              { "pythonDecRef", "()V", (void *) t_PythonIntervalEventTrigger_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonIntervalEventTrigger::wrap_Object(PythonIntervalEventTrigger(((t_PythonIntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            PythonIntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonIntervalEventTrigger(a0));
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

          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertIntervalDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertIntervalDetector", result);
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

          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data)
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
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivative::class$ = NULL;
        jmethodID *FieldDerivative::mids$ = NULL;
        bool FieldDerivative::live$ = false;

        jclass FieldDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_15bad9d0870b63aa] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_08d37e3f77b7239d] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint FieldDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        jint FieldDerivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_15bad9d0870b63aa], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_08d37e3f77b7239d]));
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
        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args);
        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg);
        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data);
        static PyGetSetDef t_FieldDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivative, order),
          DECLARE_GET_FIELD(t_FieldDerivative, value),
          DECLARE_GET_FIELD(t_FieldDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivative)[] = {
          { Py_tp_methods, t_FieldDerivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(FieldDerivative, t_FieldDerivative, FieldDerivative);
        PyObject *t_FieldDerivative::wrap_Object(const FieldDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivative), &PY_TYPE_DEF(FieldDerivative), module, "FieldDerivative", 0);
        }

        void t_FieldDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "class_", make_descriptor(FieldDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "wrapfn_", make_descriptor(t_FieldDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldDerivative::wrap_Object(FieldDerivative(((t_FieldDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/IntConsumer.h"
#include "java/lang/Class.h"
#include "java/util/function/IntConsumer.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *IntConsumer::class$ = NULL;
      jmethodID *IntConsumer::mids$ = NULL;
      bool IntConsumer::live$ = false;

      jclass IntConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/IntConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_8fd427ab23829bf5] = env->getMethodID(cls, "accept", "(I)V");
          mids$[mid_andThen_9fd967b7c66352b9] = env->getMethodID(cls, "andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IntConsumer::accept(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_8fd427ab23829bf5], a0);
      }

      IntConsumer IntConsumer::andThen(const IntConsumer & a0) const
      {
        return IntConsumer(env->callObjectMethod(this$, mids$[mid_andThen_9fd967b7c66352b9], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg);
      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg);

      static PyMethodDef t_IntConsumer__methods_[] = {
        DECLARE_METHOD(t_IntConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, accept, METH_O),
        DECLARE_METHOD(t_IntConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntConsumer)[] = {
        { Py_tp_methods, t_IntConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntConsumer, t_IntConsumer, IntConsumer);

      void t_IntConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(IntConsumer), &PY_TYPE_DEF(IntConsumer), module, "IntConsumer", 0);
      }

      void t_IntConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "class_", make_descriptor(IntConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "wrapfn_", make_descriptor(t_IntConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntConsumer::initializeClass, 1)))
          return NULL;
        return t_IntConsumer::wrap_Object(IntConsumer(((t_IntConsumer *) arg)->object.this$));
      }
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg)
      {
        IntConsumer a0((jobject) NULL);
        IntConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", IntConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_IntConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/Galileo.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Galileo::class$ = NULL;
        jmethodID *Galileo::mids$ = NULL;
        bool Galileo::live$ = false;
        jdouble Galileo::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Galileo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Galileo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ced6c23b11632898] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Galileo::Galileo(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_ced6c23b11632898, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace attitude {
        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Galileo__methods_[] = {
          DECLARE_METHOD(t_Galileo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Galileo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Galileo)[] = {
          { Py_tp_methods, t_Galileo__methods_ },
          { Py_tp_init, (void *) t_Galileo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Galileo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Galileo, t_Galileo, Galileo);

        void t_Galileo::install(PyObject *module)
        {
          installType(&PY_TYPE(Galileo), &PY_TYPE_DEF(Galileo), module, "Galileo", 0);
        }

        void t_Galileo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "class_", make_descriptor(Galileo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "wrapfn_", make_descriptor(t_Galileo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "boxfn_", make_descriptor(boxObject));
          env->getClass(Galileo::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "DEFAULT_YAW_RATE", make_descriptor(Galileo::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Galileo::initializeClass, 1)))
            return NULL;
          return t_Galileo::wrap_Object(Galileo(((t_Galileo *) arg)->object.this$));
        }
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Galileo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Galileo object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Galileo(a0, a1, a2, a3, a4));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/BigReal.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigReal::class$ = NULL;
      jmethodID *BigReal::mids$ = NULL;
      bool BigReal::live$ = false;
      BigReal *BigReal::ONE = NULL;
      BigReal *BigReal::ZERO = NULL;

      jclass BigReal::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigReal");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e22e96b35f4145e4] = env->getMethodID(cls, "<init>", "([C)V");
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_6f10578448832e2a] = env->getMethodID(cls, "<init>", "([CII)V");
          mids$[mid_add_25c091a838b6e358] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_compareTo_9b4c95dcdac4646b] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/BigReal;)I");
          mids$[mid_divide_25c091a838b6e358] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getScale_d6ab429752e7c267] = env->getMethodID(cls, "getScale", "()I");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_multiply_25c091a838b6e358] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_multiply_d985cb5e0f4ba91f] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/BigReal;");
          mids$[mid_negate_387b4b2d211c6e82] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_reciprocal_387b4b2d211c6e82] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_setScale_8fd427ab23829bf5] = env->getMethodID(cls, "setScale", "(I)V");
          mids$[mid_subtract_25c091a838b6e358] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ONE = new BigReal(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/BigReal;"));
          ZERO = new BigReal(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/BigReal;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigReal::BigReal(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e22e96b35f4145e4, a0.this$)) {}

      BigReal::BigReal(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      BigReal::BigReal(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      BigReal::BigReal(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      BigReal::BigReal(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      BigReal::BigReal(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f10578448832e2a, a0.this$, a1, a2)) {}

      BigReal BigReal::add(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_add_25c091a838b6e358], a0.this$));
      }

      jint BigReal::compareTo(const BigReal & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_9b4c95dcdac4646b], a0.this$);
      }

      BigReal BigReal::divide(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_divide_25c091a838b6e358], a0.this$));
      }

      jdouble BigReal::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
      }

      jboolean BigReal::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      ::org::hipparchus::Field BigReal::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      jdouble BigReal::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      jint BigReal::getScale() const
      {
        return env->callIntMethod(this$, mids$[mid_getScale_d6ab429752e7c267]);
      }

      jint BigReal::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      BigReal BigReal::multiply(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_25c091a838b6e358], a0.this$));
      }

      BigReal BigReal::multiply(jint a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_d985cb5e0f4ba91f], a0));
      }

      BigReal BigReal::negate() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_negate_387b4b2d211c6e82]));
      }

      BigReal BigReal::reciprocal() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_reciprocal_387b4b2d211c6e82]));
      }

      void BigReal::setScale(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_8fd427ab23829bf5], a0);
      }

      BigReal BigReal::subtract(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_subtract_25c091a838b6e358], a0.this$));
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
      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_doubleValue(t_BigReal *self);
      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_getField(t_BigReal *self);
      static PyObject *t_BigReal_getReal(t_BigReal *self);
      static PyObject *t_BigReal_getScale(t_BigReal *self);
      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_negate(t_BigReal *self);
      static PyObject *t_BigReal_reciprocal(t_BigReal *self);
      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data);
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data);
      static PyGetSetDef t_BigReal__fields_[] = {
        DECLARE_GET_FIELD(t_BigReal, field),
        DECLARE_GET_FIELD(t_BigReal, real),
        DECLARE_GETSET_FIELD(t_BigReal, scale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigReal__methods_[] = {
        DECLARE_METHOD(t_BigReal, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, add, METH_O),
        DECLARE_METHOD(t_BigReal, compareTo, METH_O),
        DECLARE_METHOD(t_BigReal, divide, METH_O),
        DECLARE_METHOD(t_BigReal, doubleValue, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getScale, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, setScale, METH_O),
        DECLARE_METHOD(t_BigReal, subtract, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigReal)[] = {
        { Py_tp_methods, t_BigReal__methods_ },
        { Py_tp_init, (void *) t_BigReal_init_ },
        { Py_tp_getset, t_BigReal__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigReal)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigReal, t_BigReal, BigReal);

      void t_BigReal::install(PyObject *module)
      {
        installType(&PY_TYPE(BigReal), &PY_TYPE_DEF(BigReal), module, "BigReal", 0);
      }

      void t_BigReal::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "class_", make_descriptor(BigReal::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "wrapfn_", make_descriptor(t_BigReal::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigReal::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ONE", make_descriptor(t_BigReal::wrap_Object(*BigReal::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ZERO", make_descriptor(t_BigReal::wrap_Object(*BigReal::ZERO)));
      }

      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigReal::initializeClass, 1)))
          return NULL;
        return t_BigReal::wrap_Object(BigReal(((t_BigReal *) arg)->object.this$));
      }
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigReal::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jchar > a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[C", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jchar > a0((jobject) NULL);
            jint a1;
            jint a2;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[CII", &a0, &a1, &a2))
            {
              INT_CALL(object = BigReal(a0, a1, a2));
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

      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.divide(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "divide", arg);
        return NULL;
      }

      static PyObject *t_BigReal_doubleValue(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigReal_getField(t_BigReal *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigReal_getReal(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_getScale(t_BigReal *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getScale());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigReal a0((jobject) NULL);
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "k", BigReal::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigReal_negate(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_reciprocal(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getScale());
        return PyLong_FromLong((long) value);
      }
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeInterpolator::class$ = NULL;
      jmethodID *AttitudeInterpolator::mids$ = NULL;
      bool AttitudeInterpolator::live$ = false;

      jclass AttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6bbd4b154f8f26a3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_73c4976bc58cb3ff] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_0088ae02c5fd6196] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudeInterpolator::AttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_6bbd4b154f8f26a3, a0.this$, a1.this$)) {}

      ::org::orekit::time::TimeInterpolator AttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_73c4976bc58cb3ff]));
      }

      ::org::orekit::frames::Frame AttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
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
      static PyObject *t_AttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeInterpolator_of_(t_AttitudeInterpolator *self, PyObject *args);
      static int t_AttitudeInterpolator_init_(t_AttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudeInterpolator_getAngularInterpolator(t_AttitudeInterpolator *self);
      static PyObject *t_AttitudeInterpolator_getReferenceFrame(t_AttitudeInterpolator *self);
      static PyObject *t_AttitudeInterpolator_get__angularInterpolator(t_AttitudeInterpolator *self, void *data);
      static PyObject *t_AttitudeInterpolator_get__referenceFrame(t_AttitudeInterpolator *self, void *data);
      static PyObject *t_AttitudeInterpolator_get__parameters_(t_AttitudeInterpolator *self, void *data);
      static PyGetSetDef t_AttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_AttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_AttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeInterpolator)[] = {
        { Py_tp_methods, t_AttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AttitudeInterpolator_init_ },
        { Py_tp_getset, t_AttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AttitudeInterpolator, t_AttitudeInterpolator, AttitudeInterpolator);
      PyObject *t_AttitudeInterpolator::wrap_Object(const AttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AttitudeInterpolator *self = (t_AttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AttitudeInterpolator *self = (t_AttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeInterpolator), &PY_TYPE_DEF(AttitudeInterpolator), module, "AttitudeInterpolator", 0);
      }

      void t_AttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "class_", make_descriptor(AttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "wrapfn_", make_descriptor(t_AttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AttitudeInterpolator::wrap_Object(AttitudeInterpolator(((t_AttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeInterpolator_of_(t_AttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AttitudeInterpolator_init_(t_AttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        AttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
        {
          INT_CALL(object = AttitudeInterpolator(a0, a1));
          self->object = object;
          self->parameters[0] = ::org::orekit::attitudes::PY_TYPE(Attitude);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AttitudeInterpolator_getAngularInterpolator(t_AttitudeInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
      }

      static PyObject *t_AttitudeInterpolator_getReferenceFrame(t_AttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AttitudeInterpolator_get__parameters_(t_AttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AttitudeInterpolator_get__angularInterpolator(t_AttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AttitudeInterpolator_get__referenceFrame(t_AttitudeInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *BasicConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *BasicConstantThrustPropulsionModel::mids$ = NULL;
          bool BasicConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *BasicConstantThrustPropulsionModel::FLOW_RATE = NULL;
          jdouble BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE = (jdouble) 0;
          ::java::lang::String *BasicConstantThrustPropulsionModel::THRUST = NULL;
          jdouble BasicConstantThrustPropulsionModel::THRUST_SCALE = (jdouble) 0;

          jclass BasicConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ddbb1762bed80b38] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_33b1676e2cf06e6c] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_9981f74b2d109da6] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_a40ce4fdf6559ac0] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_c04968ee695d037c] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_209f08246d708042] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_032312bdeb3f2f93] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_44a47ea31a9889e8] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5e5894038af17774] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_8b37cafaaf55a3a5] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FLOW_RATE = new ::java::lang::String(env->getStaticObjectField(cls, "FLOW_RATE", "Ljava/lang/String;"));
              FLOW_RATE_SCALE = env->getStaticDoubleField(cls, "FLOW_RATE_SCALE");
              THRUST = new ::java::lang::String(env->getStaticObjectField(cls, "THRUST", "Ljava/lang/String;"));
              THRUST_SCALE = env->getStaticDoubleField(cls, "THRUST_SCALE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_ddbb1762bed80b38, a0, a1, a2.this$, a3.this$)) {}

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_33b1676e2cf06e6c, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          jdouble BasicConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_9981f74b2d109da6]);
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_a40ce4fdf6559ac0], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement BasicConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_c04968ee695d037c], a0.this$));
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_209f08246d708042], a0.this$);
          }

          ::java::util::List BasicConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_44a47ea31a9889e8], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_5e5894038af17774], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b37cafaaf55a3a5], a0.this$));
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
          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_BasicConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BasicConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BasicConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_BasicConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_BasicConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_BasicConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BasicConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(BasicConstantThrustPropulsionModel, t_BasicConstantThrustPropulsionModel, BasicConstantThrustPropulsionModel);

          void t_BasicConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(BasicConstantThrustPropulsionModel), &PY_TYPE_DEF(BasicConstantThrustPropulsionModel), module, "BasicConstantThrustPropulsionModel", 0);
          }

          void t_BasicConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "class_", make_descriptor(BasicConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_BasicConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(BasicConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::FLOW_RATE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::THRUST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::THRUST_SCALE));
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_BasicConstantThrustPropulsionModel::wrap_Object(BasicConstantThrustPropulsionModel(((t_BasicConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/ElevationFilter.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ElevationFilter::class$ = NULL;
          jmethodID *ElevationFilter::mids$ = NULL;
          bool ElevationFilter::live$ = false;

          jclass ElevationFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ElevationFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_04dd8bdfee16a269] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;D)V");
              mids$[mid_filter_2b2e233a7bb98272] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ElevationFilter::ElevationFilter(const ::org::orekit::estimation::measurements::GroundStation & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_04dd8bdfee16a269, a0.this$, a1)) {}

          void ElevationFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_2b2e233a7bb98272], a0.this$, a1.this$);
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
        namespace filtering {
          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args);
          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args);
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data);
          static PyGetSetDef t_ElevationFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ElevationFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ElevationFilter__methods_[] = {
            DECLARE_METHOD(t_ElevationFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ElevationFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ElevationFilter)[] = {
            { Py_tp_methods, t_ElevationFilter__methods_ },
            { Py_tp_init, (void *) t_ElevationFilter_init_ },
            { Py_tp_getset, t_ElevationFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ElevationFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ElevationFilter, t_ElevationFilter, ElevationFilter);
          PyObject *t_ElevationFilter::wrap_Object(const ElevationFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ElevationFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ElevationFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ElevationFilter), &PY_TYPE_DEF(ElevationFilter), module, "ElevationFilter", 0);
          }

          void t_ElevationFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "class_", make_descriptor(ElevationFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "wrapfn_", make_descriptor(t_ElevationFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ElevationFilter::initializeClass, 1)))
              return NULL;
            return t_ElevationFilter::wrap_Object(ElevationFilter(((t_ElevationFilter *) arg)->object.this$));
          }
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ElevationFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            jdouble a1;
            ElevationFilter object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::estimation::measurements::GroundStation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ElevationFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data)
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
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedDCBS::class$ = NULL;
        jmethodID *AppliedDCBS::mids$ = NULL;
        bool AppliedDCBS::live$ = false;

        jclass AppliedDCBS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedDCBS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fa93d9a85da578d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgDCBS_d2c8eb4129821f0e] = env->getMethodID(cls, "getProgDCBS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourceDCBS_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceDCBS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedDCBS::AppliedDCBS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa93d9a85da578d5, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedDCBS::getProgDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgDCBS_d2c8eb4129821f0e]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedDCBS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
        }

        ::java::lang::String AppliedDCBS::getSourceDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceDCBS_d2c8eb4129821f0e]));
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
        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data);
        static PyGetSetDef t_AppliedDCBS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedDCBS, progDCBS),
          DECLARE_GET_FIELD(t_AppliedDCBS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedDCBS, sourceDCBS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedDCBS__methods_[] = {
          DECLARE_METHOD(t_AppliedDCBS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, getProgDCBS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSourceDCBS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedDCBS)[] = {
          { Py_tp_methods, t_AppliedDCBS__methods_ },
          { Py_tp_init, (void *) t_AppliedDCBS_init_ },
          { Py_tp_getset, t_AppliedDCBS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedDCBS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedDCBS, t_AppliedDCBS, AppliedDCBS);

        void t_AppliedDCBS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedDCBS), &PY_TYPE_DEF(AppliedDCBS), module, "AppliedDCBS", 0);
        }

        void t_AppliedDCBS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "class_", make_descriptor(AppliedDCBS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "wrapfn_", make_descriptor(t_AppliedDCBS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedDCBS::initializeClass, 1)))
            return NULL;
          return t_AppliedDCBS::wrap_Object(AppliedDCBS(((t_AppliedDCBS *) arg)->object.this$));
        }
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedDCBS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedDCBS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedDCBS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgDCBS());
          return j2p(value);
        }

        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceDCBS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/io/IOException.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/util/Collection.h"
#include "java/io/InputStream.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader$Parser::class$ = NULL;
      jmethodID *EopHistoryLoader$Parser::mids$ = NULL;
      bool EopHistoryLoader$Parser::live$ = false;

      jclass EopHistoryLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_newBulletinBParser_fb8652dbb40a7db7] = env->getStaticMethodID(cls, "newBulletinBParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newEopC04Parser_fb8652dbb40a7db7] = env->getStaticMethodID(cls, "newEopC04Parser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsColumnsParser_0a1dafb5f0540662] = env->getStaticMethodID(cls, "newFinalsColumnsParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;Z)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_newFinalsXmlParser_fb8652dbb40a7db7] = env->getStaticMethodID(cls, "newFinalsXmlParser", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScales;)Lorg/orekit/frames/EopHistoryLoader$Parser;");
          mids$[mid_parse_b79893aca4083ad5] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newBulletinBParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newBulletinBParser_fb8652dbb40a7db7], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newEopC04Parser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newEopC04Parser_fb8652dbb40a7db7], a0.this$, a1.this$, a2.this$));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsColumnsParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsColumnsParser_0a1dafb5f0540662], a0.this$, a1.this$, a2.this$, a3));
      }

      EopHistoryLoader$Parser EopHistoryLoader$Parser::newFinalsXmlParser(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScales & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return EopHistoryLoader$Parser(env->callStaticObjectMethod(cls, mids$[mid_newFinalsXmlParser_fb8652dbb40a7db7], a0.this$, a1.this$, a2.this$));
      }

      ::java::util::Collection EopHistoryLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_parse_b79893aca4083ad5], a0.this$, a1.this$));
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
      static PyObject *t_EopHistoryLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader$Parser_newBulletinBParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newEopC04Parser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newFinalsColumnsParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_newFinalsXmlParser(PyTypeObject *type, PyObject *args);
      static PyObject *t_EopHistoryLoader$Parser_parse(t_EopHistoryLoader$Parser *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newBulletinBParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newEopC04Parser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newFinalsColumnsParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, newFinalsXmlParser, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader$Parser)[] = {
        { Py_tp_methods, t_EopHistoryLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader$Parser, t_EopHistoryLoader$Parser, EopHistoryLoader$Parser);

      void t_EopHistoryLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader$Parser), &PY_TYPE_DEF(EopHistoryLoader$Parser), module, "EopHistoryLoader$Parser", 0);
      }

      void t_EopHistoryLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "class_", make_descriptor(EopHistoryLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "wrapfn_", make_descriptor(t_EopHistoryLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader$Parser::wrap_Object(EopHistoryLoader$Parser(((t_EopHistoryLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader$Parser_newBulletinBParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newBulletinBParser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newBulletinBParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newEopC04Parser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newEopC04Parser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newEopC04Parser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newFinalsColumnsParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        jboolean a3;
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "KkkZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newFinalsColumnsParser(a0, a1, a2, a3));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newFinalsColumnsParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_newFinalsXmlParser(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        EopHistoryLoader$Parser result((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::frames::EopHistoryLoader$Parser::newFinalsXmlParser(a0, a1, a2));
          return t_EopHistoryLoader$Parser::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "newFinalsXmlParser", args);
        return NULL;
      }

      static PyObject *t_EopHistoryLoader$Parser_parse(t_EopHistoryLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::Collection result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::frames::PY_TYPE(EOPEntry));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LaguerreRuleFactory::class$ = NULL;
          jmethodID *LaguerreRuleFactory::mids$ = NULL;
          bool LaguerreRuleFactory::live$ = false;

          jclass LaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LaguerreRuleFactory::LaguerreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
      namespace integration {
        namespace gauss {
          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LaguerreRuleFactory)[] = {
            { Py_tp_methods, t_LaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LaguerreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LaguerreRuleFactory, t_LaguerreRuleFactory, LaguerreRuleFactory);

          void t_LaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LaguerreRuleFactory), &PY_TYPE_DEF(LaguerreRuleFactory), module, "LaguerreRuleFactory", 0);
          }

          void t_LaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "class_", make_descriptor(LaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "wrapfn_", make_descriptor(t_LaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LaguerreRuleFactory::wrap_Object(LaguerreRuleFactory(((t_LaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LaguerreRuleFactory object((jobject) NULL);

            INT_CALL(object = LaguerreRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/ILRSHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *ILRSHeader::class$ = NULL;
        jmethodID *ILRSHeader::mids$ = NULL;
        bool ILRSHeader::live$ = false;

        jclass ILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/ILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEndEpoch_80e11148db499dda] = env->getMethodID(cls, "getEndEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFormat_d2c8eb4129821f0e] = env->getMethodID(cls, "getFormat", "()Ljava/lang/String;");
            mids$[mid_getIlrsSatelliteId_d2c8eb4129821f0e] = env->getMethodID(cls, "getIlrsSatelliteId", "()Ljava/lang/String;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNoradId_d2c8eb4129821f0e] = env->getMethodID(cls, "getNoradId", "()Ljava/lang/String;");
            mids$[mid_getProductionEpoch_70bc100457881a79] = env->getMethodID(cls, "getProductionEpoch", "()Lorg/orekit/time/DateComponents;");
            mids$[mid_getProductionHour_d6ab429752e7c267] = env->getMethodID(cls, "getProductionHour", "()I");
            mids$[mid_getSequenceNumber_d6ab429752e7c267] = env->getMethodID(cls, "getSequenceNumber", "()I");
            mids$[mid_getSic_d2c8eb4129821f0e] = env->getMethodID(cls, "getSic", "()Ljava/lang/String;");
            mids$[mid_getStartEpoch_80e11148db499dda] = env->getMethodID(cls, "getStartEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getTargetClass_d6ab429752e7c267] = env->getMethodID(cls, "getTargetClass", "()I");
            mids$[mid_getTargetLocation_d6ab429752e7c267] = env->getMethodID(cls, "getTargetLocation", "()I");
            mids$[mid_getVersion_d6ab429752e7c267] = env->getMethodID(cls, "getVersion", "()I");
            mids$[mid_setEndEpoch_8497861b879c83f7] = env->getMethodID(cls, "setEndEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setFormat_105e1eadb709d9ac] = env->getMethodID(cls, "setFormat", "(Ljava/lang/String;)V");
            mids$[mid_setIlrsSatelliteId_105e1eadb709d9ac] = env->getMethodID(cls, "setIlrsSatelliteId", "(Ljava/lang/String;)V");
            mids$[mid_setName_105e1eadb709d9ac] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setNoradId_105e1eadb709d9ac] = env->getMethodID(cls, "setNoradId", "(Ljava/lang/String;)V");
            mids$[mid_setProductionEpoch_badbbe8d1e1c6168] = env->getMethodID(cls, "setProductionEpoch", "(Lorg/orekit/time/DateComponents;)V");
            mids$[mid_setProductionHour_8fd427ab23829bf5] = env->getMethodID(cls, "setProductionHour", "(I)V");
            mids$[mid_setSequenceNumber_8fd427ab23829bf5] = env->getMethodID(cls, "setSequenceNumber", "(I)V");
            mids$[mid_setSic_105e1eadb709d9ac] = env->getMethodID(cls, "setSic", "(Ljava/lang/String;)V");
            mids$[mid_setStartEpoch_8497861b879c83f7] = env->getMethodID(cls, "setStartEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setTargetClass_8fd427ab23829bf5] = env->getMethodID(cls, "setTargetClass", "(I)V");
            mids$[mid_setTargetLocation_8fd427ab23829bf5] = env->getMethodID(cls, "setTargetLocation", "(I)V");
            mids$[mid_setVersion_8fd427ab23829bf5] = env->getMethodID(cls, "setVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ILRSHeader::ILRSHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::time::AbsoluteDate ILRSHeader::getEndEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndEpoch_80e11148db499dda]));
        }

        ::java::lang::String ILRSHeader::getFormat() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormat_d2c8eb4129821f0e]));
        }

        ::java::lang::String ILRSHeader::getIlrsSatelliteId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIlrsSatelliteId_d2c8eb4129821f0e]));
        }

        ::java::lang::String ILRSHeader::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        ::java::lang::String ILRSHeader::getNoradId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNoradId_d2c8eb4129821f0e]));
        }

        ::org::orekit::time::DateComponents ILRSHeader::getProductionEpoch() const
        {
          return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getProductionEpoch_70bc100457881a79]));
        }

        jint ILRSHeader::getProductionHour() const
        {
          return env->callIntMethod(this$, mids$[mid_getProductionHour_d6ab429752e7c267]);
        }

        jint ILRSHeader::getSequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSequenceNumber_d6ab429752e7c267]);
        }

        ::java::lang::String ILRSHeader::getSic() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSic_d2c8eb4129821f0e]));
        }

        ::org::orekit::time::AbsoluteDate ILRSHeader::getStartEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartEpoch_80e11148db499dda]));
        }

        jint ILRSHeader::getTargetClass() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetClass_d6ab429752e7c267]);
        }

        jint ILRSHeader::getTargetLocation() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetLocation_d6ab429752e7c267]);
        }

        jint ILRSHeader::getVersion() const
        {
          return env->callIntMethod(this$, mids$[mid_getVersion_d6ab429752e7c267]);
        }

        void ILRSHeader::setEndEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEndEpoch_8497861b879c83f7], a0.this$);
        }

        void ILRSHeader::setFormat(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFormat_105e1eadb709d9ac], a0.this$);
        }

        void ILRSHeader::setIlrsSatelliteId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIlrsSatelliteId_105e1eadb709d9ac], a0.this$);
        }

        void ILRSHeader::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_105e1eadb709d9ac], a0.this$);
        }

        void ILRSHeader::setNoradId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoradId_105e1eadb709d9ac], a0.this$);
        }

        void ILRSHeader::setProductionEpoch(const ::org::orekit::time::DateComponents & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionEpoch_badbbe8d1e1c6168], a0.this$);
        }

        void ILRSHeader::setProductionHour(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionHour_8fd427ab23829bf5], a0);
        }

        void ILRSHeader::setSequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSequenceNumber_8fd427ab23829bf5], a0);
        }

        void ILRSHeader::setSic(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSic_105e1eadb709d9ac], a0.this$);
        }

        void ILRSHeader::setStartEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStartEpoch_8497861b879c83f7], a0.this$);
        }

        void ILRSHeader::setTargetClass(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetClass_8fd427ab23829bf5], a0);
        }

        void ILRSHeader::setTargetLocation(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetLocation_8fd427ab23829bf5], a0);
        }

        void ILRSHeader::setVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_8fd427ab23829bf5], a0);
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
        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_ILRSHeader__fields_[] = {
          DECLARE_GETSET_FIELD(t_ILRSHeader, endEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, format),
          DECLARE_GETSET_FIELD(t_ILRSHeader, ilrsSatelliteId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, name),
          DECLARE_GETSET_FIELD(t_ILRSHeader, noradId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionHour),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sequenceNumber),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sic),
          DECLARE_GETSET_FIELD(t_ILRSHeader, startEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetClass),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetLocation),
          DECLARE_GETSET_FIELD(t_ILRSHeader, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ILRSHeader__methods_[] = {
          DECLARE_METHOD(t_ILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, getEndEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getFormat, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getIlrsSatelliteId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getName, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getNoradId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionHour, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSic, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getStartEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetClass, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetLocation, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, setEndEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setFormat, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setIlrsSatelliteId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setName, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setNoradId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionHour, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSequenceNumber, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSic, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setStartEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetClass, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetLocation, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ILRSHeader)[] = {
          { Py_tp_methods, t_ILRSHeader__methods_ },
          { Py_tp_init, (void *) t_ILRSHeader_init_ },
          { Py_tp_getset, t_ILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ILRSHeader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ILRSHeader, t_ILRSHeader, ILRSHeader);

        void t_ILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(ILRSHeader), &PY_TYPE_DEF(ILRSHeader), module, "ILRSHeader", 0);
        }

        void t_ILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "class_", make_descriptor(ILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "wrapfn_", make_descriptor(t_ILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ILRSHeader::initializeClass, 1)))
            return NULL;
          return t_ILRSHeader::wrap_Object(ILRSHeader(((t_ILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          ILRSHeader object((jobject) NULL);

          INT_CALL(object = ILRSHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFormat());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIlrsSatelliteId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getNoradId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::DateComponents result((jobject) NULL);
          OBJ_CALL(result = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getProductionHour());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSic());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetClass());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetLocation());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getVersion());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEndEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEndEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFormat(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFormat", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setIlrsSatelliteId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIlrsSatelliteId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setName", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setNoradId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoradId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::DateComponents a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setProductionEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setProductionHour(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionHour", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSic(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSic", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setStartEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStartEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetClass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetClass", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetLocation(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetLocation", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEndEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "endEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFormat());
          return j2p(value);
        }
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFormat(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "format", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIlrsSatelliteId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setIlrsSatelliteId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ilrsSatelliteId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "name", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getNoradId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setNoradId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noradId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          OBJ_CALL(value = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(value);
        }
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::DateComponents value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
            {
              INT_CALL(self->object.setProductionEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getProductionHour());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setProductionHour(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionHour", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sequenceNumber", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSic());
          return j2p(value);
        }
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSic(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sic", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setStartEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "startEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetClass());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetClass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetClass", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetLocation());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetLocation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetLocation", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getVersion());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *GaussNewtonOptimizer::class$ = NULL;
            jmethodID *GaussNewtonOptimizer::mids$ = NULL;
            bool GaussNewtonOptimizer::live$ = false;

            jclass GaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_b8dd78271800be46] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Z)V");
                mids$[mid_getDecomposer_8a28a9a8bab78fab] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_isFormNormalEquations_eee3de00fe971136] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_45e9e6e9254f21c4] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withDecomposer_49dcfa68243d5019] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_609117fbd05d2861] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GaussNewtonOptimizer::GaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            GaussNewtonOptimizer::GaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8dd78271800be46, a0.this$, a1)) {}

            ::org::hipparchus::linear::MatrixDecomposer GaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_8a28a9a8bab78fab]));
            }

            jboolean GaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_eee3de00fe971136]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum GaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_45e9e6e9254f21c4], a0.this$));
            }

            ::java::lang::String GaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_49dcfa68243d5019], a0.this$));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_609117fbd05d2861], a0));
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
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data);
            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_GaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, formNormalEquations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_GaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_GaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_GaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_GaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GaussNewtonOptimizer, t_GaussNewtonOptimizer, GaussNewtonOptimizer);

            void t_GaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(GaussNewtonOptimizer), &PY_TYPE_DEF(GaussNewtonOptimizer), module, "GaussNewtonOptimizer", 0);
            }

            void t_GaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "class_", make_descriptor(GaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "wrapfn_", make_descriptor(t_GaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_GaussNewtonOptimizer::wrap_Object(GaussNewtonOptimizer(((t_GaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  GaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = GaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 2:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  GaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZ", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = GaussNewtonOptimizer(a0, a1));
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

            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(GaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldEnablingPredicate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEnablingPredicate::class$ = NULL;
        jmethodID *PythonFieldEnablingPredicate::mids$ = NULL;
        bool PythonFieldEnablingPredicate::live$ = false;

        jclass PythonFieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_f8fad546fff5b1a3] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEnablingPredicate::PythonFieldEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldEnablingPredicate::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self);
        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data);
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonFieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, self),
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonFieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonFieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEnablingPredicate, t_PythonFieldEnablingPredicate, PythonFieldEnablingPredicate);
        PyObject *t_PythonFieldEnablingPredicate::wrap_Object(const PythonFieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEnablingPredicate), &PY_TYPE_DEF(PythonFieldEnablingPredicate), module, "PythonFieldEnablingPredicate", 1);
        }

        void t_PythonFieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "class_", make_descriptor(PythonFieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "wrapfn_", make_descriptor(t_PythonFieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonFieldEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEnablingPredicate::wrap_Object(PythonFieldEnablingPredicate(((t_PythonFieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonFieldEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data)
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
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OpsStatus::class$ = NULL;
              jmethodID *OpsStatus::mids$ = NULL;
              bool OpsStatus::live$ = false;
              OpsStatus *OpsStatus::BACKUP = NULL;
              OpsStatus *OpsStatus::DECAYED = NULL;
              OpsStatus *OpsStatus::EXTENDED_MISSION = NULL;
              OpsStatus *OpsStatus::NONOPERATIONAL = NULL;
              OpsStatus *OpsStatus::OPERATIONAL = NULL;
              OpsStatus *OpsStatus::PARTIALLY_OPERATIONAL = NULL;
              OpsStatus *OpsStatus::REENTRY_MODE = NULL;
              OpsStatus *OpsStatus::STANBY = NULL;
              OpsStatus *OpsStatus::UNKNOWN = NULL;

              jclass OpsStatus::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_e54e3e39cbb31e72] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_values_36dffa7e7cb47adb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  BACKUP = new OpsStatus(env->getStaticObjectField(cls, "BACKUP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  DECAYED = new OpsStatus(env->getStaticObjectField(cls, "DECAYED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  EXTENDED_MISSION = new OpsStatus(env->getStaticObjectField(cls, "EXTENDED_MISSION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  NONOPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "NONOPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  PARTIALLY_OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "PARTIALLY_OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  REENTRY_MODE = new OpsStatus(env->getStaticObjectField(cls, "REENTRY_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  STANBY = new OpsStatus(env->getStaticObjectField(cls, "STANBY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  UNKNOWN = new OpsStatus(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OpsStatus::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
              }

              OpsStatus OpsStatus::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OpsStatus(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e54e3e39cbb31e72], a0.this$));
              }

              JArray< OpsStatus > OpsStatus::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OpsStatus >(env->callStaticObjectMethod(cls, mids$[mid_values_36dffa7e7cb47adb]));
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
              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OpsStatus_values(PyTypeObject *type);
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data);
              static PyGetSetDef t_OpsStatus__fields_[] = {
                DECLARE_GET_FIELD(t_OpsStatus, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpsStatus__methods_[] = {
                DECLARE_METHOD(t_OpsStatus, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, toString, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpsStatus)[] = {
                { Py_tp_methods, t_OpsStatus__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpsStatus__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpsStatus)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OpsStatus, t_OpsStatus, OpsStatus);
              PyObject *t_OpsStatus::wrap_Object(const OpsStatus& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OpsStatus::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OpsStatus::install(PyObject *module)
              {
                installType(&PY_TYPE(OpsStatus), &PY_TYPE_DEF(OpsStatus), module, "OpsStatus", 0);
              }

              void t_OpsStatus::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "class_", make_descriptor(OpsStatus::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "wrapfn_", make_descriptor(t_OpsStatus::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpsStatus::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "BACKUP", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::BACKUP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "DECAYED", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::DECAYED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "EXTENDED_MISSION", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::EXTENDED_MISSION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "NONOPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::NONOPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "PARTIALLY_OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::PARTIALLY_OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "REENTRY_MODE", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::REENTRY_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "STANBY", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::STANBY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "UNKNOWN", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::UNKNOWN)));
              }

              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpsStatus::initializeClass, 1)))
                  return NULL;
                return t_OpsStatus::wrap_Object(OpsStatus(((t_OpsStatus *) arg)->object.this$));
              }
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpsStatus::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OpsStatus), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OpsStatus result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::valueOf(a0));
                  return t_OpsStatus::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OpsStatus_values(PyTypeObject *type)
              {
                JArray< OpsStatus > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::values());
                return JArray<jobject>(result.this$).wrap(t_OpsStatus::wrap_jobject);
              }
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data)
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
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorChangingVisitor::class$ = NULL;
      jmethodID *FieldVectorChangingVisitor::mids$ = NULL;
      bool FieldVectorChangingVisitor::live$ = false;

      jclass FieldVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_f6328613456309a1] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_48ca1125d4856a74] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_fafd637e37b17b35] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_f6328613456309a1]));
      }

      void FieldVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_48ca1125d4856a74], a0, a1, a2);
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_fafd637e37b17b35], a0, a1.this$));
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
      static PyObject *t_FieldVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorChangingVisitor_of_(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_end(t_FieldVectorChangingVisitor *self);
      static PyObject *t_FieldVectorChangingVisitor_start(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_visit(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_get__parameters_(t_FieldVectorChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorChangingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorChangingVisitor, t_FieldVectorChangingVisitor, FieldVectorChangingVisitor);
      PyObject *t_FieldVectorChangingVisitor::wrap_Object(const FieldVectorChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorChangingVisitor *self = (t_FieldVectorChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorChangingVisitor *self = (t_FieldVectorChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorChangingVisitor), &PY_TYPE_DEF(FieldVectorChangingVisitor), module, "FieldVectorChangingVisitor", 0);
      }

      void t_FieldVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "class_", make_descriptor(FieldVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "wrapfn_", make_descriptor(t_FieldVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorChangingVisitor::wrap_Object(FieldVectorChangingVisitor(((t_FieldVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorChangingVisitor_of_(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorChangingVisitor_end(t_FieldVectorChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorChangingVisitor_start(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldVectorChangingVisitor_visit(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorChangingVisitor_get__parameters_(t_FieldVectorChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$VanishingCutHandler::class$ = NULL;
        jmethodID *BSPTree$VanishingCutHandler::mids$ = NULL;
        bool BSPTree$VanishingCutHandler::live$ = false;

        jclass BSPTree$VanishingCutHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_fixNode_ae840c8bc9aa4ac3] = env->getMethodID(cls, "fixNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$VanishingCutHandler::fixNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_fixNode_ae840c8bc9aa4ac3], a0.this$));
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
      namespace partitioning {
        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args);
        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data);
        static PyGetSetDef t_BSPTree$VanishingCutHandler__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$VanishingCutHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$VanishingCutHandler__methods_[] = {
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, fixNode, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$VanishingCutHandler)[] = {
          { Py_tp_methods, t_BSPTree$VanishingCutHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$VanishingCutHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$VanishingCutHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$VanishingCutHandler, t_BSPTree$VanishingCutHandler, BSPTree$VanishingCutHandler);
        PyObject *t_BSPTree$VanishingCutHandler::wrap_Object(const BSPTree$VanishingCutHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$VanishingCutHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$VanishingCutHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$VanishingCutHandler), &PY_TYPE_DEF(BSPTree$VanishingCutHandler), module, "BSPTree$VanishingCutHandler", 0);
        }

        void t_BSPTree$VanishingCutHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "class_", make_descriptor(BSPTree$VanishingCutHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "wrapfn_", make_descriptor(t_BSPTree$VanishingCutHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 1)))
            return NULL;
          return t_BSPTree$VanishingCutHandler::wrap_Object(BSPTree$VanishingCutHandler(((t_BSPTree$VanishingCutHandler *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.fixNode(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "fixNode", arg);
          return NULL;
        }
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *DescriptiveStatistics::class$ = NULL;
        jmethodID *DescriptiveStatistics::mids$ = NULL;
        bool DescriptiveStatistics::live$ = false;

        jclass DescriptiveStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/DescriptiveStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_accept_1ad26e8c8c0cd65b] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_apply_57797f66ddfe155e] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/stat/descriptive/UnivariateStatistic;)D");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_b954cb56014d0dc4] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/DescriptiveStatistics;");
            mids$[mid_getElement_ce4c02d583456bc9] = env->getMethodID(cls, "getElement", "(I)D");
            mids$[mid_getGeometricMean_9981f74b2d109da6] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getKurtosis_9981f74b2d109da6] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_9981f74b2d109da6] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_bf28ed64d6e8576b] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_9981f74b2d109da6] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_9981f74b2d109da6] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSkewness_9981f74b2d109da6] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSortedValues_be783177b060994b] = env->getMethodID(cls, "getSortedValues", "()[D");
            mids$[mid_getStandardDeviation_9981f74b2d109da6] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_9981f74b2d109da6] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfSquares_9981f74b2d109da6] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getValues_be783177b060994b] = env->getMethodID(cls, "getValues", "()[D");
            mids$[mid_getVariance_9981f74b2d109da6] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_getWindowSize_d6ab429752e7c267] = env->getMethodID(cls, "getWindowSize", "()I");
            mids$[mid_removeMostRecentValue_ff7cb6c242604316] = env->getMethodID(cls, "removeMostRecentValue", "()V");
            mids$[mid_replaceMostRecentValue_bf28ed64d6e8576b] = env->getMethodID(cls, "replaceMostRecentValue", "(D)D");
            mids$[mid_setWindowSize_8fd427ab23829bf5] = env->getMethodID(cls, "setWindowSize", "(I)V");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DescriptiveStatistics::DescriptiveStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        DescriptiveStatistics::DescriptiveStatistics(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

        DescriptiveStatistics::DescriptiveStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

        void DescriptiveStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_1ad26e8c8c0cd65b], a0);
        }

        void DescriptiveStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_1ad26e8c8c0cd65b], a0);
        }

        jdouble DescriptiveStatistics::apply(const ::org::hipparchus::stat::descriptive::UnivariateStatistic & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_apply_57797f66ddfe155e], a0.this$);
        }

        void DescriptiveStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        DescriptiveStatistics DescriptiveStatistics::copy() const
        {
          return DescriptiveStatistics(env->callObjectMethod(this$, mids$[mid_copy_b954cb56014d0dc4]));
        }

        jdouble DescriptiveStatistics::getElement(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElement_ce4c02d583456bc9], a0);
        }

        jdouble DescriptiveStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_9981f74b2d109da6]);
        }

        jdouble DescriptiveStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_9981f74b2d109da6]);
        }

        jdouble DescriptiveStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_9981f74b2d109da6]);
        }

        jdouble DescriptiveStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_9981f74b2d109da6]);
        }

        jdouble DescriptiveStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_9981f74b2d109da6]);
        }

        jlong DescriptiveStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        jdouble DescriptiveStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_bf28ed64d6e8576b], a0);
        }

        jdouble DescriptiveStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_9981f74b2d109da6]);
        }

        jdouble DescriptiveStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_9981f74b2d109da6]);
        }

        jdouble DescriptiveStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_9981f74b2d109da6]);
        }

        JArray< jdouble > DescriptiveStatistics::getSortedValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSortedValues_be783177b060994b]));
        }

        jdouble DescriptiveStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_9981f74b2d109da6]);
        }

        jdouble DescriptiveStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_9981f74b2d109da6]);
        }

        jdouble DescriptiveStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_9981f74b2d109da6]);
        }

        JArray< jdouble > DescriptiveStatistics::getValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_be783177b060994b]));
        }

        jdouble DescriptiveStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_9981f74b2d109da6]);
        }

        jint DescriptiveStatistics::getWindowSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getWindowSize_d6ab429752e7c267]);
        }

        void DescriptiveStatistics::removeMostRecentValue() const
        {
          env->callVoidMethod(this$, mids$[mid_removeMostRecentValue_ff7cb6c242604316]);
        }

        jdouble DescriptiveStatistics::replaceMostRecentValue(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_replaceMostRecentValue_bf28ed64d6e8576b], a0);
        }

        void DescriptiveStatistics::setWindowSize(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWindowSize_8fd427ab23829bf5], a0);
        }

        ::java::lang::String DescriptiveStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args);
        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data);
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data);
        static PyGetSetDef t_DescriptiveStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_DescriptiveStatistics, geometricMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, kurtosis),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, max),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, mean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, min),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, n),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, populationVariance),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, skewness),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sortedValues),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sum),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, values),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, variance),
          DECLARE_GETSET_FIELD(t_DescriptiveStatistics, windowSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DescriptiveStatistics__methods_[] = {
          DECLARE_METHOD(t_DescriptiveStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, accept, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, addValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, apply, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getElement, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSortedValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getWindowSize, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, removeMostRecentValue, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, replaceMostRecentValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, setWindowSize, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DescriptiveStatistics)[] = {
          { Py_tp_methods, t_DescriptiveStatistics__methods_ },
          { Py_tp_init, (void *) t_DescriptiveStatistics_init_ },
          { Py_tp_getset, t_DescriptiveStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DescriptiveStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DescriptiveStatistics, t_DescriptiveStatistics, DescriptiveStatistics);

        void t_DescriptiveStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(DescriptiveStatistics), &PY_TYPE_DEF(DescriptiveStatistics), module, "DescriptiveStatistics", 0);
        }

        void t_DescriptiveStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "class_", make_descriptor(DescriptiveStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "wrapfn_", make_descriptor(t_DescriptiveStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DescriptiveStatistics::initializeClass, 1)))
            return NULL;
          return t_DescriptiveStatistics::wrap_Object(DescriptiveStatistics(((t_DescriptiveStatistics *) arg)->object.this$));
        }
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DescriptiveStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DescriptiveStatistics object((jobject) NULL);

              INT_CALL(object = DescriptiveStatistics());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
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

        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.accept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "accept", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg)
        {
          ::org::hipparchus::stat::descriptive::UnivariateStatistic a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::stat::descriptive::UnivariateStatistic::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self)
        {
          DescriptiveStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_DescriptiveStatistics::wrap_Object(result);
        }

        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getElement(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElement", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSortedValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getWindowSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.removeMostRecentValue());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.replaceMostRecentValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "replaceMostRecentValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setWindowSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWindowSize", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DescriptiveStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSortedValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getWindowSize());
          return PyLong_FromLong((long) value);
        }
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setWindowSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "windowSize", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader::class$ = NULL;
            jmethodID *SOLFSMYDataLoader::mids$ = NULL;
            bool SOLFSMYDataLoader::live$ = false;

            jclass SOLFSMYDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7cb2659f4799e4d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_815c7115fae241c1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader::SOLFSMYDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cb2659f4799e4d2, a0.this$)) {}

            ::java::util::SortedSet SOLFSMYDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_815c7115fae241c1]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
            }

            void SOLFSMYDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
            }

            jboolean SOLFSMYDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args);
            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, dataSet),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, maxDate),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader, t_SOLFSMYDataLoader, SOLFSMYDataLoader);

            void t_SOLFSMYDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader), &PY_TYPE_DEF(SOLFSMYDataLoader), module, "SOLFSMYDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters)));
            }

            void t_SOLFSMYDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "class_", make_descriptor(SOLFSMYDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader::wrap_Object(SOLFSMYDataLoader(((t_SOLFSMYDataLoader *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              SOLFSMYDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = SOLFSMYDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(SOLFSMYDataLoader$LineParameters));
            }

            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "loadData", args);
              return NULL;
            }

            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsIntegrator::class$ = NULL;
        jmethodID *AdamsIntegrator::mids$ = NULL;
        bool AdamsIntegrator::live$ = false;

        jclass AdamsIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5131bdc677927a0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_11caa83b13f15278] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_3b00c059d3ccb86d] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_afbfc3ddbfe58d51] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_e958729b32219ba2] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");
            mids$[mid_initializeHighOrderDerivatives_7145db39e893543c] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_errorEstimation_37b70b019b7ede26] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_26e1f9270ed9200b] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5, const JArray< jdouble > & a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5131bdc677927a0, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_11caa83b13f15278, a0.this$, a1, a2, a3, a4, a5, a6)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative AdamsIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3b00c059d3ccb86d], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_afbfc3ddbfe58d51], a0.this$));
        }

        void AdamsIntegrator::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_e958729b32219ba2], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args);

        static PyMethodDef t_AdamsIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsIntegrator)[] = {
          { Py_tp_methods, t_AdamsIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsIntegrator, t_AdamsIntegrator, AdamsIntegrator);

        void t_AdamsIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsIntegrator), &PY_TYPE_DEF(AdamsIntegrator), module, "AdamsIntegrator", 0);
        }

        void t_AdamsIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "class_", make_descriptor(AdamsIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "wrapfn_", make_descriptor(t_AdamsIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsIntegrator::wrap_Object(AdamsIntegrator(((t_AdamsIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              JArray< jdouble > a5((jobject) NULL);
              JArray< jdouble > a6((jobject) NULL);
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDD[D[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdamsIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonAbstractEopParser.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/util/Collection.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractEopParser::class$ = NULL;
      jmethodID *PythonAbstractEopParser::mids$ = NULL;
      bool PythonAbstractEopParser::live$ = false;

      jclass PythonAbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d3156720a4b7f5bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_b79893aca4083ad5] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractEopParser::PythonAbstractEopParser(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::frames::AbstractEopParser(env->newObject(initializeClass, &mids$, mid_init$_d3156720a4b7f5bd, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractEopParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAbstractEopParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAbstractEopParser::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self);
      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data);
      static PyGetSetDef t_PythonAbstractEopParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractEopParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractEopParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEopParser)[] = {
        { Py_tp_methods, t_PythonAbstractEopParser__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractEopParser_init_ },
        { Py_tp_getset, t_PythonAbstractEopParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractEopParser)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractEopParser),
        NULL
      };

      DEFINE_TYPE(PythonAbstractEopParser, t_PythonAbstractEopParser, PythonAbstractEopParser);

      void t_PythonAbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractEopParser), &PY_TYPE_DEF(PythonAbstractEopParser), module, "PythonAbstractEopParser", 1);
      }

      void t_PythonAbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "class_", make_descriptor(PythonAbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "wrapfn_", make_descriptor(t_PythonAbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractEopParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;", (void *) t_PythonAbstractEopParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractEopParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractEopParser::wrap_Object(PythonAbstractEopParser(((t_PythonAbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        PythonAbstractEopParser object((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractEopParser(a0, a1, a2));
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

      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("parse", result);
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

      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationsBlock::class$ = NULL;
            jmethodID *ObservationsBlock::mids$ = NULL;
            bool ObservationsBlock::live$ = false;

            jclass ObservationsBlock::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationsBlock");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addObservation_8a51a670ac73bd8f] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/Observation;)V");
                mids$[mid_addObservation_4de65b6441f7309e] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getObservations_d751c1a57012b438] = env->getMethodID(cls, "getObservations", "()Ljava/util/List;");
                mids$[mid_setObservations_aa335fea495d60e0] = env->getMethodID(cls, "setObservations", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ObservationsBlock::ObservationsBlock() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::Observation & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_8a51a670ac73bd8f], a0.this$);
            }

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_4de65b6441f7309e], a0.this$, a1.this$, a2);
            }

            ::java::util::List ObservationsBlock::getObservations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservations_d751c1a57012b438]));
            }

            void ObservationsBlock::setObservations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObservations_aa335fea495d60e0], a0.this$);
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
            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args);
            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self);
            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg);
            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data);
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data);
            static PyGetSetDef t_ObservationsBlock__fields_[] = {
              DECLARE_GETSET_FIELD(t_ObservationsBlock, observations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationsBlock__methods_[] = {
              DECLARE_METHOD(t_ObservationsBlock, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, addObservation, METH_VARARGS),
              DECLARE_METHOD(t_ObservationsBlock, getObservations, METH_NOARGS),
              DECLARE_METHOD(t_ObservationsBlock, setObservations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationsBlock)[] = {
              { Py_tp_methods, t_ObservationsBlock__methods_ },
              { Py_tp_init, (void *) t_ObservationsBlock_init_ },
              { Py_tp_getset, t_ObservationsBlock__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationsBlock)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ObservationsBlock, t_ObservationsBlock, ObservationsBlock);

            void t_ObservationsBlock::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationsBlock), &PY_TYPE_DEF(ObservationsBlock), module, "ObservationsBlock", 0);
            }

            void t_ObservationsBlock::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "class_", make_descriptor(ObservationsBlock::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "wrapfn_", make_descriptor(t_ObservationsBlock::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationsBlock::initializeClass, 1)))
                return NULL;
              return t_ObservationsBlock::wrap_Object(ObservationsBlock(((t_ObservationsBlock *) arg)->object.this$));
            }
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationsBlock::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds)
            {
              ObservationsBlock object((jobject) NULL);

              INT_CALL(object = ObservationsBlock());
              self->object = object;

              return 0;
            }

            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::Observation a0((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::tdm::Observation::initializeClass, &a0))
                  {
                    OBJ_CALL(self->object.addObservation(a0));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 3:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  jdouble a2;

                  if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(self->object.addObservation(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "addObservation", args);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Observation));
            }

            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setObservations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObservations", arg);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setObservations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "observations", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
